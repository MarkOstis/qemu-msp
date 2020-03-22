#include "qemu/osdep.h"
#include "cpu.h"
#include "hw/hw.h"
#include "hw/boards.h"
#include "sysemu/sysemu.h"
#include "exec/address-spaces.h"
#include "hw/loader.h"
#include "hw/msp430/msp430_mcus.h"
#include "qom/object.h"
#include "qemu/error-report.h"

typedef struct {
    char *mcu_name;

} board_msp430_state;

static board_msp430_state board_state;


static void b_msp430fr5739_init(MachineState *args)
{
    if (args->mcu == NULL) {
        error_report("Please define mcu name.");
        exit(1);
    }
    board_state.mcu_name = args->mcu;

    if (object_class_by_name(board_state.mcu_name) == NULL) {
        error_report("Creating object of type %s failed; no such type.",
                board_state.mcu_name);
        exit(1);
    }

    Object *obj = object_new(board_state.mcu_name);
    if (!obj) {
        error_report("Creating object of type %s failed.", board_state.mcu_name);
        exit(1);
    }

    MSP430Mcu *mcu = MSP430FR5739_MCU(obj);
    mcu->kernel_filename = args->kernel_filename;

    Error *err = NULL;

    object_property_set_bool(obj, true, "realized", &err);
    if (err) {
        error_report("Realization of object %s failed: %s",
                object_get_typename(obj), error_get_pretty(err));
        exit(1);
    }

    return;
}

static void b_msp430fr5739_machine_init(MachineClass *mc)
{
    mc->desc = "Board MSP430FR5739";
    mc->init = b_msp430fr5739_init;
    mc->is_default = 1;
}

DEFINE_MACHINE("b_msp430fr5739", b_msp430fr5739_machine_init) 