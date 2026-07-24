/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003876d8
 * Function: Caver::MagicExplosionComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MagicExplosionComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicExplosionComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::MagicExplosionComponent::SetValueForBindedProperty
          (MagicExplosionComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 3) {
    *(undefined4 *)(this + 0xd4) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 2) {
    *(undefined4 *)(this + 0xd0) = **(undefined4 **)(param_2 + 8);
  }
  else if (param_1 == 1) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xa8) = uStack_30;
    *(undefined8 *)(this + 0xa0) = local_38;
  }
  else {
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


