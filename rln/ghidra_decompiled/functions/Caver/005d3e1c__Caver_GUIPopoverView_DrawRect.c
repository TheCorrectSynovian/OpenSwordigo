/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3e1c
 * Function: Caver::GUIPopoverView::DrawRect
 * Signature: undefined __thiscall DrawRect(GUIPopoverView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIPopoverView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GUIPopoverView::DrawRect
          (GUIPopoverView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  Matrix4 *this_00;
  float afStack_110 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Matrix4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0xe9] != (GUIPopoverView)0x0) {
    if (this[0x148] != (GUIPopoverView)0x0) {
      (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
      RenderingContext::SetIdentityMatrix(param_1);
                    /* try { // try from 005d3e84 to 006d3e8f has its CatchHandler @ 005d40a4 */
                    /* try { // try from 005d3e94 to 006d3f0f has its CatchHandler @ 005d40b0 */
      RenderingContext::FillRect
                (param_1,(Rectangle *)(*(long *)(this + 0x100) + 0x74),(Color *)(this + 0x149),0.0);
    }
    GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    this_00 = (Matrix4 *)GUIRoundedRect::Draw(*(GUIRoundedRect **)(this + 0x128),param_1);
    local_a0 = *(undefined8 *)(this + 0x118);
    uStack_c8 = _UNK_00683498;
    local_d0 = _DAT_00683490;
    uStack_b8 = _UNK_006837e8;
    uStack_c0 = _DAT_006837e0;
    uStack_a8 = _UNK_006837f8;
    local_b0 = _DAT_006837f0;
    local_98 = DAT_006840e0;
    Matrix4::RotationZ(this_00,*(float *)(this + 0x120));
    C_Matrix4Mul((float *)&local_d0,afStack_110,(float *)aMStack_88);
    RenderingContext::SetMatrix(param_1,aMStack_88);
    GUITexturedRect::Draw(*(GUITexturedRect **)(this + 0x138),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005d3f50 to 006d3f77 has its CatchHandler @ 005d4034 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


