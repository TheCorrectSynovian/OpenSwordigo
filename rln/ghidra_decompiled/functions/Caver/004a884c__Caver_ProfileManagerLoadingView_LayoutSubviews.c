/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a884c
 * Function: Caver::ProfileManagerLoadingView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ProfileManagerLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingView::LayoutSubviews() */

void __thiscall Caver::ProfileManagerLoadingView::LayoutSubviews(ProfileManagerLoadingView *this)

{
  long lVar1;
  GUIView *pGVar2;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 004a794c with catch @ 004a884c */
                    /* catch() { ... } // from try @ 004a78f0 with catch @ 004a8850 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  pGVar2 = *(GUIView **)(this + 0xf0);
  GUILabel::TextSize();
  local_48 = *(undefined8 *)(pGVar2 + 0x74);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  pGVar2 = *(GUIView **)(this + 0xf0);
                    /* catch() { ... } // from try @ 004a78c4 with catch @ 004a88ac */
  Vector2::Rounded();
  local_40 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* catch() { ... } // from try @ 004a78a0 with catch @ 004a88e4 */
  local_48 = CONCAT44((float)((ulong)local_60 >> 0x20) + 0.0,(float)local_60 + 0.0);
                    /* catch() { ... } // from try @ 004a783c with catch @ 004a88e8 */
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  local_48 = *(undefined8 *)(*(GUIView **)(this + 0x100) + 0x74);
  local_40 = DAT_006919c0;
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_48);
  pGVar2 = *(GUIView **)(this + 0x100);
                    /* catch() { ... } // from try @ 004a780c with catch @ 004a8944 */
  Vector2::Rounded();
  local_40 = *(undefined8 *)(pGVar2 + 0x7c);
  local_48 = CONCAT44((float)((ulong)local_70 >> 0x20) + (float)((ulong)DAT_006919c8 >> 0x20),
                      (float)local_70 + (float)DAT_006919c8);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
                    /* catch() { ... } // from try @ 004a77e8 with catch @ 004a897c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 004a7690 with catch @ 004a8980 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


