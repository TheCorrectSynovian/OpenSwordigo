/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f4c4
 * Function: Caver::SpriteComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::Create() */

SpriteComponent * Caver::SpriteComponent::Create(void)

{
  SpriteComponent *this;
  
  this = operator_new(0xa0);
  SpriteComponent(this);
  return this;
}


