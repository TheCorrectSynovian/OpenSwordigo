/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052ef40
 * Function: Caver::PortalView::LayoutGotoButton
 * Signature: undefined __thiscall LayoutGotoButton(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::LayoutGotoButton() */

void __thiscall Caver::PortalView::LayoutGotoButton(PortalView *this)

{
  long lVar1;
  long lVar2;
  GUIView *this_00;
  float local_58;
  float local_50;
  int local_48;
  int iStack_44;
  undefined8 uStack_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0052eea4 with catch @ 0052ef40 */
                    /* catch() { ... } // from try @ 0052eeec with catch @ 0052ef54 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0052ef58 to 0062ef5f has its CatchHandler @ 0052ef68 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0052ef60 to 0062ef6b has its CatchHandler @ 0052ee2c */
  this_00 = *(GUIView **)(this + 0x130);
                    /* catch() { ... } // from try @ 0052ef58 with catch @ 0052ef68 */
                    /* catch() { ... } // from try @ 0052efb4 with catch @ 0052ef6c
                       catch() { ... } // from try @ 0052efd0 with catch @ 0052ef6c */
  GUIView::safeBounds();
  uStack_40 = *(undefined8 *)(this_00 + 0x7c);
  local_48 = (int)((local_58 + local_50 + -10.0) - *(float *)(*(long *)(this + 0x130) + 0x7c));
                    /* try { // try from 0052efb0 to 0062efb3 has its CatchHandler @ 0052efc4 */
                    /* try { // try from 0052efb4 to 0062efc7 has its CatchHandler @ 0052ef6c */
  iStack_44 = (int)((*(float *)(*(long *)(this + 0x160) + 0x78) +
                    *(float *)(*(long *)(this + 0x160) + 0x80) * 0.5) -
                   *(float *)(*(long *)(this + 0x130) + 0x80) * 0.5);
                    /* catch() { ... } // from try @ 0052efb0 with catch @ 0052efc4 */
                    /* try { // try from 0052efc8 to 0062efcf has its CatchHandler @ 0052efd8 */
  GUIView::SetFrame(this_00,(Rectangle *)&local_48);
                    /* try { // try from 0052efd0 to 0062efdb has its CatchHandler @ 0052ef6c */
  lVar2 = *(long *)(this + 0x130);
                    /* catch() { ... } // from try @ 0052efc8 with catch @ 0052efd8 */
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar2 + 0x84),10.0);
  *(undefined8 *)(lVar2 + 0x9c) = uStack_40;
  *(ulong *)(lVar2 + 0x94) = CONCAT44(iStack_44,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0052f074 with catch @ 0052f008 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


