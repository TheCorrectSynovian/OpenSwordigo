/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc908
 * Function: Caver::WeaponTrailComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(WeaponTrailComponent * this, WeaponTrailComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::InitWithComponent(Caver::WeaponTrailComponent const*) */

void __thiscall
Caver::WeaponTrailComponent::InitWithComponent
          (WeaponTrailComponent *this,WeaponTrailComponent *param_1)

{
  long lVar1;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  float fVar2;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  Color::FromFloatColor((Color *)(param_1 + 0xb0),extraout_x1);
  fVar2 = (float)NEON_ucvtf((uint)local_58);
  fStack_4c = (float)NEON_ucvtf((uint)local_57);
  local_48 = (float)NEON_ucvtf((uint)local_56);
  fStack_44 = (float)NEON_ucvtf((uint)local_55);
  fStack_4c = fStack_4c / DAT_00683ffc;
  local_48 = local_48 / DAT_00683ffc;
  fStack_44 = fStack_44 / DAT_00683ffc;
  local_50 = (fVar2 / DAT_00683ffc) * *(float *)(this + 0xc0);
  *(float *)(this + 0xb0) = fVar2 / DAT_00683ffc;
  *(float *)(this + 0xb4) = fStack_4c;
  fStack_4c = fStack_4c * *(float *)(this + 0xc4);
  *(float *)(this + 0xb8) = local_48;
  *(float *)(this + 0xbc) = fStack_44;
  local_48 = local_48 * *(float *)(this + 200);
  fStack_44 = fStack_44 * *(float *)(this + 0xcc);
  Color::FromFloatColor((Color *)&local_50,extraout_x1_00);
  *(undefined4 *)(this + 0x78) = local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


