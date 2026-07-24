/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063dec0
 * Function: FUN_0063dec0
 * Signature: undefined FUN_0063dec0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0063dec0(long param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* catch() { ... } // from try @ 0063d824 with catch @ 0063dec0
                       catch() { ... } // from try @ 0063d91c with catch @ 0063dec0 */
  iVar1 = 0;
                    /* catch() { ... } // from try @ 0063db50 with catch @ 0063decc */
                    /* catch() { ... } // from try @ 0063d878 with catch @ 0063ded0 */
                    /* catch() { ... } // from try @ 0063d844 with catch @ 0063dee0 */
  if ((param_3 != 0) && (iVar1 = 2, param_3 == 1)) {
    iVar1 = 1;
  }
  iVar1 = fseek(*(FILE **)(param_1 + 0x40),param_2,iVar1);
  uVar2 = 0xffffffffffffffff;
  if (iVar1 == 0) {
    uVar2 = ftell(*(FILE **)(param_1 + 0x40));
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


