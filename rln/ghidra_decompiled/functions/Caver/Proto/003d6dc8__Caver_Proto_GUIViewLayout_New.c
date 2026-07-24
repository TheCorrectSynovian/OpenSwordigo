/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6dc8
 * Function: Caver::Proto::GUIViewLayout::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::New() const */

void Caver::Proto::GUIViewLayout::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x60);
  plVar2[2] = (long)PTR__default_identifier__007e4ab0;
  plVar2[3] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 5) = 4;
  puVar1 = PTR_vtable_007e5978;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[10] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0xb) = 0;
  return;
}


