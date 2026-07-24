/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9f60
 * Function: Caver::Proto::EditorViewState::EditorViewState
 * Signature: undefined __thiscall EditorViewState(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::EditorViewState() */

void __thiscall Caver::Proto::EditorViewState::EditorViewState(EditorViewState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined **)(this + 0x10) = PTR__default_file_path__007e4ba8;
  *(EditorViewState **)(this + 0x18) = this + 0x30;
  puVar2 = PTR__default_inspected_object_identifier__007e7f88;
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined4 *)(this + 0x60) = 1;
  puVar1 = PTR_vtable_007e48d8;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  puVar1 = PTR__default_inspected_template_identifier__007e4d40;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined **)(this + 0x58) = puVar1;
  *(undefined **)(this + 0x50) = puVar2;
  return;
}


