// simple-serial-port.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SimpleSerial.h"


int main()
{
	char com_port[] = "\\\\.\\COM8";
	DWORD COM_BAUD_RATE = CBR_9600;
	SimpleSerial Serial(com_port, COM_BAUD_RATE);
    return 0;
}

