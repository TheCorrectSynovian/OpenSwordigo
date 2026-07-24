/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402774
 * Function: Caver::Proto::SpriteComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::SharedCtor() */

void __thiscall Caver::Proto::SpriteComponent::SharedCtor(SpriteComponent *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_texture_name__007e5d90;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


