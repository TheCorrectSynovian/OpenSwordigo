/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037abdc
 * Function: Caver::ManaComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ManaComponent * this, ManaComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::InitWithComponent(Caver::ManaComponent const*) */

void __thiscall Caver::ManaComponent::InitWithComponent(ManaComponent *this,ManaComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


