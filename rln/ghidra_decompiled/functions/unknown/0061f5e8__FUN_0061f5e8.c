/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f5e8
 * Function: FUN_0061f5e8
 * Signature: undefined FUN_0061f5e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0061f5e8(long *param_1,char *param_2,undefined4 param_3)

{
  char *__modes;
  FILE *pFVar1;
  
                    /* try { // try from 0061f5e8 to 0071f6cb has its CatchHandler @ 0061f0fc */
                    /* catch() { ... } // from try @ 0061f318 with catch @ 0061f5ec */
  __modes = (char *)FUN_0061f31c(param_3);
                    /* catch() { ... } // from try @ 0061f2e8 with catch @ 0061f604 */
  if ((__modes != (char *)0x0) && (*param_1 == 0)) {
    pFVar1 = fopen(param_2,__modes);
    *param_1 = (long)pFVar1;
    if (pFVar1 != (FILE *)0x0) {
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  return (long *)0x0;
}


