/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005559b8
 * Function: Caver::TrailParticleEmitter::Update
 * Signature: undefined __thiscall Update(TrailParticleEmitter * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TrailParticleEmitter::Update(float) */

void __thiscall Caver::TrailParticleEmitter::Update(TrailParticleEmitter *this,float param_1)

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
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  int iVar17;
  Vector2 *this_01;
  FloatColor *extraout_x1;
  long lVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 local_108 [2];
  undefined4 local_f4;
  int local_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  
                    /* catch() { ... } // from try @ 00554a40 with catch @ 005559e8 */
                    /* catch() { ... } // from try @ 005549fc with catch @ 005559ec */
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005545a8 with catch @ 00555a04 */
  if (DAT_00683488 <= param_1) {
    if (*(float **)(this + 200) == (float *)0x0) {
      fVar25 = (float)(**(code **)(*(long *)this + 0x20))(this,0);
    }
    else {
      fVar25 = **(float **)(this + 200);
    }
    fVar20 = *(float *)(this + 0xd8) + param_1;
    *(float *)(this + 0xd8) = fVar20;
    puVar16 = PTR_FASTRANDOM_MAX_007e4b68;
    fVar15 = DAT_00695774;
    fVar14 = DAT_00695770;
    uVar13 = _UNK_00689608;
    uVar12 = _DAT_00689600;
    dVar11 = DAT_00684790;
    fVar10 = _DAT_006846d0;
    fVar9 = DAT_00684318;
    fVar8 = DAT_00684314;
    fVar7 = DAT_00683f68;
    uVar6 = _UNK_00683808;
    uVar5 = _DAT_00683800;
    fVar4 = DAT_00683484;
    if (fVar25 < fVar20) {
                    /* catch() { ... } // from try @ 005549f0 with catch @ 00555a54
                       catch() { ... } // from try @ 00554a38 with catch @ 00555a54 */
                    /* catch() { ... } // from try @ 00554a78 with catch @ 00555a58
                       catch() { ... } // from try @ 00554c3c with catch @ 00555a58 */
                    /* catch() { ... } // from try @ 00554ab0 with catch @ 00555a68
                       catch() { ... } // from try @ 00554b74 with catch @ 00555a68
                       catch() { ... } // from try @ 00554be0 with catch @ 00555a68 */
                    /* catch() { ... } // from try @ 0055519c with catch @ 00555a78 */
                    /* catch() { ... } // from try @ 00555170 with catch @ 00555a80 */
      do {
        lVar18 = *(long *)(this + 8);
        plVar1 = *(long **)(this + 0x10);
        *(float *)(this + 0xd8) = fVar20 - fVar25;
        if (plVar1 != (long *)0x0) {
          plVar1[1] = plVar1[1] + 1;
        }
        if (*(long *)(this + 200) == 0) {
          uVar21 = (**(code **)(*(long *)this + 0x20))(this,6);
          *(undefined4 *)(lVar18 + 0xa4) = uVar21;
          if (plVar1 != (long *)0x0) goto LAB_00555b24;
LAB_00555b54:
          lVar18 = *(long *)(this + 200);
          if (lVar18 != 0) goto LAB_00555b5c;
LAB_00555b7c:
          fVar20 = (float)(**(code **)(*(long *)this + 0x20))(this,1);
          lVar18 = *(long *)(this + 200);
          if (lVar18 != 0) {
            fVar26 = *(float *)(lVar18 + 8);
            goto LAB_00555bc4;
          }
                    /* try { // try from 00555bac to 00655c13 has its CatchHandler @ 00554488 */
          fVar26 = (float)(**(code **)(*(long *)this + 0x20))(this,2);
          lVar18 = *(long *)(this + 200);
          if (lVar18 != 0) goto LAB_00555bc4;
                    /* try { // try from 00555eb8 to 00655ebf has its CatchHandler @ 00556170 */
          fVar29 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
          lVar18 = *(long *)(this + 200);
          if (lVar18 != 0) goto LAB_00555bc8;
                    /* try { // try from 00555ee0 to 00655f07 has its CatchHandler @ 005563f0 */
          fVar27 = (float)(**(code **)(*(long *)this + 0x20))(this,5);
        }
        else {
          *(undefined4 *)(lVar18 + 0xa4) = *(undefined4 *)(*(long *)(this + 200) + 0x18);
          if (plVar1 == (long *)0x0) goto LAB_00555b54;
LAB_00555b24:
          lVar18 = plVar1[1];
          plVar1[1] = lVar18 + -1;
          if (lVar18 + -1 != 0) goto LAB_00555b54;
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar18 = plVar1[2];
          plVar1[2] = lVar18 + -1;
          if (lVar18 + -1 != 0) goto LAB_00555b54;
          (**(code **)(*plVar1 + 0x18))(plVar1);
          lVar18 = *(long *)(this + 200);
          if (lVar18 == 0) goto LAB_00555b7c;
LAB_00555b5c:
          fVar20 = *(float *)(lVar18 + 4);
          fVar26 = *(float *)(lVar18 + 8);
LAB_00555bc4:
          fVar29 = *(float *)(lVar18 + 0xc);
LAB_00555bc8:
          fVar27 = *(float *)(lVar18 + 0x14);
        }
        local_f0 = 0;
        fStack_ec = 0.0;
        fStack_e8 = 0.0;
        local_e4 = 0.0;
        local_e0 = 0;
        local_d8 = 0xffffffff00000000;
        local_b0 = 0;
        uStack_c8 = uVar6;
        local_d0 = uVar5;
        uStack_b8 = uVar13;
        local_c0 = uVar12;
        if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
          if ((int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                           *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d < 1) {
            local_f0 = -1;
            break;
          }
          local_f0 = fastrandom();
          iVar17 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                                *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d;
          iVar22 = 0;
          if (iVar17 != 0) {
            iVar22 = local_f0 / iVar17;
          }
                    /* try { // try from 00555c58 to 00655c63 has its CatchHandler @ 00555cec */
          local_f0 = local_f0 - iVar22 * iVar17;
        }
        else {
          iVar17 = fastrandom();
          uVar19 = *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2;
          uVar2 = 0;
          if (uVar19 != 0) {
            uVar2 = (ulong)(long)iVar17 / uVar19;
          }
                    /* catch() { ... } // from try @ 00555424 with catch @ 00555c10 */
          local_f0 = *(int *)(*(long *)(this + 0x20) + ((long)iVar17 - uVar2 * uVar19) * 4);
                    /* try { // try from 00555c14 to 00655c57 has its CatchHandler @ 00555c14
                       catch(type#1 @ 00000000) { ... } // from try @ 00555c14 with catch @ 00555c14
                       catch(type#1 @ 00000000) { ... } // from try @ 00555c64 with catch @ 00555c14
                       catch(type#1 @ 00000000) { ... } // from try @ 00555d38 with catch @ 00555c14
                        */
        }
        if (local_f0 < 0) break;
                    /* try { // try from 00555c64 to 00655d0f has its CatchHandler @ 00555c14 */
        iVar17 = fastrandom();
        iVar22 = *(int *)puVar16;
        this_01 = (Vector2 *)fastrandom();
        fVar29 = fVar29 * (((float)(int)this_01 / (float)*(int *)puVar16) * fVar4 + fVar10);
        Vector2::FromAngle(this_01,(float)((double)((float)iVar17 / (float)iVar22) * dVar11));
        fVar24 = fVar29 / fVar20;
        local_e4 = fVar29 * 0.0;
        fVar23 = (float)((ulong)local_108[0] >> 0x20);
        fStack_ec = fVar29 * (float)local_108[0];
        fStack_e8 = fVar29 * fVar23;
        local_e0 = CONCAT44(-(fVar23 * fVar24),-((float)local_108[0] * fVar24));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00555c58 with catch @ 00555cec
                        */
        local_d8 = CONCAT44(local_d8._4_4_,fVar24 * fVar14);
        VaryingColor::RandomColor((VaryingColor *)(this + 0xa8));
        Color::FromFloatColor((Color *)local_108,extraout_x1);
        local_d8 = CONCAT44(local_f4,(float)local_d8);
                    /* try { // try from 00555d10 to 00655d37 has its CatchHandler @ 00555d40 */
        iVar17 = fastrandom();
        local_d0 = CONCAT44(local_d0._4_4_,
                            (float)((double)((float)iVar17 / (float)*(int *)puVar16) * dVar11));
        iVar17 = fastrandom();
                    /* try { // try from 00555d38 to 00655d43 has its CatchHandler @ 00555c14 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00555d10 with catch @ 00555d40
                        */
                    /* try { // try from 00555d44 to 00655dbf has its CatchHandler @ 00555d44
                       catch() { ... } // from try @ 00555d44 with catch @ 00555d44
                       catch() { ... } // from try @ 00555dd8 with catch @ 00555d44
                       catch() { ... } // from try @ 00555f08 with catch @ 00555d44
                       catch() { ... } // from try @ 00555fd0 with catch @ 00555d44
                       catch() { ... } // from try @ 0055643c with catch @ 00555d44 */
        local_d0 = CONCAT44((float)((double)(((float)iVar17 / (float)*(int *)puVar16) * fVar7) *
                                   dVar11),(undefined4)local_d0);
        uStack_c8._4_4_ = fVar26;
        iVar17 = fastrandom();
        uStack_b8 = CONCAT44(fVar20 * (((float)iVar17 / (float)*(int *)puVar16) * fVar9 + fVar8),
                             0x3f800000);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar27 * uStack_c8._4_4_);
        ParticleEmitter::ConvertLocalParticleToWorld((ParticleEmitter *)this,(Particle *)&local_f0);
        uVar28 = *(undefined8 *)(this + 0x50);
        fVar20 = *(float *)(this + 0x58);
        if (*(long *)(this + 200) == 0) {
                    /* try { // try from 00555dd8 to 00655e3b has its CatchHandler @ 00555d44 */
          fVar29 = (float)(**(code **)(*(long *)this + 0x20))(this,4);
          uVar30 = *(undefined8 *)(this + 0x50);
          fVar26 = *(float *)(this + 0x58);
        }
        else {
          fVar29 = *(float *)(*(long *)(this + 200) + 0x10);
          uVar30 = uVar28;
          fVar26 = fVar20;
                    /* try { // try from 00555dc0 to 00655dc7 has its CatchHandler @ 005563a4 */
                    /* try { // try from 00555dc8 to 00655dd7 has its CatchHandler @ 00556334 */
        }
        local_e0 = CONCAT44((float)((ulong)uVar28 >> 0x20) * fVar29 +
                            (float)((ulong)local_e0 >> 0x20),
                            (float)uVar28 * fVar29 + (float)local_e0);
        local_d8 = CONCAT44(local_d8._4_4_,fVar20 * fVar29 + (float)local_d8);
        iVar17 = fastrandom();
        fVar20 = ((float)iVar17 / (float)*(int *)puVar16 + -0.5) * fVar15;
        fStack_ec = fStack_ec + (float)uVar30 * fVar20;
        fStack_e8 = fStack_e8 + (float)((ulong)uVar30 >> 0x20) * fVar20;
                    /* try { // try from 00555e3c to 00655e47 has its CatchHandler @ 005563f0 */
        local_e4 = fVar26 * fVar20 + local_e4;
                    /* try { // try from 00555e48 to 00655e4f has its CatchHandler @ 00556260 */
        this_00 = *(ParticleSystem **)(this + 8);
        plVar1 = *(long **)(this + 0x10);
        if (plVar1 != (long *)0x0) {
                    /* try { // try from 00555e50 to 00655e5b has its CatchHandler @ 005563f0 */
          plVar1[1] = plVar1[1] + 1;
        }
        ParticleSystem::AddParticle(this_00,(Particle *)&local_f0);
                    /* try { // try from 00555e68 to 00655e6f has its CatchHandler @ 005561ec */
                    /* try { // try from 00555e70 to 00655e7f has its CatchHandler @ 00556180 */
        if ((plVar1 != (long *)0x0) &&
           (lVar18 = plVar1[1], plVar1[1] = lVar18 + -1, lVar18 + -1 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar18 = plVar1[2];
          plVar1[2] = lVar18 + -1;
          if (lVar18 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        fVar20 = *(float *)(this + 0xd8);
                    /* try { // try from 00555eb0 to 00655eb3 has its CatchHandler @ 0055616c */
      } while (fVar25 < fVar20);
    }
  }
                    /* try { // try from 00555f08 to 00655fb7 has its CatchHandler @ 00555d44 */
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


