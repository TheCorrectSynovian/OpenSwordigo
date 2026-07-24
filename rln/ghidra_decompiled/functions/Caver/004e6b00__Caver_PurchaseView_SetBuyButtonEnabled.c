/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e6b00
 * Function: Caver::PurchaseView::SetBuyButtonEnabled
 * Signature: undefined __thiscall SetBuyButtonEnabled(PurchaseView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::SetBuyButtonEnabled(bool) */

void __thiscall Caver::PurchaseView::SetBuyButtonEnabled(PurchaseView *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  GUIButton *pGVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  puVar4 = &local_30;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pGVar3 = *(GUIButton **)(this + 0x128);
                    /* try { // try from 004e6b24 to 005e6b27 has its CatchHandler @ 004e6c54 */
  uVar1 = *(uint *)(pGVar3 + 0x120);
  if (param_1) {
    *(uint *)(pGVar3 + 0x120) = uVar1 & 0xfffffffd;
    if ((uVar1 & 0xfffffffd) != uVar1) {
      (**(code **)(*(long *)pGVar3 + 0x130))(pGVar3,uVar1);
      pGVar3 = *(GUIButton **)(this + 0x128);
    }
    local_2c = 0xffffffff;
    puVar4 = &local_2c;
  }
  else {
    *(uint *)(pGVar3 + 0x120) = uVar1 | 2;
    if ((uVar1 | 2) != uVar1) {
                    /* try { // try from 004e6b78 to 005e6b7f has its CatchHandler @ 004e6c58 */
      (**(code **)(*(long *)pGVar3 + 0x130))(pGVar3,uVar1);
      pGVar3 = *(GUIButton **)(this + 0x128);
    }
    local_30 = 0x7f7f7f7f;
  }
  GUIButton::SetTintColor(pGVar3,puVar4);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


