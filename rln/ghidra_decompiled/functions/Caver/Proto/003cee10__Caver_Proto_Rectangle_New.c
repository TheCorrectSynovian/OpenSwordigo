/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cee10
 * Function: Caver::Proto::Rectangle::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::New() const */

void Caver::Proto::Rectangle::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4bb8;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


