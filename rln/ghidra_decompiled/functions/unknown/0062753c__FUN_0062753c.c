/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062753c
 * Function: FUN_0062753c
 * Signature: undefined FUN_0062753c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062753c(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char local_8 [8];
  
                    /* catch() { ... } // from try @ 00626bf4 with catch @ 00627550 */
                    /* catch() { ... } // from try @ 00626fcc with catch @ 00627554 */
  FUN_00625fe4(local_8,param_1,1);
  if ((local_8[0] != '\0') &&
     (plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8), plVar3 != (long *)0x0
     )) {
                    /* catch() { ... } // from try @ 006268dc with catch @ 0062757c */
                    /* catch() { ... } // from try @ 00626848 with catch @ 00627580 */
    iVar2 = (**(code **)(*plVar3 + 0x30))();
                    /* catch() { ... } // from try @ 006268e4 with catch @ 00627584 */
    if (iVar2 != -1) {
      return 0;
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 1);
                    /* catch() { ... } // from try @ 00626850 with catch @ 006275bc */
    return 0xffffffff;
  }
  return 0xffffffff;
}


