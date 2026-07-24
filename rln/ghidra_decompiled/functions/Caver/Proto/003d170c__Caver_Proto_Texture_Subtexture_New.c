/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d170c
 * Function: Caver::Proto::Texture_Subtexture::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::New() const */

void Caver::Proto::Texture_Subtexture::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x28);
  puVar1 = PTR_vtable_007e4860;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_name__007e57e8;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[2] = (long)puVar2;
  plVar3[3] = 0;
  plVar3[4] = 0x3f800000;
  return;
}


