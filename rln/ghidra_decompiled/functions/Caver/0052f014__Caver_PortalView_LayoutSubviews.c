/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052f014
 * Function: Caver::PortalView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::LayoutSubviews() */

void __thiscall Caver::PortalView::LayoutSubviews(PortalView *this)

{
  long lVar1;
  GUIView *pGVar2;
  long lVar3;
  Rectangle *this_00;
  undefined8 uVar4;
  float fVar5;
  float local_a8;
  float local_a0;
  float local_98;
  float local_90;
  Vector2 aVStack_80 [16];
  undefined8 local_70;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
                    /* try { // try from 0052f04c to 0062f04f has its CatchHandler @ 0052f068 */
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)(this + 0x84));
                    /* try { // try from 0052f050 to 0062f057 has its CatchHandler @ 0052f07c */
  fVar5 = *(float *)(*(GUIView **)(this + 0x150) + 0x80);
                    /* catch() { ... } // from try @ 0052f04c with catch @ 0052f068 */
                    /* try { // try from 0052f06c to 0062f073 has its CatchHandler @ 0052f078 */
                    /* try { // try from 0052f074 to 0062f08f has its CatchHandler @ 0052f008 */
                    /* catch() { ... } // from try @ 0052f06c with catch @ 0052f078 */
                    /* catch() { ... } // from try @ 0052f050 with catch @ 0052f07c */
  local_58 = (ulong)(uint)((*(float *)(this + 0x88) + *(float *)(this + 0x90) + -10.0) - fVar5) <<
             0x20;
  uStack_50 = CONCAT44(fVar5,*(undefined4 *)(this + 0x8c));
  GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_58);
  local_58 = DAT_00693288;
  uStack_50 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x150) + 0x80),*(undefined4 *)(this + 0x8c))
  ;
  GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_58);
  pGVar2 = *(GUIView **)(this + 0x120);
  GUIView::safeBounds();
  uStack_50 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* try { // try from 0052f104 to 0062f203 has its CatchHandler @ 0052f104
                       catch() { ... } // from try @ 0052f104 with catch @ 0052f104
                       catch() { ... } // from try @ 0052f208 with catch @ 0052f104 */
  local_58 = CONCAT44((int)((*(float *)(*(long *)(this + 0x150) + 0x78) +
                            *(float *)(*(long *)(this + 0x150) + 0x80) * 0.5) -
                           *(float *)(*(long *)(this + 0x120) + 0x80) * 0.5),
                      (int)((local_98 + local_90 + -15.0) -
                           *(float *)(*(long *)(this + 0x120) + 0x7c)));
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_58);
  lVar3 = *(long *)(this + 0x120);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar3 + 0x84),10.0);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_50;
  *(long *)(lVar3 + 0x94) = local_58;
  pGVar2 = *(GUIView **)(this + 0x130);
  GUIView::safeBounds();
  uStack_50 = *(undefined8 *)(pGVar2 + 0x7c);
  local_58 = CONCAT44((int)((*(float *)(*(long *)(this + 0x160) + 0x78) +
                            *(float *)(*(long *)(this + 0x160) + 0x80) * 0.5) -
                           *(float *)(*(long *)(this + 0x130) + 0x80) * 0.5),
                      (int)((local_68 + local_60 + -10.0) -
                           *(float *)(*(long *)(this + 0x130) + 0x7c)));
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_58);
  lVar3 = *(long *)(this + 0x130);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar3 + 0x84),10.0);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_50;
  *(long *)(lVar3 + 0x94) = local_58;
  pGVar2 = *(GUIView **)(this + 0x140);
  GUIView::safeBounds();
  uStack_50 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* try { // try from 0052f204 to 0062f207 has its CatchHandler @ 0052f314 */
                    /* try { // try from 0052f208 to 0062f327 has its CatchHandler @ 0052f104 */
  local_58 = CONCAT44((int)((*(float *)(*(long *)(this + 0x160) + 0x78) +
                            *(float *)(*(long *)(this + 0x160) + 0x80) * 0.5) -
                           *(float *)(*(long *)(this + 0x140) + 0x80) * 0.5),
                      (int)((local_a8 + local_a0 + -30.0) -
                           *(float *)(*(long *)(this + 0x140) + 0x7c)));
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_58);
  lVar3 = *(long *)(this + 0x140);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar3 + 0x84),5.0);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_50;
  *(long *)(lVar3 + 0x94) = local_58;
  lVar3 = *(long *)(this + 0x110);
  if (*(char *)(lVar3 + 0x3f8) != '\0') {
    uStack_50 = *(undefined8 *)(*(long *)(this + 0x100) + 0x7c);
    uVar4 = *(undefined8 *)
             (**(long **)(*(long *)(lVar3 + 0x118) + *(long *)(lVar3 + 0x400) * 0x10) + 8);
    local_70 = CONCAT44((float)((ulong)uVar4 >> 0x20) - (float)((ulong)uStack_50 >> 0x20) * 0.5,
                        (float)uVar4 - (float)uStack_50 * 0.5);
    Vector2::Rounded();
    local_58 = CONCAT44(uStack_64,local_68);
    this_00 = *(Rectangle **)(this + 0x100);
    GUIView::ConvertRectFromView(this_00,(GUIView *)&local_58);
    Rectangle::TranslatedRectangle(aVStack_80);
    GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_00,(Rectangle *)&local_68,false);
  }
  pGVar2 = *(GUIView **)(this + 0x170);
                    /* catch() { ... } // from try @ 0052f204 with catch @ 0052f314 */
  Vector2::Rounded();
  uStack_50 = *(undefined8 *)(pGVar2 + 0x7c);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_58);
  AnimateIn(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


