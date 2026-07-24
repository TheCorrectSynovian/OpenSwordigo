/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc324
 * Function: Caver::HealthBar::DrawRect
 * Signature: undefined __thiscall DrawRect(HealthBar * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::HealthBar::DrawRect
          (HealthBar *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,1);
  local_80 = CONCAT44(local_80._4_4_,0xffffffff);
  RenderingContext::SetColor(param_1,(Color *)&local_80);
  Sprite::Draw((Sprite *)(this + 0x128),param_1);
  uStack_58 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_60 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_48 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_50 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_78 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_80 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_68 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  uStack_70 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  ParticleSystem::BuildVertexDataWithTransform
            (*(ParticleSystem **)(this + 0x180),(Matrix4 *)&local_80);
  ParticleSystem::Draw(*(ParticleSystem **)(this + 0x180),param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


