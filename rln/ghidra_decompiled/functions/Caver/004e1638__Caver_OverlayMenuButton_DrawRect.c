/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e1638
 * Function: Caver::OverlayMenuButton::DrawRect
 * Signature: undefined __thiscall DrawRect(OverlayMenuButton * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayMenuButton::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::OverlayMenuButton::DrawRect
          (OverlayMenuButton *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x200) != 0) {
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
    RenderingContext::SetIdentityMatrix(param_1);
    uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
    local_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
    uStack_58 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
    uStack_60 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
    uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
    local_90 = *(undefined8 *)PTR_identityMatrix_007e74c8;
    uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
    uStack_80 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
    ParticleSystem::BuildVertexDataWithTransform
              (*(ParticleSystem **)(this + 0x200),(Matrix4 *)&local_90);
    ParticleSystem::Draw(*(ParticleSystem **)(this + 0x200),param_1);
  }
  OverlayButton::DrawRect((OverlayButton *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


