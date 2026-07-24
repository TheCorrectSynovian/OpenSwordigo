/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382af0
 * Function: Caver::FireBreathComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(FireBreathComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::FireBreathComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::FireBreathComponent::SetValueForBindedProperty
          (FireBreathComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0x66) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xe8) = uStack_30;
    *(undefined8 *)(this + 0xe0) = local_38;
  }
  else {
    SpellComponent::SetValueForBindedProperty((SpellComponent *)(this + -0x10),param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


