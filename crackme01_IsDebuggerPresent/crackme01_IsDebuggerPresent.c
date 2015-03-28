/*****************************************************************
* File: 		crackme01_IsDebuggerPresent.c
* Description: 	Es un crackme con la proteccion IsDebuggerPresent
* Author: 		reverc0de
* Date: 		26/03/2015
* Github:		https://github.com/reverc0de/saw-anti-debugging	
*****************************************************************/

#include <windows.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (IsDebuggerPresent())
	{
		MessageBox(0, "Debugger detectado!!","Crackme01 IsDebuggerPresent",MB_OK);
		exit(0);
	}
	MessageBox(0, "Debugger NO detectado!!","Crackme01 IsDebuggerPresent",MB_OK);
	return 0;		
}
