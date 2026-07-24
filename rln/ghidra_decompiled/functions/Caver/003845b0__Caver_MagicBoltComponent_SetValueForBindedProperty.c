/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003845b0
 * Function: Caver::MagicBoltComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MagicBoltComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::MagicBoltComponent::SetValueForBindedProperty
          (MagicBoltComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0x68) {
    *(undefined4 *)(this + 0x118) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 0x67) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0x110) = uStack_30;
    *(undefined8 *)(this + 0x108) = local_38;
  }
  else {
    SpellComponent::SetValueForBindedProperty((SpellComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


