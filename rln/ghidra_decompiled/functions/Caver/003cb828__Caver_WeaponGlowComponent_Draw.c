/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb828
 * Function: Caver::WeaponGlowComponent::Draw
 * Signature: undefined __cdecl Draw(RenderingContext * param_1, Matrix4 * param_2, Vector3 * param_3, Vector3 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&, Caver::Vector3
   const&, Caver::Vector3 const&) */

void Caver::WeaponGlowComponent::Draw
               (RenderingContext *param_1,Matrix4 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  long lVar1;
  Matrix4 *this;
  float fVar2;
  float afStack_110 [16];
  float local_d0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0x70] != (RenderingContext)0x0) {
    CreateVertexData((WeaponGlowComponent *)param_1);
    param_1[0x70] = (RenderingContext)0x0;
  }
  uStack_58 = *(undefined8 *)(param_3 + 0x38);
  local_60 = *(undefined8 *)(param_3 + 0x30);
  uStack_68 = *(undefined8 *)(param_3 + 0x28);
  local_70 = *(undefined8 *)(param_3 + 0x20);
  uStack_78 = *(undefined8 *)(param_3 + 0x18);
  local_80 = *(undefined8 *)(param_3 + 0x10);
  uStack_88 = *(undefined8 *)(param_3 + 8);
  local_90 = *(undefined8 *)param_3;
  if (*(long *)(param_1 + 0xd8) == 0) {
    if (*(long *)(param_1 + 0xe0) != 0) {
      C_Matrix4Mul((float *)&local_90,(float *)(*(long *)(param_1 + 0xe0) + 0xd8),(float *)&local_90
                  );
    }
    SceneObject::WorldMatrix();
    this = (Matrix4 *)C_Matrix4Mul((float *)&local_90,local_d0,afStack_110);
    fVar2 = 0.0;
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x90) != '\0') {
      fVar2 = DAT_006896e0;
    }
    Matrix4::RotationY(this,fVar2);
  }
  else {
    TransformComponent::WorldMatrix();
  }
  C_Matrix4Mul((float *)&local_90,local_d0,(float *)&local_90);
  RenderingContext::SetMatrix((RenderingContext *)param_2,(Matrix4 *)&local_90);
  local_d0[0] = -NAN;
  RenderingContext::SetColor((RenderingContext *)param_2,(Color *)local_d0);
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8074,3,0x1406,0x10,*(undefined8 *)(param_1 + 0xb8));
  RenderingContext::SetVertexAttribPointer
            (param_2,0x8076,4,0x1401,0x10,*(long *)(param_1 + 0xb8) + 0xc);
  RenderingContext::DrawElements
            ((RenderingContext *)param_2,4,*(int *)(param_1 + 0xd0) * 3,0x1401,
             *(undefined8 *)(param_1 + 200));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


