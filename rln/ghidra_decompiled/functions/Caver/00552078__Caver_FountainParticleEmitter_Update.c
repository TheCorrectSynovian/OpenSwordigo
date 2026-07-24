/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00552078
 * Function: Caver::FountainParticleEmitter::Update
 * Signature: undefined __thiscall Update(FountainParticleEmitter * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FountainParticleEmitter::Update(float) */

void __thiscall Caver::FountainParticleEmitter::Update(FountainParticleEmitter *this,float param_1)

{
  ParticleSystem *this_00;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  int iVar13;
  Vector2 *this_01;
  FloatColor *extraout_x1;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  int iVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  int local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005520c4 to 006520cb has its CatchHandler @ 00552894 */
  if (DAT_00683488 <= param_1) {
                    /* try { // try from 005520cc to 006520db has its CatchHandler @ 0055282c */
    if (*(long *)(this + 200) == 0) {
      fVar21 = (float)(**(code **)(*(long *)this + 0x20))(this,0xb);
    }
    else {
      fVar21 = *(float *)(*(long *)(this + 200) + 0x2c);
    }
    fVar16 = *(float *)(this + 0xd8) + param_1;
    *(float *)(this + 0xd8) = fVar16;
    puVar12 = PTR_FASTRANDOM_MAX_007e4b68;
    uVar11 = _UNK_00689608;
    uVar10 = _DAT_00689600;
    dVar9 = DAT_00684790;
    fVar8 = DAT_00684004;
    fVar7 = DAT_00683f68;
    uVar6 = _UNK_00683808;
    uVar5 = _DAT_00683800;
    fVar4 = DAT_00683734;
    if (fVar21 < fVar16) {
                    /* try { // try from 00552108 to 0065212f has its CatchHandler @ 0055281c */
      do {
        lVar14 = *(long *)(this + 8);
        plVar1 = *(long **)(this + 0x10);
                    /* try { // try from 00552174 to 0065219b has its CatchHandler @ 005525f8 */
        *(float *)(this + 0xd8) = fVar16 - fVar21;
        if (plVar1 != (long *)0x0) {
          plVar1[1] = plVar1[1] + 1;
        }
        if (*(long *)(this + 200) == 0) {
          uVar17 = (**(code **)(*(long *)this + 0x20))(this,10);
          *(undefined4 *)(lVar14 + 0xa4) = uVar17;
        }
        else {
          *(undefined4 *)(lVar14 + 0xa4) = *(undefined4 *)(*(long *)(this + 200) + 0x28);
        }
                    /* try { // try from 005521c4 to 006521eb has its CatchHandler @ 005525b0 */
        if ((plVar1 != (long *)0x0) &&
           (lVar14 = plVar1[1], plVar1[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar14 = plVar1[2];
          plVar1[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        local_f0 = 0;
        fStack_ec = 0.0;
        local_e8 = 0.0;
        fStack_e4 = 0.0;
        local_e0 = 0;
        local_d8 = 0xffffffff00000000;
                    /* try { // try from 0055220c to 00652233 has its CatchHandler @ 0055281c */
        local_b0 = 0;
        uStack_c8 = uVar6;
        local_d0 = uVar5;
        uStack_b8 = uVar11;
        local_c0 = uVar10;
        if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
          if ((int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                           *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d < 1) {
            local_f0 = -1;
            break;
          }
          local_f0 = fastrandom();
          iVar13 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                                *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d;
          iVar18 = 0;
          if (iVar13 != 0) {
            iVar18 = local_f0 / iVar13;
          }
          local_f0 = local_f0 - iVar18 * iVar13;
        }
        else {
          iVar13 = fastrandom();
          uVar15 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2;
          uVar2 = 0;
          if (uVar15 != 0) {
            uVar2 = (ulong)(long)iVar13 / uVar15;
          }
          local_f0 = *(int *)(*(long *)(this + 0x20) + ((long)iVar13 - uVar2 * uVar15) * 4);
        }
        if (local_f0 < 0) break;
        if (*(float **)(this + 200) == (float *)0x0) {
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,0);
        }
        else {
                    /* try { // try from 00552258 to 0065227f has its CatchHandler @ 00552820 */
          fVar16 = **(float **)(this + 200);
        }
        this_01 = (Vector2 *)fastrandom();
        iVar18 = *(int *)puVar12;
        iVar13 = (int)this_01;
                    /* try { // try from 005522cc to 006522d3 has its CatchHandler @ 00552758 */
        if (*(long *)(this + 200) == 0) {
                    /* try { // try from 005522f0 to 0065232b has its CatchHandler @ 00552820 */
          this_01 = (Vector2 *)(**(code **)(*(long *)this + 0x20))(this,1);
          fVar19 = extraout_s0;
        }
        else {
          fVar19 = *(float *)(*(long *)(this + 200) + 4);
        }
        Vector2::FromAngle(this_01,(fVar16 + ((float)iVar13 / (float)iVar18 + -0.5) * fVar19) *
                                   fVar8);
        fVar19 = fStack_104;
        fVar16 = local_108;
        if (*(long *)(this + 200) == 0) {
                    /* try { // try from 0055232c to 0065261b has its CatchHandler @ 00551c5c */
          fVar22 = (float)(**(code **)(*(long *)this + 0x20))(this,5);
        }
        else {
          fVar22 = *(float *)(*(long *)(this + 200) + 0x14);
        }
        iVar13 = fastrandom();
        iVar18 = *(int *)puVar12;
        lVar14 = *(long *)(this + 200);
        if (lVar14 == 0) {
          fVar20 = (float)(**(code **)(*(long *)this + 0x20))(this,6);
          lVar14 = *(long *)(this + 200);
        }
        else {
          fVar20 = *(float *)(lVar14 + 0x18);
        }
        fVar22 = fVar22 * (((float)iVar13 / (float)iVar18 + (float)iVar13 / (float)iVar18 + -1.0) *
                           fVar20 + 1.0);
        local_e0 = CONCAT44(fVar19 * fVar22,fVar16 * fVar22);
        local_d8 = CONCAT44(local_d8._4_4_,fVar22 * 0.0);
        local_e8 = 0.0;
        fStack_e4 = 0.0;
        fStack_ec = 0.0;
        if (lVar14 == 0) {
          fVar22 = (float)(**(code **)(*(long *)this + 0x20))(this,2);
          if (fVar4 < fVar22) goto LAB_005523f0;
LAB_005523c4:
          lVar14 = *(long *)(this + 200);
          if (lVar14 != 0) goto LAB_005523cc;
LAB_00552478:
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
        }
        else {
          if (*(float *)(lVar14 + 8) <= fVar4) goto LAB_005523c4;
LAB_005523f0:
          iVar13 = fastrandom();
          iVar18 = *(int *)puVar12;
          if (*(long *)(this + 200) == 0) {
            local_100 = (float)(**(code **)(*(long *)this + 0x20))(this,2);
          }
          else {
            local_100 = *(float *)(*(long *)(this + 200) + 8);
          }
          local_100 = ((float)iVar13 / (float)iVar18) * local_100;
          local_108 = fVar16 * local_100;
          fStack_104 = fVar19 * local_100;
          local_100 = local_100 * 0.0;
          Vector2::Vector2((Vector2 *)&local_f8,(Vector3 *)&local_108);
          fStack_ec = local_f8 + fStack_ec;
          local_e8 = fStack_f4 + local_e8;
          fStack_e4 = fStack_e4 + 0.0;
          lVar14 = *(long *)(this + 200);
          if (lVar14 == 0) goto LAB_00552478;
LAB_005523cc:
          fVar16 = *(float *)(lVar14 + 0xc);
        }
        if (fVar4 < fVar16) {
          iVar13 = fastrandom();
          iVar18 = *(int *)puVar12;
          if (*(long *)(this + 200) == 0) {
            fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
          }
          else {
            fVar16 = *(float *)(*(long *)(this + 200) + 0xc);
          }
          fStack_ec = fStack_ec + ((float)iVar13 / (float)iVar18 + -0.5) * fVar16;
        }
        if (*(long *)(this + 200) == 0) {
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,4);
        }
        else {
          fVar16 = *(float *)(*(long *)(this + 200) + 0x10);
        }
        if (fVar4 < fVar16) {
          iVar13 = fastrandom();
          iVar18 = *(int *)puVar12;
          if (*(long *)(this + 200) == 0) {
            fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,4);
          }
          else {
            fVar16 = *(float *)(*(long *)(this + 200) + 0x10);
          }
          local_e8 = local_e8 + ((float)iVar13 / (float)iVar18 + -0.5) * fVar16;
        }
        VaryingColor::RandomColor((VaryingColor *)(this + 0xa8));
        Color::FromFloatColor((Color *)&local_108,extraout_x1);
        local_d8 = CONCAT44(local_f8,(float)local_d8);
        iVar13 = fastrandom();
        local_d0 = CONCAT44(local_d0._4_4_,
                            (float)((double)((float)iVar13 / (float)*(int *)puVar12) * dVar9));
        iVar13 = fastrandom();
                    /* catch() { ... } // from try @ 005521c4 with catch @ 005525b0 */
                    /* catch() { ... } // from try @ 00551cb8 with catch @ 005525b4 */
        local_d0 = CONCAT44((float)((double)(((float)iVar13 / (float)*(int *)puVar12) * fVar7) *
                                   dVar9),(undefined4)local_d0);
        if (*(long *)(this + 200) == 0) {
                    /* catch() { ... } // from try @ 00551ca4 with catch @ 005525f4 */
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,8);
                    /* catch() { ... } // from try @ 00552174 with catch @ 005525f8 */
        }
        else {
          fVar16 = *(float *)(*(long *)(this + 200) + 0x20);
        }
        iVar13 = fastrandom();
        lVar14 = *(long *)(this + 200);
                    /* try { // try from 0055261c to 00652643 has its CatchHandler @ 00552924 */
        fVar19 = (float)iVar13 / (float)*(int *)puVar12 + (float)iVar13 / (float)*(int *)puVar12 +
                 -1.0;
        if (lVar14 == 0) {
                    /* try { // try from 00552644 to 006526df has its CatchHandler @ 00551c5c */
                    /* catch() { ... } // from try @ 00551fc0 with catch @ 00552648 */
          fVar22 = (float)(**(code **)(*(long *)this + 0x20))(this,0xe);
          lVar14 = *(long *)(this + 200);
          uStack_c8 = CONCAT44(fVar16 + fVar19 * fVar22,(undefined4)uStack_c8);
          if (lVar14 != 0) goto LAB_00552660;
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,0xc);
        }
        else {
          uStack_c8 = CONCAT44(fVar16 + fVar19 * *(float *)(lVar14 + 0x38),(undefined4)uStack_c8);
LAB_00552660:
          fVar16 = *(float *)(lVar14 + 0x30);
        }
        iVar13 = fastrandom();
        lVar14 = *(long *)(this + 200);
                    /* catch() { ... } // from try @ 00551fa8 with catch @ 00552680 */
                    /* catch() { ... } // from try @ 00551f8c with catch @ 00552684 */
        fVar19 = (float)iVar13 / (float)*(int *)puVar12 + (float)iVar13 / (float)*(int *)puVar12 +
                 -1.0;
        if (lVar14 == 0) {
                    /* catch() { ... } // from try @ 00551f74 with catch @ 005526bc */
          fVar20 = (float)(**(code **)(*(long *)this + 0x20))(this,0xd);
                    /* catch() { ... } // from try @ 00551dc0 with catch @ 005526c0 */
          lVar14 = *(long *)(this + 200);
          fVar22 = uStack_c8._4_4_;
          uStack_b8 = CONCAT44(fVar16 * (fVar19 * fVar20 + 1.0),(undefined4)uStack_b8);
          if (lVar14 != 0) goto LAB_005526e0;
                    /* catch() { ... } // from try @ 00552050 with catch @ 00552818 */
                    /* catch() { ... } // from try @ 00552108 with catch @ 0055281c
                       catch() { ... } // from try @ 0055220c with catch @ 0055281c */
                    /* catch() { ... } // from try @ 00552258 with catch @ 00552820
                       catch() { ... } // from try @ 005522f0 with catch @ 00552820 */
          fVar16 = (float)(**(code **)(*(long *)this + 0x20))(this,9);
                    /* catch() { ... } // from try @ 005520cc with catch @ 0055282c */
        }
        else {
          uStack_b8 = (ulong)(uint)(fVar16 * (fVar19 * *(float *)(lVar14 + 0x34) + 1.0)) << 0x20;
LAB_005526e0:
                    /* try { // try from 005526e0 to 0065279f has its CatchHandler @ 00552924 */
          fVar16 = *(float *)(lVar14 + 0x24);
          fVar22 = uStack_c8._4_4_;
        }
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar22 * fVar16);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,0x3f800000);
        ParticleEmitter::ConvertLocalParticleToWorld((ParticleEmitter *)this,(Particle *)&local_f0);
        uVar23 = *(undefined8 *)(this + 0x50);
        fVar16 = *(float *)(this + 0x58);
        if (*(long *)(this + 200) == 0) {
          fVar19 = (float)(**(code **)(*(long *)this + 0x20))(this,7);
        }
        else {
                    /* catch() { ... } // from try @ 00551d18 with catch @ 0055270c */
          fVar19 = *(float *)(*(long *)(this + 200) + 0x1c);
        }
        local_e0 = CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar19 +
                            (float)((ulong)local_e0 >> 0x20),
                            (float)uVar23 * fVar19 + (float)local_e0);
        local_d8 = CONCAT44(local_d8._4_4_,fVar16 * fVar19 + (float)local_d8);
        iVar13 = fastrandom();
                    /* catch() { ... } // from try @ 005522cc with catch @ 00552758 */
        fVar16 = ((float)iVar13 / (float)*(int *)puVar12) * DAT_00688904;
        fStack_ec = (float)local_e0 * fVar16 + fStack_ec;
        local_e8 = (float)((ulong)local_e0 >> 0x20) * fVar16 + local_e8;
        fStack_e4 = (float)local_d8 * fVar16 + fStack_e4;
        this_00 = *(ParticleSystem **)(this + 8);
        plVar1 = *(long **)(this + 0x10);
        if (plVar1 != (long *)0x0) {
          plVar1[1] = plVar1[1] + 1;
        }
                    /* try { // try from 005527a0 to 006528b3 has its CatchHandler @ 00551c5c */
                    /* catch() { ... } // from try @ 00551ecc with catch @ 005527a4 */
        ParticleSystem::AddParticle(this_00,(Particle *)&local_f0);
        if ((plVar1 != (long *)0x0) &&
           (lVar14 = plVar1[1], plVar1[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar14 = plVar1[2];
          plVar1[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
                    /* catch() { ... } // from try @ 00551eb4 with catch @ 005527dc */
                    /* catch() { ... } // from try @ 00551e98 with catch @ 005527e0 */
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        fVar16 = *(float *)(this + 0xd8);
      } while (fVar21 < fVar16);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


