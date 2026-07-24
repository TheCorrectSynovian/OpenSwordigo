/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006409b0
 * Function: FUN_006409b0
 * Signature: undefined FUN_006409b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006409b0(long *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
                    /* try { // try from 006409d0 to 007409db has its CatchHandler @ 0063f67c */
                    /* catch() { ... } // from try @ 00640300 with catch @ 006409d8 */
                    /* catch() { ... } // from try @ 00640ae0 with catch @ 006409dc
                       catch() { ... } // from try @ 00640b5c with catch @ 006409dc
                       catch() { ... } // from try @ 00640e4c with catch @ 006409dc
                       catch() { ... } // from try @ 00641104 with catch @ 006409dc
                       catch() { ... } // from try @ 00641204 with catch @ 006409dc
                       catch() { ... } // from try @ 006416b4 with catch @ 006409dc */
    FUN_00640490(param_1,param_2,sVar2);
    return param_1;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  return param_1;
}


