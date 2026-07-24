/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052ce60
 * Function: Caver::PauseView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(PauseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseView::LayoutSubviews() */

void __thiscall Caver::PauseView::LayoutSubviews(PauseView *this)

{
  long lVar1;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(float *)(*(long *)(*(GUIView **)(this + 0xf8) + 0xf0) + 0x48);
  local_30 = *(undefined4 *)(this + 0x8c);
  local_38 = 0;
  local_34 = (int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) - local_2c * 0.5);
  GUIView::SetFrame(*(GUIView **)(this + 0xf8),(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052cdb0 with catch @ 0052cee8
                        */
  __stack_chk_fail();
}


