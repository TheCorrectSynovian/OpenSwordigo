/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055633c
 * Function: Caver::WhooshParticleEmitter::Update
 * Signature: undefined __thiscall Update(WhooshParticleEmitter * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WhooshParticleEmitter::Update(float) */

void __thiscall Caver::WhooshParticleEmitter::Update(WhooshParticleEmitter *this,float param_1)

{
  ParticleSystem *this_00;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  int iVar15;
  Vector2 *this_01;
  FloatColor *this_02;
  FloatColor *extraout_x1;
  long lVar16;
  ulong uVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 local_f8 [2];
  undefined4 local_e4;
  int local_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  if (DAT_00683488 <= param_1) {
    if (*(float **)(this + 200) == (float *)0x0) {
                    /* catch() { ... } // from try @ 00555dc0 with catch @ 005563a4 */
      fVar22 = (float)(**(code **)(*(long *)this + 0x20))(this,0);
    }
    else {
      fVar22 = **(float **)(this + 200);
    }
    fVar18 = *(float *)(this + 0xd8) + param_1;
    *(float *)(this + 0xd8) = fVar18;
    puVar14 = PTR_FASTRANDOM_MAX_007e4b68;
    fVar13 = DAT_00695774;
    fVar12 = DAT_00695770;
    uVar11 = _UNK_00689608;
    uVar10 = _DAT_00689600;
    dVar9 = DAT_00684790;
    fVar8 = DAT_00684318;
    fVar7 = DAT_00684314;
    fVar6 = DAT_00683f68;
    uVar5 = _UNK_00683808;
    uVar4 = _DAT_00683800;
    while (fVar22 < fVar18) {
                    /* catch() { ... } // from try @ 00556210 with catch @ 00556444 */
      lVar16 = *(long *)(this + 200);
                    /* catch() { ... } // from try @ 005564f8 with catch @ 00556448 */
      *(float *)(this + 0xd8) = fVar18 - fVar22;
      if (lVar16 == 0) {
                    /* try { // try from 00556460 to 00656467 has its CatchHandler @ 00556504 */
        fVar18 = (float)(**(code **)(*(long *)this + 0x20))(this,1);
        lVar16 = *(long *)(this + 200);
        if (lVar16 != 0) goto LAB_0055647c;
        uVar23 = (**(code **)(*(long *)this + 0x20))(this,2);
        lVar16 = *(long *)(this + 200);
        if (lVar16 != 0) goto LAB_00556480;
                    /* try { // try from 0055675c to 00656783 has its CatchHandler @ 00556848 */
        fVar24 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
      }
      else {
        fVar18 = *(float *)(lVar16 + 4);
LAB_0055647c:
        uVar23 = *(undefined4 *)(lVar16 + 8);
LAB_00556480:
        fVar24 = *(float *)(lVar16 + 0xc);
      }
      local_e0 = 0;
      fStack_dc = 0.0;
      fStack_d8 = 0.0;
      local_d4 = 0.0;
      local_d0 = 0;
      local_c8 = 0xffffffff00000000;
      local_a0 = 0;
                    /* try { // try from 00556494 to 0065649f has its CatchHandler @ 005564ac */
      uStack_b8 = uVar5;
      local_c0 = uVar4;
      uStack_a8 = uVar11;
      local_b0 = uVar10;
      if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
        if ((int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) - *(long *)(*(long *)(this + 8) + 8)
                         ) >> 3) * -0x45d1745d < 1) {
          local_e0 = -1;
          break;
        }
        local_e0 = fastrandom();
                    /* try { // try from 005564f8 to 00656513 has its CatchHandler @ 00556448 */
                    /* catch() { ... } // from try @ 005564d0 with catch @ 00556500 */
                    /* catch() { ... } // from try @ 00556460 with catch @ 00556504 */
        iVar15 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                              *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d;
        iVar19 = 0;
        if (iVar15 != 0) {
          iVar19 = local_e0 / iVar15;
        }
        local_e0 = local_e0 - iVar19 * iVar15;
                    /* try { // try from 00556514 to 0065651f has its CatchHandler @ 00556520 */
      }
      else {
                    /* catch() { ... } // from try @ 00556494 with catch @ 005564ac */
        iVar15 = fastrandom();
        uVar17 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2;
        uVar2 = 0;
        if (uVar17 != 0) {
          uVar2 = (ulong)(long)iVar15 / uVar17;
        }
        local_e0 = *(int *)(*(long *)(this + 0x20) + ((long)iVar15 - uVar2 * uVar17) * 4);
                    /* try { // try from 005564d0 to 006564f7 has its CatchHandler @ 00556500 */
      }
      if (local_e0 < 0) break;
      iVar15 = fastrandom();
                    /* catch() { ... } // from try @ 00556514 with catch @ 00556520 */
      iVar19 = *(int *)puVar14;
                    /* try { // try from 00556524 to 00656527 has its CatchHandler @ 0055652c */
                    /* catch() { ... } // from try @ 00556524 with catch @ 0055652c */
                    /* try { // try from 00556530 to 006565b3 has its CatchHandler @ 00556530
                       catch() { ... } // from try @ 00556530 with catch @ 00556530
                       catch() { ... } // from try @ 005565dc with catch @ 00556530
                       catch() { ... } // from try @ 00556674 with catch @ 00556530
                       catch() { ... } // from try @ 00556784 with catch @ 00556530
                       catch() { ... } // from try @ 005568a4 with catch @ 00556530
                       catch() { ... } // from try @ 0055694c with catch @ 00556530 */
      this_01 = (Vector2 *)fastrandom();
      fVar24 = fVar24 * ((float)(int)this_01 / (float)*(int *)puVar14);
      this_02 = (FloatColor *)
                Vector2::FromAngle(this_01,(float)((double)((float)iVar15 / (float)iVar19) * dVar9))
      ;
      fVar21 = fVar24 / fVar18;
      local_d4 = fVar24 * 0.0;
      fVar20 = (float)((ulong)local_f8[0] >> 0x20);
      fStack_dc = (float)local_f8[0] * fVar24;
      fStack_d8 = fVar20 * fVar24;
      local_d0._0_4_ = -((float)local_f8[0] * fVar21);
      local_d0._4_4_ = -(fVar20 * fVar21);
      local_c8 = CONCAT44(local_c8._4_4_,fVar21 * fVar12);
      FloatColor::FromHSLA
                (this_02,*(float *)(this + 0xa8),*(float *)(this + 0xac),*(float *)(this + 0xb0),
                 *(float *)(this + 0xb4));
                    /* try { // try from 005565b4 to 006565db has its CatchHandler @ 005567fc */
      Color::FromFloatColor((Color *)local_f8,extraout_x1);
      local_c8._4_4_ = local_e4;
      iVar15 = fastrandom();
                    /* try { // try from 005565dc to 0065666f has its CatchHandler @ 00556530 */
      local_c0 = CONCAT44(local_c0._4_4_,
                          (float)((double)((float)iVar15 / (float)*(int *)puVar14) * dVar9));
      iVar15 = fastrandom();
      local_c0 = CONCAT44((float)((double)(((float)iVar15 / (float)*(int *)puVar14) * fVar6) * dVar9
                                 ),(undefined4)local_c0);
      uStack_b8._4_4_ = uVar23;
      iVar15 = fastrandom();
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uStack_b8._4_4_);
      uStack_a8 = CONCAT44(fVar18 * (((float)iVar15 / (float)*(int *)puVar14) * fVar8 + fVar7),
                           0x3f800000);
      ParticleEmitter::ConvertLocalParticleToWorld((ParticleEmitter *)this,(Particle *)&local_e0);
      fVar21 = *(float *)(this + 0x58);
      fVar24 = (float)*(undefined8 *)(this + 0x50);
      fVar20 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
      local_d0 = CONCAT44(fVar20 * 0.3 + local_d0._4_4_,fVar24 * 0.3 + (float)local_d0);
                    /* try { // try from 00556670 to 00656673 has its CatchHandler @ 005568a8 */
                    /* try { // try from 00556674 to 0065669f has its CatchHandler @ 00556530 */
      local_c8 = CONCAT44(local_c8._4_4_,fVar21 * fVar6 + (float)local_c8);
      iVar15 = fastrandom();
                    /* try { // try from 005566a0 to 006566ab has its CatchHandler @ 00556858 */
      fVar18 = ((float)iVar15 / (float)*(int *)puVar14 + -0.5) * fVar13;
      fStack_dc = fStack_dc + fVar24 * fVar18;
      fStack_d8 = fStack_d8 + fVar20 * fVar18;
      local_d4 = fVar21 * fVar18 + local_d4;
      this_00 = *(ParticleSystem **)(this + 8);
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 != (long *)0x0) {
                    /* try { // try from 005566cc to 006566f3 has its CatchHandler @ 005567f8 */
        plVar1[1] = plVar1[1] + 1;
      }
      ParticleSystem::AddParticle(this_00,(Particle *)&local_e0);
      if ((plVar1 != (long *)0x0) && (lVar16 = plVar1[1], plVar1[1] = lVar16 + -1, lVar16 + -1 == 0)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar16 = plVar1[2];
                    /* try { // try from 00556708 to 0065670f has its CatchHandler @ 00556848 */
        plVar1[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      fVar18 = *(float *)(this + 0xd8);
    }
  }
                    /* try { // try from 00556784 to 0065681b has its CatchHandler @ 00556530 */
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


