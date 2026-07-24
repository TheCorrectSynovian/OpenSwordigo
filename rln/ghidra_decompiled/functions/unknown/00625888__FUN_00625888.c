/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625888
 * Function: FUN_00625888
 * Signature: undefined FUN_00625888(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00625888(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
  FUN_006230e4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
                    /* try { // try from 006258c0 to 00725903 has its CatchHandler @ 0062543c */
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00625540 with catch @ 006258c4 */
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00625848 with catch @ 00625934
                       catch() { ... } // from try @ 00625904 with catch @ 00625934 */
      FUN_006652c8();
    }
                    /* catch() { ... } // from try @ 00625628 with catch @ 006258d8
                       catch() { ... } // from try @ 006256bc with catch @ 006258d8 */
                    /* catch() { ... } // from try @ 00625568 with catch @ 006258dc
                       catch() { ... } // from try @ 006255fc with catch @ 006258dc */
                    /* catch() { ... } // from try @ 00625764 with catch @ 006258e0 */
    (**(code **)(*plVar2 + 0x48))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
                    /* try { // try from 0062592c to 00725937 has its CatchHandler @ 0062543c */
      return param_1;
    }
  }
                    /* try { // try from 00625904 to 0072592b has its CatchHandler @ 00625934 */
  return param_1;
}


