/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d9f24
 * Function: Caver::Proto::EditorViewState::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::InitAsDefaultInstance() */

void __thiscall Caver::Proto::EditorViewState::InitAsDefaultInstance(EditorViewState *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x70) = uVar1;
  return;
}


