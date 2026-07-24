/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f468
 * Function: FUN_0061f468
 * Signature: undefined FUN_0061f468(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0061f468(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  FILE *__stream;
  
  __stream = (FILE *)*param_1;
  if ((__stream != (FILE *)0x0) && (*(char *)(param_1 + 1) != '\0')) {
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    iVar1 = fclose(__stream);
    while ((iVar1 != 0 && (*piVar2 == 4))) {
      iVar1 = fclose((FILE *)*param_1);
    }
  }
  return;
}


