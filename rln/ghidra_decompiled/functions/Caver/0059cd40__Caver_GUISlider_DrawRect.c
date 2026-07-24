/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059cd40
 * Function: Caver::GUISlider::DrawRect
 * Signature: undefined __thiscall DrawRect(GUISlider * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUISlider::DrawRect
          (GUISlider *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_90 [2];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
                    /* catch() { ... } // from try @ 0059cba8 with catch @ 0059cd44
                       catch() { ... } // from try @ 0059cc40 with catch @ 0059cd44 */
                    /* catch() { ... } // from try @ 0059cbf8 with catch @ 0059cd54 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (this[0x160] != (GUISlider)0x0) {
    UpdateSprite(this);
    this[0x160] = (GUISlider)0x0;
  }
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  fVar11 = *(float *)(this + 0x88);
  fVar4 = *(float *)(this + 0x8c);
  fVar5 = *(float *)(this + 0x128);
  fVar6 = *(float *)(this + 0x134);
  fVar7 = *(float *)(this + 0x138);
  fVar10 = *(float *)(this + 0x84);
  fVar3 = *(float *)(this + 0x90);
  lVar2 = *(long *)(this + 0x150);
                    /* try { // try from 0059cdd4 to 0069ce43 has its CatchHandler @ 0059ce64 */
  if (lVar2 == 0) {
    fVar8 = 10.0;
    fVar9 = 10.0;
  }
  else {
    fVar8 = *(float *)(lVar2 + 0x54);
    fVar9 = *(float *)(lVar2 + 0x58);
  }
  if (*(long *)(this + 0x158) != 0) {
    RenderingContext::UseProgram(param_1,3);
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::SetBlendingEnabled(param_1,true);
    Sprite::Draw(*(Sprite **)(this + 0x158),param_1);
  }
  fVar11 = fVar11 + fVar3 * 0.5;
  if (*(long *)(this + 0x140) == 0) {
    local_80 = *(float *)(this + 0x8c);
                    /* try { // try from 0059ce44 to 0069ce67 has its CatchHandler @ 0059cb54 */
    local_84 = fVar11 + -2.0;
                    /* catch() { ... } // from try @ 0059cdd4 with catch @ 0059ce64 */
                    /* try { // try from 0059ce68 to 0069cebb has its CatchHandler @ 0059ce68
                       catch() { ... } // from try @ 0059ce68 with catch @ 0059ce68
                       catch() { ... } // from try @ 0059cf7c with catch @ 0059ce68
                       catch() { ... } // from try @ 0059d158 with catch @ 0059ce68 */
    local_88 = 0.0;
    local_7c = 4.0;
    local_90[0] = 0xff969696;
    RenderingContext::FillRect(param_1,(Rectangle *)&local_88,(Color *)local_90,0.0);
  }
  fVar10 = fVar10 + ((fVar10 + fVar4) - fVar10) * ((fVar5 - fVar6) / (fVar7 - fVar6));
  if ((*(long *)(this + 0x148) == 0) && (this[0x16d] == (GUISlider)0x0)) {
                    /* try { // try from 0059cf0c to 0069cf17 has its CatchHandler @ 0059d068 */
    local_84 = fVar11 + -2.0;
    local_88 = 0.0;
    local_7c = 4.0;
    local_90[0] = 0xffc86464;
    local_80 = fVar10;
    RenderingContext::FillRect(param_1,(Rectangle *)&local_88,(Color *)local_90,0.0);
    lVar2 = *(long *)(this + 0x140);
  }
  else {
    lVar2 = *(long *)(this + 0x140);
  }
  if (lVar2 == 0) {
    local_88 = fVar10 - fVar8 * 0.5;
    local_84 = fVar11 - fVar9 * 0.5;
                    /* try { // try from 0059cebc to 0069cec7 has its CatchHandler @ 0059d058 */
    local_90[0] = 0xff646464;
    local_80 = fVar8;
    local_7c = fVar9;
    RenderingContext::FillRect(param_1,(Rectangle *)&local_88,(Color *)local_90,0.0);
  }
                    /* try { // try from 0059ced0 to 0069ced7 has its CatchHandler @ 0059d048 */
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 0059ceec to 0069ceff has its CatchHandler @ 0059d044 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


