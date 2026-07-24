/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004db9f0
 * Function: Caver::HealthBar::ShatterHeart
 * Signature: undefined __thiscall ShatterHeart(HealthBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HealthBar::ShatterHeart(int) */

void __thiscall Caver::HealthBar::ShatterHeart(HealthBar *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 local_118;
  long *local_110;
  void *local_100;
  float local_dc;
  float fStack_d8;
  undefined4 local_d4;
  float afStack_78 [3];
  undefined4 local_6c;
  undefined4 *local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  ParticleEmitter::ParticleEmitter((ParticleEmitter *)&local_120);
  plVar5 = local_110;
  local_120 = PTR_vtable_007e6a90 + 0x10;
  local_118 = *(undefined8 *)(this + 0x180);
  plVar2 = *(long **)(this + 0x188);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 2;
  }
  plVar7 = plVar2;
  if ((local_110 != (long *)0x0) &&
     (lVar10 = local_110[1], local_110[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    lVar10 = *local_110;
    local_110 = plVar2;
    (**(code **)(lVar10 + 0x10))(plVar5);
    lVar10 = plVar5[2];
    plVar5[2] = lVar10 + -1;
    plVar7 = local_110;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar7 = local_110;
    }
  }
  local_110 = plVar7;
  if ((plVar2 != (long *)0x0) && (lVar10 = plVar2[1], plVar2[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar10 = plVar2[2];
    plVar2[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  fVar12 = *(float *)(this + 0x11c);
  if (this[0x108] == (HealthBar)0x0) {
    fVar14 = 0.0;
  }
  else {
    iVar3 = *(int *)(this + 0x10c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    fVar14 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
             (fVar12 + fVar12 * DAT_0068493c * (float)((iVar3 >> 1) + -1)) * 0.5;
  }
                    /* catch() { ... } // from try @ 004dbbac with catch @ 004dbb4c */
  local_dc = (float)(int)(fVar12 * DAT_0068493c * (float)param_1 + fVar14) + fVar12 * 0.5;
  fStack_d8 = *(float *)(this + 0x88) + *(float *)(this + 0x120) * 0.5;
  uStack_128 = _UNK_00692948;
  local_130 = _DAT_00692940;
  local_d4 = 0;
                    /* try { // try from 004dbb90 to 005dbb93 has its CatchHandler @ 004dbba0 */
  FloatColor::GetHSLComponents((FloatColor *)&local_130,afStack_78);
  local_6c = uStack_128._4_4_;
                    /* catch() { ... } // from try @ 004dbb90 with catch @ 004dbba0 */
                    /* try { // try from 004dbba4 to 005dbbab has its CatchHandler @ 004dbbb4 */
  if (local_58 == (undefined4 *)0x0) {
                    /* catch() { ... } // from try @ 004dbba4 with catch @ 004dbbb4 */
                    /* try { // try from 004dbbb8 to 005dbbff has its CatchHandler @ 004dbbb8
                       catch(type#1 @ 00000000) { ... } // from try @ 004dbbb8 with catch @ 004dbbb8
                       catch(type#1 @ 00000000) { ... } // from try @ 004dbc1c with catch @ 004dbbb8
                       catch(type#1 @ 00000000) { ... } // from try @ 004dbd10 with catch @ 004dbbb8
                        */
    uVar8 = (**(code **)(local_120 + 0x18))(&local_120);
    puVar9 = operator_new__((ulong)uVar8 << 2);
    puVar6 = local_58;
    bVar1 = local_58 != (undefined4 *)0x0;
    local_58 = puVar9;
    if (bVar1) {
      operator_delete__(puVar6);
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
                    /* try { // try from 004dbc00 to 005dbc1b has its CatchHandler @ 004dbd04 */
        uVar13 = (**(code **)(local_120 + 0x20))(&local_120,uVar11 & 0xffffffff);
        local_58[uVar11] = uVar13;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
    }
    local_58[2] = 0x41200000;
    if (local_58 != (undefined4 *)0x0) goto LAB_004dbc2c;
    uVar8 = (**(code **)(local_120 + 0x18))(&local_120);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004dbc00 with catch @ 004dbd04
                        */
                    /* try { // try from 004dbd08 to 005dbd0f has its CatchHandler @ 004dbd18 */
    puVar9 = operator_new__((ulong)uVar8 << 2);
    puVar6 = local_58;
                    /* try { // try from 004dbd10 to 005dbd1b has its CatchHandler @ 004dbbb8 */
    bVar1 = local_58 != (undefined4 *)0x0;
    local_58 = puVar9;
    if (bVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004dbd08 with catch @ 004dbd18
                        */
      operator_delete__(puVar6);
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        uVar13 = (**(code **)(local_120 + 0x20))(&local_120,uVar11 & 0xffffffff);
        local_58[uVar11] = uVar13;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
    }
    local_58[3] = 0x41200000;
    if (local_58 == (undefined4 *)0x0) {
      uVar8 = (**(code **)(local_120 + 0x18))(&local_120);
      puVar9 = operator_new__((ulong)uVar8 << 2);
      puVar6 = local_58;
      bVar1 = local_58 != (undefined4 *)0x0;
      local_58 = puVar9;
      if (bVar1) {
        operator_delete__(puVar6);
      }
      if (uVar8 != 0) {
        uVar11 = 0;
        do {
          uVar13 = (**(code **)(local_120 + 0x20))(&local_120,uVar11 & 0xffffffff);
          local_58[uVar11] = uVar13;
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      *local_58 = 0x41b80000;
      if (local_58 == (undefined4 *)0x0) {
        uVar8 = (**(code **)(local_120 + 0x18))(&local_120);
        puVar9 = operator_new__((ulong)uVar8 << 2);
        puVar6 = local_58;
        bVar1 = local_58 != (undefined4 *)0x0;
        local_58 = puVar9;
        if (bVar1) {
          operator_delete__(puVar6);
        }
        if (uVar8 != 0) {
          uVar11 = 0;
          do {
            uVar13 = (**(code **)(local_120 + 0x20))(&local_120,uVar11 & 0xffffffff);
            local_58[uVar11] = uVar13;
            uVar11 = uVar11 + 1;
          } while (uVar8 != uVar11);
        }
      }
      goto LAB_004dbc3c;
    }
  }
  else {
                    /* try { // try from 004dbbac to 005dbbb7 has its CatchHandler @ 004dbb4c */
    local_58[2] = 0x41200000;
LAB_004dbc2c:
    local_58[3] = 0x41200000;
  }
  *local_58 = 0x41b80000;
LAB_004dbc3c:
  local_58[1] = 0x3e99999a;
  SparkParticleEmitter::Update((SparkParticleEmitter *)&local_120,1.0);
  local_120 = PTR_vtable_007e5838 + 0x10;
  if (local_58 != (undefined4 *)0x0) {
    operator_delete__(local_58);
  }
  if (local_100 != (void *)0x0) {
    operator_delete(local_100);
  }
  plVar2 = local_110;
  if ((local_110 != (long *)0x0) &&
     (lVar10 = local_110[1], local_110[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_110 + 0x10))(local_110);
    lVar10 = plVar2[2];
    plVar2[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


