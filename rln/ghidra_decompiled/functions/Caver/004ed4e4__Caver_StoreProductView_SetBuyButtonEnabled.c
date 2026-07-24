/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ed4e4
 * Function: Caver::StoreProductView::SetBuyButtonEnabled
 * Signature: undefined __thiscall SetBuyButtonEnabled(StoreProductView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreProductView::SetBuyButtonEnabled(bool) */

void __thiscall Caver::StoreProductView::SetBuyButtonEnabled(StoreProductView *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1) {
    local_2c = 0xffffffff;
    GUIButton::SetTintColor(*(GUIButton **)(this + 0x100),&local_2c);
    plVar3 = *(long **)(this + 0x100);
    uVar1 = *(uint *)(plVar3 + 0x24);
    uVar4 = uVar1 & 0xfffffffd;
  }
  else {
    local_30 = 0x7f7f7f7f;
    GUIButton::SetTintColor(*(GUIButton **)(this + 0x100),&local_30);
    plVar3 = *(long **)(this + 0x100);
    uVar1 = *(uint *)(plVar3 + 0x24);
    uVar4 = uVar1 | 2;
  }
  *(uint *)(plVar3 + 0x24) = uVar4;
  if (uVar4 != uVar1) {
    (**(code **)(*plVar3 + 0x130))();
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


