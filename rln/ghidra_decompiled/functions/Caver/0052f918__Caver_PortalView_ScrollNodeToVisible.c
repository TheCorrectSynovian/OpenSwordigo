/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052f918
 * Function: Caver::PortalView::ScrollNodeToVisible
 * Signature: undefined __thiscall ScrollNodeToVisible(PortalView * this, MapViewNode * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::ScrollNodeToVisible(Caver::MapViewNode*, bool) */

void __thiscall
Caver::PortalView::ScrollNodeToVisible(PortalView *this,MapViewNode *param_1,bool param_2)

{
  long lVar1;
  Rectangle *this_00;
  Vector2 aVStack_68 [16];
  Rectangle aRStack_58 [16];
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0052f970 with catch @ 0052f920 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0052f940 to 0062f943 has its CatchHandler @ 0052f964 */
                    /* try { // try from 0052f944 to 0062f94b has its CatchHandler @ 0052f95c */
  local_44 = *(undefined4 *)(*(long *)param_1 + 0xc);
                    /* catch() { ... } // from try @ 0052f944 with catch @ 0052f95c */
  local_40 = DAT_006946f0;
                    /* catch() { ... } // from try @ 0052f940 with catch @ 0052f964 */
  local_48 = *(float *)(*(long *)param_1 + 8) + DAT_00688018;
                    /* try { // try from 0052f968 to 0062f96f has its CatchHandler @ 0052f980 */
                    /* try { // try from 0052f970 to 0062f983 has its CatchHandler @ 0052f920 */
  this_00 = *(Rectangle **)(this + 0x100);
                    /* catch() { ... } // from try @ 0052f968 with catch @ 0052f980 */
  GUIView::ConvertRectFromView(this_00,(GUIView *)&local_48);
  Rectangle::TranslatedRectangle(aVStack_68);
  GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_00,aRStack_58,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


