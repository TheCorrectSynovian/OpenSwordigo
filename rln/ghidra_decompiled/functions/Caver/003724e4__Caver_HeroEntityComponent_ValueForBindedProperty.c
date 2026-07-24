/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003724e4
 * Function: Caver::HeroEntityComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(HeroEntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::HeroEntityComponent::ValueForBindedProperty(HeroEntityComponent *this,int param_1)

{
  if (param_1 == 100) {
    BindingValue::ValueWithProgram((BindingValue *)(this + 0x150),(Program *)0x64);
    return;
  }
  EntityComponent::ValueForBindedProperty((EntityComponent *)this,param_1);
  return;
}


