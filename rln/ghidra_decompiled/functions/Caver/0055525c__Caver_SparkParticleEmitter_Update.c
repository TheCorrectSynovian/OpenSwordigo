/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055525c
 * Function: Caver::SparkParticleEmitter::Update
 * Signature: undefined __thiscall Update(SparkParticleEmitter * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SparkParticleEmitter::Update(float) */

void __thiscall Caver::SparkParticleEmitter::Update(SparkParticleEmitter *this,float param_1)

{
  ParticleSystem *this_00;
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  Vector2 *this_01;
  FloatColor *this_02;
  FloatColor *extraout_x1;
  float *pfVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  float local_134;
  float local_10c;
  undefined8 local_108 [2];
  undefined4 local_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  if (param_1 < DAT_00683488) goto LAB_00555640;
  pfVar15 = *(float **)(this + 200);
  if (pfVar15 == (float *)0x0) {
    fVar24 = (float)(**(code **)(*(long *)this + 0x20))(this,0);
    pfVar15 = *(float **)(this + 200);
    if (pfVar15 != (float *)0x0) goto LAB_005552e0;
    local_10c = (float)(**(code **)(*(long *)this + 0x20))(this,1);
    pfVar15 = *(float **)(this + 200);
    if (pfVar15 != (float *)0x0) goto LAB_005552e8;
                    /* catch() { ... } // from try @ 00554e0c with catch @ 005555fc */
    local_134 = (float)(**(code **)(*(long *)this + 0x20))(this,2);
    pfVar15 = *(float **)(this + 200);
    if (pfVar15 != (float *)0x0) goto LAB_005552f0;
    fVar20 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
  }
  else {
    fVar24 = *pfVar15;
LAB_005552e0:
    local_10c = pfVar15[1];
LAB_005552e8:
    local_134 = pfVar15[2];
LAB_005552f0:
    fVar20 = pfVar15[3];
  }
  puVar12 = PTR_Vector3Zero_007e5988;
  puVar11 = PTR_FASTRANDOM_MAX_007e4b68;
  uVar10 = _UNK_00689608;
  uVar9 = _DAT_00689600;
  dVar8 = DAT_00684790;
  uVar7 = _UNK_00683808;
  uVar6 = _DAT_00683800;
  fVar24 = fVar24 / local_10c;
  uVar19 = 0xffffffff;
  do {
    iVar13 = fastrandom();
    iVar25 = *(int *)puVar11;
    iVar14 = fastrandom();
    local_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0xffffffff00000000;
    local_b0 = 0;
    uStack_c8 = uVar7;
    local_d0 = uVar6;
    iVar22 = *(int *)puVar11;
    uStack_b8 = uVar10;
    local_c0 = uVar9;
    if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
      if ((int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) - *(long *)(*(long *)(this + 8) + 8))
               >> 3) * -0x45d1745d < 1) {
                    /* catch() { ... } // from try @ 00554f68 with catch @ 0055562c */
        local_f0 = -1;
        break;
      }
      this_01 = (Vector2 *)fastrandom();
                    /* catch() { ... } // from try @ 005550f4 with catch @ 005553f0 */
                    /* catch() { ... } // from try @ 005550e0 with catch @ 005553f4 */
                    /* catch() { ... } // from try @ 00555038 with catch @ 005553f8 */
      iVar2 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                           *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d;
                    /* catch() { ... } // from try @ 0055508c with catch @ 005553fc */
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (int)this_01 / iVar2;
      }
                    /* catch() { ... } // from try @ 0055507c with catch @ 00555400 */
      local_f0 = (int)this_01 - iVar3 * iVar2;
    }
    else {
      this_01 = (Vector2 *)fastrandom();
      uVar18 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2;
      uVar4 = 0;
      if (uVar18 != 0) {
        uVar4 = (ulong)(long)(int)this_01 / uVar18;
      }
      local_f0 = *(int *)(*(long *)(this + 0x20) + ((long)(int)this_01 - uVar4 * uVar18) * 4);
    }
    if (local_f0 < 0) break;
                    /* try { // try from 00555424 to 00655bab has its CatchHandler @ 00555c10 */
                    /* catch() { ... } // from try @ 00555070 with catch @ 0055542c
                       catch() { ... } // from try @ 005550cc with catch @ 0055542c */
                    /* catch() { ... } // from try @ 005549ac with catch @ 00555434 */
    fVar26 = (float)((double)(((float)iVar14 / (float)iVar22 + (float)(int)(uVar19 + 1)) / 7.0) *
                    dVar8);
    this_02 = (FloatColor *)Vector2::FromAngle(this_01,fVar26);
    uVar17 = local_108[0];
    lVar16 = *(long *)(this + 8);
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005548dc with catch @ 00555464 */
      plVar1[1] = plVar1[1] + 1;
    }
    lVar16 = *(long *)(lVar16 + 8) + (long)local_f0 * 0x58;
    fVar21 = *(float *)(lVar16 + 0x10);
    fVar23 = *(float *)(lVar16 + 0x14);
    if ((plVar1 != (long *)0x0) && (lVar16 = plVar1[1], plVar1[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 0055480c with catch @ 00555494 */
      this_02 = (FloatColor *)(**(code **)(*plVar1 + 0x10))(plVar1);
      lVar16 = plVar1[2];
      plVar1[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        this_02 = (FloatColor *)(**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
                    /* catch() { ... } // from try @ 005546bc with catch @ 005554c4 */
    local_e0 = CONCAT44(fVar24 * (float)((ulong)uVar17 >> 0x20),fVar24 * (float)uVar17);
    uVar17 = *(undefined8 *)puVar12;
    local_e4 = *(undefined4 *)(puVar12 + 8);
    uStack_ec = (undefined4)uVar17;
    uStack_e8 = (undefined4)((ulong)uVar17 >> 0x20);
    local_d8 = CONCAT44(local_d8._4_4_,fVar24 * 0.0);
    FloatColor::FromHSLA
              (this_02,*(float *)(this + 0xa8),*(float *)(this + 0xac),*(float *)(this + 0xb0),
               *(float *)(this + 0xb4));
                    /* catch() { ... } // from try @ 00555008 with catch @ 005554f4 */
    Color::FromFloatColor((Color *)local_108,extraout_x1);
                    /* catch() { ... } // from try @ 00555014 with catch @ 00555504 */
    local_d0 = (ulong)(uint)fVar26;
    local_d8 = CONCAT44(local_f4,(undefined4)local_d8);
    local_c0 = CONCAT44(local_134 / fVar23,fVar20 / fVar21);
    uStack_c8._4_4_ = ((float)iVar13 / (float)iVar25) * 0.5 + 0.5;
    iVar13 = fastrandom();
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uStack_c8._4_4_);
    uStack_b8 = CONCAT44(local_10c * (((float)iVar13 / (float)*(int *)puVar11) * 0.5 + 0.5),
                         0x3f800000);
    ParticleEmitter::ConvertLocalParticleToWorld((ParticleEmitter *)this,(Particle *)&local_f0);
    this_00 = *(ParticleSystem **)(this + 8);
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00554fc0 with catch @ 0055556c
                       catch() { ... } // from try @ 0055521c with catch @ 0055556c */
                    /* catch() { ... } // from try @ 00554b30 with catch @ 00555570 */
      plVar1[1] = plVar1[1] + 1;
    }
    ParticleSystem::AddParticle(this_00,(Particle *)&local_f0);
    if ((plVar1 != (long *)0x0) && (lVar16 = plVar1[1], plVar1[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
                    /* catch() { ... } // from try @ 00554f70 with catch @ 005555a0 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar16 = plVar1[2];
      plVar1[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 6);
  this[0x18] = (SparkParticleEmitter)0x1;
LAB_00555640:
  if (*(long *)(lVar5 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


