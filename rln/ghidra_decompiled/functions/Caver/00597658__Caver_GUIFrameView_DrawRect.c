/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597658
 * Function: Caver::GUIFrameView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIFrameView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIFrameView::DrawRect
          (GUIFrameView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00597608 with catch @ 005976ac
                        */
  if (this[0x108] != (GUIFrameView)0x0) {
    local_88 = 0xbf800000;
    local_74 = 0x3f800000;
    local_60 = 0x3f800000;
    uStack_7c = 0;
    local_84 = 0;
    uStack_68 = 0;
    local_70 = 0;
                    /* try { // try from 005976d0 to 006976f7 has its CatchHandler @ 00597700 */
    uStack_54 = 0;
    local_5c = 0;
    local_4c = 0x3f800000;
    local_98 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) * 0.5,
                        (float)*(undefined8 *)(this + 0x84) +
                        (float)*(undefined8 *)(this + 0x8c) * 0.5);
                    /* try { // try from 005976f8 to 00697703 has its CatchHandler @ 00597574 */
    local_90 = 0;
    Matrix4::PreTranslate((Matrix4 *)&local_88,(Vector3 *)&local_98);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005976d0 with catch @ 00597700
                        */
                    /* catch() { ... } // from try @ 005978a0 with catch @ 00597704
                       catch() { ... } // from try @ 00597a98 with catch @ 00597704 */
    local_98 = CONCAT44(-((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) * 0.5),
                        -((float)*(undefined8 *)(this + 0x84) +
                         (float)*(undefined8 *)(this + 0x8c) * 0.5));
    local_90 = 0x80000000;
    Matrix4::PostTranslate((Matrix4 *)&local_88,(Vector3 *)&local_98);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_88);
  }
  if (*(GUITexturedRect **)(this + 0xf0) != (GUITexturedRect *)0x0) {
    GUITexturedRect::Draw(*(GUITexturedRect **)(this + 0xf0),param_1);
  }
                    /* try { // try from 0059774c to 00697773 has its CatchHandler @ 005978fc */
  if (*(GUIRoundedRect **)(this + 0xf8) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::Draw(*(GUIRoundedRect **)(this + 0xf8),param_1);
  }
  GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00597794 to 006977bb has its CatchHandler @ 005978ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


