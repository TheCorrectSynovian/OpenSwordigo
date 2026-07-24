/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055197c
 * Function: Caver::BlastParticleEmitter::Update
 * Signature: undefined __thiscall Update(BlastParticleEmitter * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BlastParticleEmitter::Update(float) */

void __thiscall Caver::BlastParticleEmitter::Update(BlastParticleEmitter *this,float param_1)

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
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  Vector2 *this_01;
  FloatColor *this_02;
  FloatColor *extraout_x1;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float local_138;
  undefined4 local_134;
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
  if (param_1 < DAT_00683488) goto LAB_00551d00;
  lVar16 = *(long *)(this + 200);
  if (lVar16 == 0) {
    local_134 = (**(code **)(*(long *)this + 0x20))(this,1);
    lVar16 = *(long *)(this + 200);
    if (lVar16 != 0) goto LAB_00551a04;
                    /* try { // try from 00551cb8 to 00651cc3 has its CatchHandler @ 005525b4 */
    local_138 = (float)(**(code **)(*(long *)this + 0x20))(this,2);
    lVar16 = *(long *)(this + 200);
    if (lVar16 != 0) goto LAB_00551a0c;
    fVar21 = (float)(**(code **)(*(long *)this + 0x20))(this,3);
  }
  else {
    local_134 = *(undefined4 *)(lVar16 + 4);
LAB_00551a04:
    local_138 = *(float *)(lVar16 + 8);
LAB_00551a0c:
    fVar21 = *(float *)(lVar16 + 0xc);
  }
  puVar12 = PTR_Vector3Zero_007e5988;
  puVar11 = PTR_FASTRANDOM_MAX_007e4b68;
  uVar10 = _UNK_00689608;
  uVar9 = _DAT_00689600;
  dVar8 = DAT_00684790;
  uVar7 = _UNK_00683808;
  uVar6 = _DAT_00683800;
  uVar19 = 0xffffffff;
  do {
    iVar14 = fastrandom();
    iVar22 = *(int *)puVar11;
    iVar15 = fastrandom();
    local_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0xffffffff00000000;
    local_b0 = 0;
    uStack_c8 = uVar7;
    local_d0 = uVar6;
    iVar24 = *(int *)puVar11;
    uStack_b8 = uVar10;
    local_c0 = uVar9;
    if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
      if ((int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) - *(long *)(*(long *)(this + 8) + 8))
               >> 3) * -0x45d1745d < 1) {
        local_f0 = -1;
        break;
      }
      this_01 = (Vector2 *)fastrandom();
      iVar2 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                           *(long *)(*(long *)(this + 8) + 8)) >> 3) * -0x45d1745d;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (int)this_01 / iVar2;
      }
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
    fVar23 = (float)((double)(((float)iVar15 / (float)iVar24 + (float)(int)(uVar19 + 1)) / 6.0) *
                    dVar8);
    this_02 = (FloatColor *)Vector2::FromAngle(this_01,fVar23);
    uVar13 = local_108[0];
    lVar16 = *(long *)(this + 8);
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    fVar25 = ((float)iVar14 / (float)iVar22) * 0.5 + 0.5;
    lVar16 = *(long *)(lVar16 + 8) + (long)local_f0 * 0x58;
    fVar26 = *(float *)(lVar16 + 0x10);
    fVar20 = *(float *)(lVar16 + 0x14);
    if ((plVar1 != (long *)0x0) && (lVar16 = plVar1[1], plVar1[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
      this_02 = (FloatColor *)(**(code **)(*plVar1 + 0x10))(plVar1);
      lVar16 = plVar1[2];
      plVar1[2] = lVar16 + -1;
                    /* try { // try from 00551bb0 to 00651c23 has its CatchHandler @ 00551478 */
      if (lVar16 + -1 == 0) {
        this_02 = (FloatColor *)(**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    uVar17 = *(undefined8 *)puVar12;
    local_e4 = *(undefined4 *)(puVar12 + 8);
    local_e0 = CONCAT44((float)((ulong)uVar13 >> 0x20) * 0.0,(float)uVar13 * 0.0);
    uStack_ec = (undefined4)uVar17;
    uStack_e8 = (undefined4)((ulong)uVar17 >> 0x20);
    local_d8 = local_d8 & 0xffffffff00000000;
    FloatColor::FromHSLA
              (this_02,*(float *)(this + 0xa8),*(float *)(this + 0xac),*(float *)(this + 0xb0),
               *(float *)(this + 0xb4));
    Color::FromFloatColor((Color *)local_108,extraout_x1);
                    /* catch() { ... } // from try @ 0055191c with catch @ 00551c20 */
    local_d8 = CONCAT44(local_f4,(undefined4)local_d8);
                    /* catch() { ... } // from try @ 00551c38 with catch @ 00551c24 */
    local_d0 = (ulong)(uint)fVar23;
    local_c0 = CONCAT44(local_138 / fVar20,fVar21 / fVar26);
                    /* try { // try from 00551c34 to 00651c37 has its CatchHandler @ 00551c48 */
    uStack_c8 = CONCAT44(fVar25,fVar25);
                    /* try { // try from 00551c38 to 00651c5b has its CatchHandler @ 00551c24 */
    uStack_b8 = CONCAT44(local_134,0x3f800000);
    ParticleEmitter::ConvertLocalParticleToWorld((ParticleEmitter *)this,(Particle *)&local_f0);
    this_00 = *(ParticleSystem **)(this + 8);
    plVar1 = *(long **)(this + 0x10);
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00551c34 with catch @ 00551c48 */
      plVar1[1] = plVar1[1] + 1;
    }
    ParticleSystem::AddParticle(this_00,(Particle *)&local_f0);
                    /* try { // try from 00551c5c to 00651ca3 has its CatchHandler @ 00551c5c
                       catch() { ... } // from try @ 00551c5c with catch @ 00551c5c
                       catch() { ... } // from try @ 00551d40 with catch @ 00551c5c
                       catch() { ... } // from try @ 00551de8 with catch @ 00551c5c
                       catch() { ... } // from try @ 00551fc8 with catch @ 00551c5c
                       catch() { ... } // from try @ 0055232c with catch @ 00551c5c
                       catch() { ... } // from try @ 00552644 with catch @ 00551c5c
                       catch() { ... } // from try @ 005527a0 with catch @ 00551c5c
                       catch() { ... } // from try @ 00552920 with catch @ 00551c5c */
    if ((plVar1 != (long *)0x0) && (lVar16 = plVar1[1], plVar1[1] = lVar16 + -1, lVar16 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar16 = plVar1[2];
      plVar1[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    uVar19 = uVar19 + 1;
                    /* try { // try from 00551ca4 to 00651cb7 has its CatchHandler @ 005525f4 */
  } while (uVar19 < 5);
  this[0x18] = (BlastParticleEmitter)0x1;
LAB_00551d00:
  if (*(long *)(lVar5 + 0x28) == local_a8) {
                    /* try { // try from 00551d18 to 00651d3f has its CatchHandler @ 0055270c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00551d40 to 00651dbf has its CatchHandler @ 00551c5c */
  __stack_chk_fail();
}


