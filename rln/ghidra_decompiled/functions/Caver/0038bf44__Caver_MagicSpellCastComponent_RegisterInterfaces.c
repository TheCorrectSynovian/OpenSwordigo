/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038bf44
 * Function: Caver::MagicSpellCastComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(MagicSpellCastComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::MagicSpellCastComponent::RegisterInterfaces
          (MagicSpellCastComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7878);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


