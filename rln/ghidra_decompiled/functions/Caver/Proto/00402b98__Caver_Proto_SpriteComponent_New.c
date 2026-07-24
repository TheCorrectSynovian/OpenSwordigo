/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402b98
 * Function: Caver::Proto::SpriteComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::New() const */

void Caver::Proto::SpriteComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e6660;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar1 = PTR__default_texture_name__007e5d90;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[2] = (long)puVar1;
  return;
}


