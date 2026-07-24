/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af110
 * Function: Caver::ShatterComponent::ShatterModel
 * Signature: undefined __thiscall ShatterModel(ShatterComponent * this, ModelComponent * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShatterComponent::ShatterModel(Caver::ModelComponent*, bool) */

void __thiscall
Caver::ShatterComponent::ShatterModel(ShatterComponent *this,ModelComponent *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  ParticleEmitterComponent *this_00;
  FloatColor *this_01;
  long lVar19;
  FloatColor *extraout_x1;
  ParticleEmitterComponent *pPVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  float fVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  Color aCStack_100 [8];
  Color aCStack_f8 [16];
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a4;
  float fStack_a0;
  float local_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  this_00 = (ParticleEmitterComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e5968);
  pPVar20 = *(ParticleEmitterComponent **)(this_00 + 0x118);
  this_00[0x169] = (ParticleEmitterComponent)param_2;
  if (pPVar20 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this_00 + 0x108),(Component *)this_00);
    pPVar20 = *(ParticleEmitterComponent **)(this_00 + 0x118);
  }
  if ((pPVar20 == (ParticleEmitterComponent *)0x0) || (pPVar20 == this_00)) {
    lVar19 = *(long *)(this_00 + 0x148);
    plVar1 = *(long **)(this_00 + 0x150);
  }
  else {
    lVar19 = *(long *)(pPVar20 + 0x148);
    plVar1 = *(long **)(pPVar20 + 0x150);
  }
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar21 = plVar1[2];
    plVar1[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  uVar8 = DAT_00689a28;
  *(undefined4 *)(lVar19 + 0x9c) = 0;
  *(undefined1 *)(lVar19 + 0x91) = 1;
  *(undefined8 *)(lVar19 + 0x94) = uVar8;
  local_b8 = (float)NEON_ucvtf((uint)(byte)param_1[0x13a]);
  fStack_b4 = (float)NEON_ucvtf((uint)(byte)param_1[0x13b]);
  local_b0 = (float)NEON_ucvtf((uint)(byte)param_1[0x13c]);
  fStack_ac = (float)NEON_ucvtf((uint)(byte)param_1[0x13d]);
  local_b8 = local_b8 / DAT_00683ffc;
  fStack_b4 = fStack_b4 / DAT_00683ffc;
  local_b0 = local_b0 / DAT_00683ffc;
  fStack_ac = fStack_ac / DAT_00683ffc;
  FloatColor::GetHSLComponents((FloatColor *)&local_b8,&local_a4);
  puVar10 = PTR_FASTRANDOM_MAX_007e4b68;
  dVar9 = DAT_00689a38;
  uVar8 = DAT_00689a30;
  fVar7 = DAT_0068797c;
  fVar6 = _DAT_00684940;
  dVar5 = DAT_00684790;
  fVar4 = _DAT_00684434;
  fVar3 = DAT_00684318;
  iVar22 = 10;
  uVar27 = NEON_fmov(0x41a00000,4);
  do {
    iVar14 = fastrandom();
    iVar23 = *(int *)puVar10;
    uVar15 = fastrandom();
    uVar24 = *(undefined4 *)puVar10;
    uVar16 = fastrandom();
    uVar28 = NEON_scvtf(CONCAT44(uVar16,uVar15),4);
    uVar29 = NEON_scvtf(CONCAT44(*(undefined4 *)puVar10,uVar24),4);
    iVar17 = fastrandom();
    local_c0 = ((float)iVar17 / (float)*(int *)puVar10 + -0.5) * 3.0;
    local_c8 = CONCAT44((float)((ulong)uVar28 >> 0x20) / (float)((ulong)uVar29 >> 0x20) +
                        (float)((ulong)uVar8 >> 0x20),(float)uVar28 / (float)uVar29 + (float)uVar8);
    Vector3::Normalize((Vector3 *)&local_c8);
    iVar17 = fastrandom();
    local_d0 = ((float)iVar17 / (float)*(int *)puVar10) * fVar6 + fVar7;
    fVar30 = (float)local_c8;
    local_d8 = local_d0 * fVar30;
    fVar31 = (float)((ulong)local_c8 >> 0x20);
    fStack_d4 = local_d0 * fVar31;
    local_d0 = local_c0 * local_d0;
    fVar33 = *(float *)(*(long *)(this + 0x28) + 0x78);
    uVar28 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    fVar32 = local_c0 * 20.0;
    iVar17 = fastrandom();
    fVar13 = local_9c;
    fVar12 = fStack_a0;
    fVar11 = local_a4;
    fVar25 = (float)iVar17 / (float)*(int *)puVar10;
    local_e8 = CONCAT44((float)((ulong)uVar28 >> 0x20) +
                        fVar31 * (float)((ulong)uVar27 >> 0x20) * fVar25,
                        (float)uVar28 + fVar30 * (float)uVar27 * fVar25);
    local_e0 = fVar33 + fVar32 * fVar25;
    this_01 = (FloatColor *)fastrandom();
    FloatColor::FromHSLA
              (this_01,fVar11,fVar12,
               fVar13 + ((float)(int)this_01 / (float)*(int *)puVar10 + -0.5) * fVar3,1.0);
    iVar17 = ParticleEmitterComponent::RandomParticleType(this_00);
    iVar18 = fastrandom();
    iVar26 = *(int *)puVar10;
    Color::FromFloatColor(aCStack_f8,extraout_x1);
    lVar19 = ParticleEmitterComponent::AddParticle
                       (this_00,iVar17,(Vector3 *)&local_e8,(Vector3 *)&local_d8,
                        (float)((double)((float)iVar18 / (float)iVar26) * dVar5),aCStack_100,
                        ((float)iVar14 / (float)iVar23) * fVar4 + 0.5);
    iVar14 = fastrandom();
    iVar17 = *(int *)puVar10;
    iVar22 = iVar22 + -1;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)(lVar19 + 0x2c);
    *(float *)(lVar19 + 0x24) = (float)((double)((float)iVar14 / (float)iVar17 + -0.5) * dVar9);
  } while (iVar22 != 0);
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


