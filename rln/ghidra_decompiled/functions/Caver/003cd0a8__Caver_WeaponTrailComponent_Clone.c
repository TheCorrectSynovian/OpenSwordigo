/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cd0a8
 * Function: Caver::WeaponTrailComponent::Clone
 * Signature: undefined __thiscall Clone(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::Clone() const */

WeaponTrailComponent * __thiscall Caver::WeaponTrailComponent::Clone(WeaponTrailComponent *this)

{
  long lVar1;
  WeaponTrailComponent *this_00;
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
  this_00 = operator_new(0xd0);
  WeaponTrailComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  Color::FromFloatColor((Color *)(this + 0xb0),extraout_x1);
  fVar2 = (float)NEON_ucvtf((uint)local_58);
  fStack_4c = (float)NEON_ucvtf((uint)local_57);
  local_48 = (float)NEON_ucvtf((uint)local_56);
  fStack_44 = (float)NEON_ucvtf((uint)local_55);
  fStack_4c = fStack_4c / DAT_00683ffc;
  local_48 = local_48 / DAT_00683ffc;
  fStack_44 = fStack_44 / DAT_00683ffc;
  local_50 = (fVar2 / DAT_00683ffc) * *(float *)(this_00 + 0xc0);
  *(float *)(this_00 + 0xb0) = fVar2 / DAT_00683ffc;
  *(float *)(this_00 + 0xb4) = fStack_4c;
  fStack_4c = fStack_4c * *(float *)(this_00 + 0xc4);
  *(float *)(this_00 + 0xb8) = local_48;
  *(float *)(this_00 + 0xbc) = fStack_44;
  local_48 = local_48 * *(float *)(this_00 + 200);
  fStack_44 = fStack_44 * *(float *)(this_00 + 0xcc);
  Color::FromFloatColor((Color *)&local_50,extraout_x1_00);
  *(undefined4 *)(this_00 + 0x78) = local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


