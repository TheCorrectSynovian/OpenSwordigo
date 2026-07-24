/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f714
 * Function: FUN_0061f714
 * Signature: undefined FUN_0061f714(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ssize_t FUN_0061f714(undefined8 *param_1,void *param_2,size_t param_3)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  
  do {
    __fd = fileno((FILE *)*param_1);
    sVar1 = read(__fd,param_2,param_3);
    if (sVar1 != -1) {
      return sVar1;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return -1;
}


