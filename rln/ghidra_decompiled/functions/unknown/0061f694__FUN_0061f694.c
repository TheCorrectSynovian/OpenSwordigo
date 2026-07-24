/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f694
 * Function: FUN_0061f694
 * Signature: undefined FUN_0061f694(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0061f694(long *param_1)

{
  int iVar1;
  int *piVar2;
  FILE *__stream;
  
                    /* catch() { ... } // from try @ 0061f30c with catch @ 0061f694
                       catch() { ... } // from try @ 0061f320 with catch @ 0061f694
                       catch() { ... } // from try @ 0061f410 with catch @ 0061f694 */
                    /* catch() { ... } // from try @ 0061f16c with catch @ 0061f698
                       catch() { ... } // from try @ 0061f210 with catch @ 0061f698 */
  __stream = (FILE *)*param_1;
                    /* catch() { ... } // from try @ 0061f164 with catch @ 0061f6a8
                       catch() { ... } // from try @ 0061f23c with catch @ 0061f6a8 */
  if (__stream == (FILE *)0x0) {
    return (long *)0x0;
  }
  if ((char)param_1[1] != '\0') {
    piVar2 = (int *)__errno();
    *piVar2 = 0;
                    /* try { // try from 0061f6cc to 0071f6f3 has its CatchHandler @ 0061f6fc */
    while (iVar1 = fclose(__stream), iVar1 != 0) {
      if (*piVar2 != 4) {
        *param_1 = 0;
        return (long *)0x0;
      }
      __stream = (FILE *)*param_1;
    }
  }
                    /* try { // try from 0061f6f4 to 0071f6ff has its CatchHandler @ 0061f0fc */
  *param_1 = 0;
                    /* catch() { ... } // from try @ 0061f518 with catch @ 0061f6fc
                       catch() { ... } // from try @ 0061f6cc with catch @ 0061f6fc */
  return param_1;
}


