/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003da6ec
 * Function: Caver::Proto::EditorViewState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::New() const */

void Caver::Proto::EditorViewState::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x80);
  plVar3[2] = (long)PTR__default_file_path__007e4ba8;
  plVar3[3] = (long)(plVar3 + 6);
  puVar2 = PTR__default_inspected_object_identifier__007e7f88;
  *(undefined4 *)(plVar3 + 5) = 4;
  *(undefined4 *)(plVar3 + 0xc) = 1;
  puVar1 = PTR_vtable_007e48d8;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  puVar1 = PTR__default_inspected_template_identifier__007e4d40;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  *(undefined4 *)(plVar3 + 0xf) = 0;
  plVar3[0xb] = (long)puVar1;
  plVar3[10] = (long)puVar2;
  return;
}


