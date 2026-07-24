/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667f5c
 * Function: FUN_00667f5c
 * Signature: undefined FUN_00667f5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667f5c(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
                    /* catch() { ... } // from try @ 00667f14 with catch @ 00667f74 */
  uVar3 = *(ulong *)(lVar4 + -0x18);
                    /* catch() { ... } // from try @ 00667ef0 with catch @ 00667f7c */
  if (uVar3 < param_4) {
                    /* catch() { ... } // from try @ 00667e48 with catch @ 00667f80 */
                    /* catch() { ... } // from try @ 00667db0 with catch @ 00667f84 */
                    /* catch() { ... } // from try @ 00667f20 with catch @ 00667f88 */
    return 0xffffffffffffffff;
  }
  uVar3 = uVar3 - param_4;
                    /* catch() { ... } // from try @ 00667c80 with catch @ 00667f9c
                       catch() { ... } // from try @ 00667d5c with catch @ 00667f9c
                       catch() { ... } // from try @ 00667dc4 with catch @ 00667f9c */
                    /* catch() { ... } // from try @ 00667b20 with catch @ 00667fa0 */
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  do {
                    /* catch() { ... } // from try @ 006678ac with catch @ 00667fb0 */
                    /* catch() { ... } // from try @ 006676d0 with catch @ 00667fbc */
    iVar2 = memcmp((void *)(lVar4 + uVar3),param_2,param_4);
    if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00667000 with catch @ 00667fc8 */
                    /* catch() { ... } // from try @ 00666ff4 with catch @ 00667fcc */
                    /* catch() { ... } // from try @ 006675a4 with catch @ 00667fd0 */
      return uVar3;
    }
                    /* catch() { ... } // from try @ 00667aa4 with catch @ 00667fa8 */
    bVar1 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar1);
                    /* catch() { ... } // from try @ 00666f10 with catch @ 00667fdc */
                    /* catch() { ... } // from try @ 00666e78 with catch @ 00667fe0 */
                    /* catch() { ... } // from try @ 0066739c with catch @ 00667fe4 */
                    /* catch() { ... } // from try @ 006672b0 with catch @ 00667fe8 */
                    /* catch() { ... } // from try @ 0066733c with catch @ 00667fec */
  return 0xffffffffffffffff;
}


