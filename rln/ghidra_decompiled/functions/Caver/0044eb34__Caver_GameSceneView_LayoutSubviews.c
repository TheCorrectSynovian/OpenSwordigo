/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044eb34
 * Function: Caver::GameSceneView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::LayoutSubviews() */

void __thiscall Caver::GameSceneView::LayoutSubviews(GameSceneView *this)

{
  long lVar1;
  undefined8 *puVar2;
  GUIView *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 0044eb40 to 0054eb97 has its CatchHandler @ 00447cc4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xf0) != 0) {
    uVar4 = *(undefined8 *)(this + 0x84);
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(this + 0xf0) + 0x20) + 0x240);
    puVar2[1] = *(undefined8 *)(this + 0x8c);
    *puVar2 = uVar4;
                    /* catch() { ... } // from try @ 00448ac4 with catch @ 0044eb78 */
                    /* catch() { ... } // from try @ 00448a78 with catch @ 0044eb7c */
    Camera::SetAspectRatio
              (*(Camera **)(*(long *)(*(long *)(this + 0xf0) + 0x20) + 0x240),
               *(float *)(this + 0x8c) / *(float *)(this + 0x90));
  }
  if (*(GUIView **)(this + 0x100) != (GUIView *)0x0) {
    GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)(this + 0x84));
  }
                    /* try { // try from 0044eb98 to 0054eba7 has its CatchHandler @ 0044f4b4 */
  if (*(GUIEffect **)(this + 0x188) != (GUIEffect *)0x0) {
    GUIEffect::SetFrame(*(GUIEffect **)(this + 0x188),(Rectangle *)(this + 0x84));
  }
                    /* try { // try from 0044eba8 to 0054ebff has its CatchHandler @ 00447cc4 */
  if (*(GUIEffect **)(this + 0x160) != (GUIEffect *)0x0) {
    GUIEffect::SetFrame(*(GUIEffect **)(this + 0x160),(Rectangle *)(this + 0x84));
  }
  this_00 = *(GUIView **)(this + 0x148);
  if (this_00 != (GUIView *)0x0) {
    GUIView::safeBounds();
                    /* catch() { ... } // from try @ 00448a24 with catch @ 0044ebe0 */
    uStack_40 = *(undefined8 *)(this_00 + 0x7c);
                    /* catch() { ... } // from try @ 004489d8 with catch @ 0044ebe4 */
    local_48 = CONCAT44(((float)((ulong)local_58 >> 0x20) + (float)((ulong)uStack_50 >> 0x20)) -
                        (float)((ulong)*(undefined8 *)(*(long *)(this + 0x148) + 0x7c) >> 0x20),
                        ((float)local_58 + (float)uStack_50) -
                        (float)*(undefined8 *)(*(long *)(this + 0x148) + 0x7c));
    GUIView::SetFrame(this_00,(Rectangle *)&local_48);
    lVar3 = *(long *)(this + 0x148);
                    /* try { // try from 0044ec00 to 0054ec0f has its CatchHandler @ 0044f4b4 */
                    /* try { // try from 0044ec10 to 0054ec67 has its CatchHandler @ 00447cc4 */
    puVar2 = (undefined8 *)(lVar3 + 0x94);
    if (*(float *)(lVar3 + 0x9c) <= DAT_00683734) {
      puVar2 = (undefined8 *)(lVar3 + 0x84);
    }
    uStack_68 = puVar2[1];
    local_70 = *puVar2;
    Rectangle::RectangleByOutsetting((Rectangle *)&local_70,6.0);
    *(undefined8 *)(lVar3 + 0x9c) = uStack_40;
    *(undefined8 *)(lVar3 + 0x94) = local_48;
  }
  GUIEffect::SetFrame(*(GUIEffect **)(this + 0x170),(Rectangle *)(this + 0x84));
                    /* catch() { ... } // from try @ 00448984 with catch @ 0044ec48 */
  GUIView::LayoutSubviews((GUIView *)this);
                    /* catch() { ... } // from try @ 00448938 with catch @ 0044ec4c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0044ec68 to 0054ec77 has its CatchHandler @ 0044f4b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


