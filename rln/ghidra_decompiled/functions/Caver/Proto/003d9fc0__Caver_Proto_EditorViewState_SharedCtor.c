/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9fc0
 * Function: Caver::Proto::EditorViewState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::SharedCtor() */

void __thiscall Caver::Proto::EditorViewState::SharedCtor(EditorViewState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_inspected_object_identifier__007e7f88;
  puVar2 = PTR__default_inspected_template_identifier__007e4d40;
  puVar1 = PTR__default_file_path__007e4ba8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined **)(this + 0x58) = puVar2;
  *(undefined **)(this + 0x50) = puVar3;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


