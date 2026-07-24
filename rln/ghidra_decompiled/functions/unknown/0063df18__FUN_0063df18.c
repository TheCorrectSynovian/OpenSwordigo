/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063df18
 * Function: FUN_0063df18
 * Signature: undefined FUN_0063df18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0063df18(long param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  iVar1 = 0;
                    /* catch() { ... } // from try @ 0063d9a8 with catch @ 0063df30
                       catch() { ... } // from try @ 0063da4c with catch @ 0063df30 */
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


