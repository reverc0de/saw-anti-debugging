/*****************************************************************
* File:		crackme02_NtGlobalFlag.c
* Description:	Es un crackme que implementa la protección 
* 		anti-debugging basada en NtGlobalFlag
* Date: 	27/04/2015
* Author: 	reverc0de
* Twitter:	@reverc0de
* Site:		www.reverc0de.com
* Github:	https://github.com/reverc0de/saw-anti-debugging	
*****************************************************************/

#include <windows.h>

long ntglobalfunc(void);

int main(void)
{
	unsigned long NtGlobalFlag = 0;	
	NtGlobalFlag = ntglobalfunc();
	// NtGlobalFlag == 0x70 (Bitwise) -> Debugger detectado
	// NtGlobalFlag != 0x70 (Bitwise) -> Debugger no detectado
	if (NtGlobalFlag & 0x70) 
	{
		MessageBox(0, "Debugger detectado!!","Crackme02 NtGlobalFlag",MB_OK);
		exit(0);
	}	
	MessageBox(0, "Debugger NO detectado!!","Crackme02 NtGlobalFlag",MB_OK);
	return 0;
}
