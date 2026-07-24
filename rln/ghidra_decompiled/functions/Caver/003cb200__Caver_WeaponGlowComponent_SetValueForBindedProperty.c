/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb200
 * Function: Caver::WeaponGlowComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(WeaponGlowComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::WeaponGlowComponent::SetValueForBindedProperty
          (WeaponGlowComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  long lVar2;
  FloatColor *extraout_x1;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0x67) {
    uVar1 = **(undefined4 **)(param_2 + 8);
    this[0x70] = (WeaponGlowComponent)0x1;
    this[0xa0] = (WeaponGlowComponent)0x1;
    *(undefined4 *)(this + 0xf4) = uVar1;
  }
  else if (param_1 == 0x66) {
    BindingValue::FloatColorValue();
    Color::FromFloatColor((Color *)&local_38,extraout_x1);
    *(undefined4 *)(this + 0xb4) = local_3c;
  }
  else if (param_1 == 0x65) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xac) = uStack_30;
    *(undefined8 *)(this + 0xa4) = local_38;
  }
  else {
    GlowComponent::SetValueForBindedProperty((GlowComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


