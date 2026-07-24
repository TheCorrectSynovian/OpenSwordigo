/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385cdc
 * Function: Caver::MagicBombComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MagicBombComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::MagicBombComponent::SetValueForBindedProperty
          (MagicBombComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 100) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xd8) = uStack_30;
    *(undefined8 *)(this + 0xd0) = local_38;
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


