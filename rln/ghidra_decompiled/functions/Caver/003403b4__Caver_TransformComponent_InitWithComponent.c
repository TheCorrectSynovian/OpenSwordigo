/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003403b4
 * Function: Caver::TransformComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(TransformComponent * this, TransformComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::InitWithComponent(Caver::TransformComponent const*) */

void __thiscall
Caver::TransformComponent::InitWithComponent(TransformComponent *this,TransformComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


