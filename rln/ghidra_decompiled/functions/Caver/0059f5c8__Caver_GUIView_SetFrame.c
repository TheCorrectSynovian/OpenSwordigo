/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f5c8
 * Function: Caver::GUIView::SetFrame
 * Signature: undefined __thiscall SetFrame(GUIView * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::SetFrame(Caver::Rectangle const&) */

void __thiscall Caver::GUIView::SetFrame(GUIView *this,Rectangle *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)param_1;
  local_38 = *(undefined8 *)(this + 0x84);
  *(undefined8 *)(this + 0x7c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x74) = uVar2;
  uStack_30 = *(undefined8 *)(this + 0x7c);
  (**(code **)(*(long *)this + 0xf8))(this,&local_38);
                    /* catch() { ... } // from try @ 0059edf4 with catch @ 0059f608 */
                    /* catch() { ... } // from try @ 0059f110 with catch @ 0059f614
                       catch() { ... } // from try @ 0059f154 with catch @ 0059f614 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


