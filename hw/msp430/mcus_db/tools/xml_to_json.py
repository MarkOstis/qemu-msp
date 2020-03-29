import xmltodict
import pprint
import json

xml_file_name="./../svd/MSP430FR5739.svd"
json_file_name ="./../json/MSP430FR5739.json"

with open(xml_file_name, 'r') as file:
    data = file.read() #.replace('\n','')

str1 = "<register>\
            <name>ADC10CTL0</name>\
            <addressOffset>0x0700</addressOffset>\
            <size>16</size>\
            <description>ADC10 Control 0</description>\
            <fields>\
                <field>\
                <name>ADC10SC</name>\
                <description>[0:0] ADC10 Start Conversion</description>\
                <bitWidth>1</bitWidth>\
                <bitOffset>0</bitOffset>\
                </field>\
            </fields>\
        </register>"

json_data = xmltodict.parse(data)
print(json.dumps(xmltodict.parse(data)))
print(json_data)

try:
    f = open(json_file_name)
    # Do something with the file
except IOError:
    open(json_file_name, 'a').close()

with open(json_file_name, 'w') as f:
        json.dump(json_data, f, indent=2)

