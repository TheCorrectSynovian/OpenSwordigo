/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aa330
 * Function: Caver::ParticleEmitterComponent::UpdateLocalTransform
 * Signature: undefined __thiscall UpdateLocalTransform(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::UpdateLocalTransform() */

void __thiscall
Caver::ParticleEmitterComponent::UpdateLocalTransform(ParticleEmitterComponent *this)

{
  ParticleEmitterComponent *pPVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined *puVar6;
  ParticleEmitterComponent *pPVar7;
  float *pfVar8;
  ParticleEmitterComponent *pPVar9;
  ParticleEmitterComponent *pPVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_80 [7];
  undefined8 uStack_48;
  long local_38;
  
  puVar6 = PTR_identityMatrix_007e74c8;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this[0x1d4] = (ParticleEmitterComponent)0x0;
  pPVar7 = this + 0x1d4;
  pPVar9 = pPVar7;
  if (pPVar7 <= this + 0x198) {
    pPVar9 = this + 0x198;
  }
  pPVar1 = this + 0x194;
  uVar2 = ((ulong)(pPVar9 + (-0x195 - (long)this)) >> 2) + 1;
  local_80[5] = *(undefined8 *)(puVar6 + 0x28);
  local_80[4] = *(undefined8 *)(puVar6 + 0x20);
  uStack_48 = *(undefined8 *)(puVar6 + 0x38);
  local_80[6] = *(undefined8 *)(puVar6 + 0x30);
  local_80[1] = *(undefined8 *)(puVar6 + 8);
  local_80[0] = *(undefined8 *)puVar6;
  local_80[3] = *(undefined8 *)(puVar6 + 0x18);
  local_80[2] = *(undefined8 *)(puVar6 + 0x10);
  pfVar8 = (float *)local_80;
  pPVar9 = pPVar1;
  if (7 < uVar2) {
    uVar11 = uVar2 & 0x7ffffffffffffff8;
    pPVar9 = this + 0x1a4;
    puVar12 = local_80 + 2;
    uVar13 = uVar11;
    do {
      puVar4 = puVar12 + -1;
      uVar14 = puVar12[-2];
      uVar16 = puVar12[1];
      uVar15 = *puVar12;
      uVar13 = uVar13 - 8;
      puVar12 = puVar12 + 4;
      *(undefined8 *)(pPVar9 + -8) = *puVar4;
      *(undefined8 *)(pPVar9 + -0x10) = uVar14;
      *(undefined8 *)(pPVar9 + 8) = uVar16;
      *(undefined8 *)pPVar9 = uVar15;
      pPVar9 = pPVar9 + 0x20;
    } while (uVar13 != 0);
    pfVar8 = (float *)((long)local_80 + uVar11 * 4);
    pPVar9 = this + uVar11 * 4 + 0x194;
    if (uVar2 == uVar11) goto LAB_003aa400;
  }
  do {
    pPVar10 = pPVar9 + 4;
    *(float *)pPVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pPVar9 = pPVar10;
  } while (pPVar10 < pPVar7);
LAB_003aa400:
  fVar5 = DAT_00683734;
  pPVar7 = this;
  if (DAT_00683734 < ABS(*(float *)(this + 0x188))) {
    Matrix4::RotationX((Matrix4 *)this,*(float *)(this + 0x188));
    pPVar7 = (ParticleEmitterComponent *)
             C_Matrix4Mul((float *)pPVar1,(float *)local_80,(float *)pPVar1);
    this[0x1d4] = (ParticleEmitterComponent)0x1;
  }
  if (fVar5 < ABS(*(float *)(this + 0x18c))) {
    Matrix4::RotationY((Matrix4 *)pPVar7,*(float *)(this + 0x18c));
    pPVar7 = (ParticleEmitterComponent *)
             C_Matrix4Mul((float *)pPVar1,(float *)local_80,(float *)pPVar1);
    this[0x1d4] = (ParticleEmitterComponent)0x1;
  }
  if (fVar5 < ABS(*(float *)(this + 400))) {
    Matrix4::RotationZ((Matrix4 *)pPVar7,*(float *)(this + 400));
    C_Matrix4Mul((float *)pPVar1,(float *)local_80,(float *)pPVar1);
    this[0x1d4] = (ParticleEmitterComponent)0x1;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


