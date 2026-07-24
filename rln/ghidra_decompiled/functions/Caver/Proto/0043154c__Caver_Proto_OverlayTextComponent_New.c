/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043154c
 * Function: Caver::Proto::OverlayTextComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::New() const */

void Caver::Proto::OverlayTextComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x38);
  puVar3 = PTR_vtable_007e7bd8;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar2 = PTR__default_sprite_name__007e6978;
  puVar1 = PTR__default_text__007e5e10;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[2] = (long)puVar1;
  plVar4[3] = 0;
  plVar4[4] = (long)puVar2;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  return;
}


