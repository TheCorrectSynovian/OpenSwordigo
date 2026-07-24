/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af0b8
 * Function: Caver::ShatterComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ShatterComponent * this, ShatterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShatterComponent::InitWithComponent(Caver::ShatterComponent const*) */

void __thiscall
Caver::ShatterComponent::InitWithComponent(ShatterComponent *this,ShatterComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


