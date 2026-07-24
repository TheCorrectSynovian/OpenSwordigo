/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d48c0
 * Function: Caver::Proto::Font::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::New() const */

void Caver::Proto::Font::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x78);
  puVar2 = PTR_vtable_007e6808;
  plVar3[4] = (long)(plVar3 + 7);
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined4 *)(plVar3 + 6) = 4;
  plVar3[0xb] = (long)PTR__default_kerning__007e5500;
  puVar1 = PTR__default_name__007e6280;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  plVar3[0xd] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)puVar1;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 0xe) = 0;
  return;
}


