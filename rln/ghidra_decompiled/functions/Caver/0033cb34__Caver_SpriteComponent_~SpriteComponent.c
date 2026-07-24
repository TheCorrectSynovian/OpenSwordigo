/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cb34
 * Function: Caver::SpriteComponent::~SpriteComponent
 * Signature: undefined __thiscall ~SpriteComponent(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::~SpriteComponent() */

void __thiscall Caver::SpriteComponent::~SpriteComponent(SpriteComponent *this)

{
  ~SpriteComponent(this);
  operator_delete(this);
  return;
}


