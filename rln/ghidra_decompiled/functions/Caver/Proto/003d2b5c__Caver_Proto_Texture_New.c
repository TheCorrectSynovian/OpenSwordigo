/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2b5c
 * Function: Caver::Proto::Texture::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::New() const */

void Caver::Proto::Texture::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x70);
  plVar2[4] = (long)(plVar2 + 7);
  *(undefined4 *)(plVar2 + 6) = 4;
  plVar2[2] = (long)PTR__default_name__007e5bc0;
  *(undefined4 *)(plVar2 + 3) = 1;
  puVar1 = PTR_vtable_007e58d8;
  plVar2[5] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)(plVar2 + 0xb) = 0;
  plVar2[0xc] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0xd) = 0;
  return;
}


