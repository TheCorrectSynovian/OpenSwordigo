/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040274c
 * Function: Caver::Proto::SpriteComponent::SpriteComponent
 * Signature: undefined __thiscall SpriteComponent(SpriteComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::SpriteComponent() */

void __thiscall Caver::Proto::SpriteComponent::SpriteComponent(SpriteComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e6660;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_texture_name__007e5d90;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


