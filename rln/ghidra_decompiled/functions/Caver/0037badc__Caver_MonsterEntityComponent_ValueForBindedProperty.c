/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037badc
 * Function: Caver::MonsterEntityComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MonsterEntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MonsterEntityComponent::ValueForBindedProperty(MonsterEntityComponent *this,int param_1)

{
  switch(param_1) {
  case 100:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0x130),(Program *)(ulong)(uint)param_1);
    return;
  case 0x65:
    BindingValue::ValueWithProgram((BindingValue *)(this + 0x158),(Program *)(ulong)(uint)param_1);
    return;
  case 0x66:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x198],SUB41(param_1,0));
    return;
  case 0x67:
    BindingValue::ValueWithBool((BindingValue *)(ulong)(byte)this[0x19a],SUB41(param_1,0));
    return;
  default:
    EntityComponent::ValueForBindedProperty((EntityComponent *)this,param_1);
    return;
  }
}


