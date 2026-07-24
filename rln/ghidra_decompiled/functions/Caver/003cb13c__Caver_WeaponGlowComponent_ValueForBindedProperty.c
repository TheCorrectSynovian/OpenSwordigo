/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb13c
 * Function: Caver::WeaponGlowComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(WeaponGlowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::WeaponGlowComponent::ValueForBindedProperty(WeaponGlowComponent *this,int param_1)

{
  long lVar1;
  WeaponGlowComponent *this_00;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0x67) {
    BindingValue::ValueWithFloat((BindingValue *)this,*(float *)(this + 0xf4));
  }
  else {
    if (param_1 == 0x66) {
      local_38 = (float)NEON_ucvtf((uint)(byte)this[0xb4]);
      fStack_34 = (float)NEON_ucvtf((uint)(byte)this[0xb5]);
      local_30 = (float)NEON_ucvtf((uint)(byte)this[0xb6]);
      fStack_2c = (float)NEON_ucvtf((uint)(byte)this[0xb7]);
      local_38 = local_38 / DAT_00683ffc;
      fStack_34 = fStack_34 / DAT_00683ffc;
      local_30 = local_30 / DAT_00683ffc;
      fStack_2c = fStack_2c / DAT_00683ffc;
      this_00 = (WeaponGlowComponent *)&local_38;
    }
    else {
      if (param_1 != 0x65) {
        GlowComponent::ValueForBindedProperty((int)this);
        goto LAB_003cb1d4;
      }
      this_00 = this + 0xa4;
    }
    BindingValue::ValueWithFloatColor((BindingValue *)this_00,(FloatColor *)(ulong)(uint)param_1);
  }
LAB_003cb1d4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


