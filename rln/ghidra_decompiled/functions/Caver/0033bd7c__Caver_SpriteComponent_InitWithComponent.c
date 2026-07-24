/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033bd7c
 * Function: Caver::SpriteComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SpriteComponent * this, SpriteComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::InitWithComponent(Caver::SpriteComponent const*) */

void __thiscall
Caver::SpriteComponent::InitWithComponent(SpriteComponent *this,SpriteComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  this[0x98] = param_1[0x98];
  return;
}


