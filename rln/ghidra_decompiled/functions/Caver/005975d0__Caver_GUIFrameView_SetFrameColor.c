/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005975d0
 * Function: Caver::GUIFrameView::SetFrameColor
 * Signature: undefined __thiscall SetFrameColor(GUIFrameView * this, Color * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::SetFrameColor(Caver::Color const&) */

void __thiscall Caver::GUIFrameView::SetFrameColor(GUIFrameView *this,Color *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xe9) = uVar1;
  if (*(GUIRoundedRect **)(this + 0xf8) != (GUIRoundedRect *)0x0) {
                    /* try { // try from 00597608 to 0069761b has its CatchHandler @ 005976ac */
    local_30 = (undefined1)uVar1;
    local_2f = (undefined1)((uint)uVar1 >> 8);
    local_2e = (undefined1)((uint)uVar1 >> 0x10);
                    /* try { // try from 0059761c to 006976cf has its CatchHandler @ 00597574 */
    local_2d = (undefined1)((uint)uVar1 >> 0x18);
    GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0xf8),&local_30);
  }
  if (*(long *)(this + 0xf0) != 0) {
    *(undefined4 *)(*(long *)(this + 0xf0) + 0x1c) = *(undefined4 *)(this + 0xe9);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


