/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594978
 * Function: Caver::GUIBubbleView::PresentFromRectInView
 * Signature: undefined __thiscall PresentFromRectInView(GUIBubbleView * this, Rectangle * param_1, GUIView * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIBubbleView::PresentFromRectInView(Caver::Rectangle const&, Caver::GUIView*) */

void __thiscall
Caver::GUIBubbleView::PresentFromRectInView(GUIBubbleView *this,Rectangle *param_1,GUIView *param_2)

{
  long lVar1;
  long *plVar2;
  GUIAnimation *this_00;
  long lVar3;
  GUITextBubble *this_01;
  long *plVar4;
  code *pcVar5;
  Vector2 aVStack_90 [16];
  Rectangle aRStack_80 [16];
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005949a8 to 006949cf has its CatchHandler @ 00594ee0 */
  plVar2 = (long *)(**(code **)(*(long *)param_2 + 0xf0))(param_2);
  if (plVar2 != (long *)0x0) {
    plVar4 = *(long **)(this + 0x10);
    if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
      local_60 = PTR_vtable_007e6120 + 0x10;
      boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_60);
      goto LAB_00594c08;
    }
    local_70 = *(undefined8 *)(this + 8);
    lVar3 = plVar4[1] + 1;
    pcVar5 = *(code **)(*plVar2 + 0x60);
    plVar4[1] = lVar3;
    local_68 = plVar4;
    if (lVar3 == 0) {
                    /* try { // try from 005949f0 to 006949f3 has its CatchHandler @ 00594e30 */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 00594a14 to 00694a17 has its CatchHandler @ 00594e20 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    (*pcVar5)(plVar2,&local_70);
    plVar4 = local_68;
                    /* try { // try from 00594a38 to 00694a3b has its CatchHandler @ 00594e10 */
    if ((local_68 != (long *)0x0) &&
       (lVar3 = local_68[1], local_68[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar3 = plVar4[2];
                    /* try { // try from 00594a5c to 00694a5f has its CatchHandler @ 00594e00 */
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    GUIView::SetFrame((GUIView *)this,(Rectangle *)((long)plVar2 + 0x84));
                    /* try { // try from 00594a80 to 00694aa7 has its CatchHandler @ 00594ed0 */
    local_60 = (undefined *)
               CONCAT44(*(float *)(param_1 + 4) + *(float *)(param_1 + 0xc),
                        (int)(*(float *)param_1 + *(float *)(param_1 + 8) * 0.5));
    GUIView::ConvertPointFromView((Vector2 *)this,(GUIView *)&local_60);
    this_01 = *(GUITextBubble **)(this + 0xf0);
    *(undefined8 *)(this + 0x100) = local_70;
                    /* try { // try from 00594ac8 to 00694aef has its CatchHandler @ 00594ec0 */
    GUIView::safeBounds();
    Rectangle::RectangleByInsetting(aRStack_80,5.0);
    Rectangle::TranslatedRectangle(aVStack_90);
    this_00 = (GUIAnimation *)GUITextBubble::SetMaxBounds(this_01,(Rectangle *)&local_70);
                    /* try { // try from 00594b10 to 00694b37 has its CatchHandler @ 00594eb8 */
    GUIAnimation::ScaleAnimation(this_00,0.0,1.0,0.25);
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    plVar2 = *(long **)(this + 0x110);
    *(undefined8 *)(this + 0x108) = local_70;
    *(long **)(this + 0x110) = local_68;
    if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar3 = plVar2[2];
                    /* try { // try from 00594b64 to 00694b8b has its CatchHandler @ 005953fc */
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    plVar2 = local_68;
    if ((local_68 != (long *)0x0) &&
       (lVar3 = local_68[1], local_68[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
                    /* try { // try from 00594bc8 to 00694bef has its CatchHandler @ 00594ea8 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00594c08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


