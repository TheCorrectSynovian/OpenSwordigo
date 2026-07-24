/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c058
 * Function: Caver::ObjectModifierComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ObjectModifierComponent * this, ObjectModifierComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectModifierComponent::InitWithComponent(Caver::ObjectModifierComponent const*) */

void __thiscall
Caver::ObjectModifierComponent::InitWithComponent
          (ObjectModifierComponent *this,ObjectModifierComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


