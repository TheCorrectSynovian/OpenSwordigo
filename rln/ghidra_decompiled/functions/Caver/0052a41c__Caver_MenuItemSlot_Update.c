/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a41c
 * Function: Caver::MenuItemSlot::Update
 * Signature: undefined __thiscall Update(MenuItemSlot * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::Update(float) */

void __thiscall Caver::MenuItemSlot::Update(MenuItemSlot *this,float param_1)

{
  GUIView::Update((GUIView *)this,param_1);
  if (this[0x278] != (MenuItemSlot)0x0) {
    *(float *)(this + 0x27c) = *(float *)(this + 0x27c) + param_1;
  }
  return;
}


