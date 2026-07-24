/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5a54
 * Function: Caver::ProfilesHeaderView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ProfilesHeaderView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilesHeaderView::LayoutSubviews() */

void __thiscall Caver::ProfilesHeaderView::LayoutSubviews(ProfilesHeaderView *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GUIFrameView::LayoutSubviews((GUIFrameView *)this);
  local_48 = DAT_006918e0;
  uStack_40 = CONCAT44(*(undefined4 *)(this + 0x90),0x42c80000);
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_48);
  uStack_40 = *(undefined8 *)(*(GUIView **)(this + 0x120) + 0x7c);
  local_48 = CONCAT44((((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20)) -
                      (float)((ulong)uStack_40 >> 0x20)) + 0.0,
                      (((float)*(undefined8 *)(this + 0x84) + (float)*(undefined8 *)(this + 0x8c)) -
                      (float)uStack_40) + 0.0);
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_48);
  lVar3 = *(long *)(this + 0x120);
                    /* catch() { ... } // from try @ 004a5a48 with catch @ 004a5ad4 */
  puVar1 = (undefined8 *)(lVar3 + 0x94);
  if (*(float *)(lVar3 + 0x9c) <= DAT_00683734) {
    puVar1 = (undefined8 *)(lVar3 + 0x84);
  }
  uStack_58 = puVar1[1];
  local_60 = *puVar1;
  Rectangle::RectangleByOutsetting((Rectangle *)&local_60,6.0);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_40;
  *(undefined8 *)(lVar3 + 0x94) = local_48;
  GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((GUIView *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 004a5b24 to 005a5b2b has its CatchHandler @ 004a5b4c */
                    /* try { // try from 004a5b2c to 005a5b4f has its CatchHandler @ 004a59e4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


