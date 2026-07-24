/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f4d0
 * Function: FUN_0061f4d0
 * Signature: undefined FUN_0061f4d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0061f4d0(long *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  FILE *__stream;
  
  if ((param_2 != 0) && (*param_1 == 0)) {
                    /* catch() { ... } // from try @ 0061f388 with catch @ 0061f4f0 */
                    /* catch() { ... } // from try @ 0061f1c0 with catch @ 0061f4f4 */
    piVar2 = (int *)__errno();
    __stream = (FILE *)0x0;
    *piVar2 = 0;
    while( true ) {
      iVar1 = fflush(__stream);
      if (iVar1 == 0) {
        *param_1 = param_2;
        *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 0061f518 to 0071f5e7 has its CatchHandler @ 0061f6fc */
        return param_1;
      }
      if (*piVar2 != 4) break;
                    /* catch() { ... } // from try @ 0061f3cc with catch @ 0061f548 */
      __stream = (FILE *)*param_1;
                    /* catch() { ... } // from try @ 0061f360 with catch @ 0061f54c */
    }
  }
                    /* catch() { ... } // from try @ 0061f3dc with catch @ 0061f544 */
  return (long *)0x0;
}


