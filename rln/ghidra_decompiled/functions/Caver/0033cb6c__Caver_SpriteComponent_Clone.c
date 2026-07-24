/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cb6c
 * Function: Caver::SpriteComponent::Clone
 * Signature: undefined __thiscall Clone(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::Clone() const */

SpriteComponent * __thiscall Caver::SpriteComponent::Clone(SpriteComponent *this)

{
  SpriteComponent *this_00;
  
  this_00 = operator_new(0xa0);
  SpriteComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  FUN_0066a6a8(this_00 + 0x70,this + 0x70);
  this_00[0x98] = this[0x98];
  return this_00;
}


