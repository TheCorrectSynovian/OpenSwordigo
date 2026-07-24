/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00536304
 * Function: Caver::SceneLoadingView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(SceneLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneLoadingView::LayoutSubviews() */

void __thiscall Caver::SceneLoadingView::LayoutSubviews(SceneLoadingView *this)

{
  long lVar1;
  GUIView *pGVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 local_98;
  float local_90;
  undefined4 local_88;
  float local_80;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0053632c to 0063632f has its CatchHandler @ 0053633c */
  LoadingView::LayoutSubviews((LoadingView *)this);
  pGVar2 = *(GUIView **)(this + 0x130);
  if (pGVar2 != (GUIView *)0x0) {
                    /* catch() { ... } // from try @ 0053632c with catch @ 0053633c */
                    /* try { // try from 00536340 to 00636347 has its CatchHandler @ 00536350 */
    uVar5 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* try { // try from 00536348 to 00636353 has its CatchHandler @ 005362fc */
                    /* catch() { ... } // from try @ 00536340 with catch @ 00536350 */
                    /* try { // try from 00536354 to 006363bb has its CatchHandler @ 00536354
                       catch() { ... } // from try @ 00536354 with catch @ 00536354
                       catch() { ... } // from try @ 005363d8 with catch @ 00536354
                       catch() { ... } // from try @ 00536480 with catch @ 00536354
                       catch() { ... } // from try @ 005364f0 with catch @ 00536354 */
    Vector2::Rounded();
    local_60 = uVar5;
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  }
  fVar4 = *(float *)(*(GUIView **)(this + 0x160) + 0x80);
                    /* try { // try from 005363bc to 006363d7 has its CatchHandler @ 005364e4 */
  local_68 = (ulong)(uint)((*(float *)(this + 0x88) + *(float *)(this + 0x90) + -10.0) - fVar4) <<
             0x20;
  local_60 = CONCAT44(fVar4,*(undefined4 *)(this + 0x8c));
  GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_68);
                    /* try { // try from 005363d8 to 0063647b has its CatchHandler @ 00536354 */
  local_68 = DAT_00693288;
  local_60 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x160) + 0x80),*(undefined4 *)(this + 0x8c));
  GUIView::SetFrame(*(GUIView **)(this + 0x170),(Rectangle *)&local_68);
  fVar4 = *(float *)(this + 0x8c);
  fVar3 = *(float *)(this + 0x84);
  pGVar2 = *(GUIView **)(this + 0x180);
  GUILabel::TextSize();
  GUILabel::TextSize();
  local_68 = CONCAT44(0x42200000,(int)((fVar3 + fVar4 * 0.5 + -8.0) - local_80 * 0.5));
  local_60 = CONCAT44(*(undefined4 *)(*(long *)(*(long *)(this + 0x180) + 0xf0) + 0x48),local_88);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  fVar4 = *(float *)(this + 0x8c);
  fVar3 = *(float *)(this + 0x84);
                    /* try { // try from 0053647c to 0063647f has its CatchHandler @ 005364d0 */
  pGVar2 = *(GUIView **)(this + 400);
                    /* try { // try from 00536480 to 006364e7 has its CatchHandler @ 00536354 */
  GUILabel::TextSize();
  GUILabel::TextSize();
                    /* catch() { ... } // from try @ 0053647c with catch @ 005364d0 */
  local_68 = CONCAT44(0x42200000,(int)((fVar3 + fVar4 * 0.5 + -8.0) - local_90 * 0.5));
  local_60 = CONCAT44(*(undefined4 *)(*(long *)(*(long *)(this + 400) + 0xf0) + 0x48),local_98);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
                    /* catch() { ... } // from try @ 005363bc with catch @ 005364e4 */
                    /* try { // try from 005364e8 to 006364ef has its CatchHandler @ 005364f8 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005364f0 to 006364fb has its CatchHandler @ 00536354 */
                    /* catch() { ... } // from try @ 005364e8 with catch @ 005364f8 */
                    /* catch() { ... } // from try @ 00536544 with catch @ 005364fc
                       catch() { ... } // from try @ 00536560 with catch @ 005364fc */
  return;
}


