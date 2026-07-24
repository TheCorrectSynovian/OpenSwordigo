/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3510
 * Function: Caver::GlowComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(GlowComponent * this, GlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*) */

void __thiscall Caver::GlowComponent::InitWithComponent(GlowComponent *this,GlowComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


