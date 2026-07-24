/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f3e0
 * Function: FUN_0061f3e0
 * Signature: undefined FUN_0061f3e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t FUN_0061f3e0(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  
  __n = param_3;
  do {
                    /* try { // try from 0061f410 to 0071f437 has its CatchHandler @ 0061f694 */
    while (sVar1 = write(param_1,param_2,__n), sVar1 == -1) {
                    /* try { // try from 0061f438 to 0071f517 has its CatchHandler @ 0061f0fc */
      piVar2 = (int *)__errno();
      if (*piVar2 != 4) {
        return param_3 - __n;
      }
    }
    __n = __n - sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
  } while (__n != 0);
  return param_3;
}


