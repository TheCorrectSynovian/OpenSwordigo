/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cce48
 * Function: Caver::WeaponTrailComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(WeaponTrailComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::WeaponTrailComponent::SetValueForBindedProperty
          (WeaponTrailComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  float fVar2;
  Color aCStack_58 [16];
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    BindingValue::FloatColorValue();
    Color::FromFloatColor(aCStack_58,extraout_x1);
    fVar2 = (float)NEON_ucvtf((uint)local_48);
    fStack_3c = (float)NEON_ucvtf((uint)local_47);
    local_38 = (float)NEON_ucvtf((uint)local_46);
    fStack_34 = (float)NEON_ucvtf((uint)local_45);
    fStack_3c = fStack_3c / DAT_00683ffc;
    local_38 = local_38 / DAT_00683ffc;
    fStack_34 = fStack_34 / DAT_00683ffc;
    local_40 = (fVar2 / DAT_00683ffc) * *(float *)(this + 0xc0);
    *(float *)(this + 0xb0) = fVar2 / DAT_00683ffc;
    *(float *)(this + 0xb4) = fStack_3c;
    fStack_3c = fStack_3c * *(float *)(this + 0xc4);
    *(float *)(this + 0xb8) = local_38;
    *(float *)(this + 0xbc) = fStack_34;
    local_38 = local_38 * *(float *)(this + 200);
    fStack_34 = fStack_34 * *(float *)(this + 0xcc);
    Color::FromFloatColor((Color *)&local_40,extraout_x1_00);
    *(undefined4 *)(this + 0x78) = local_2c;
  }
  else {
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


