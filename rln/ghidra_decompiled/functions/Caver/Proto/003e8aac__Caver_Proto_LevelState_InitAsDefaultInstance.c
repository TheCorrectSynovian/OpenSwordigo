/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8aac
 * Function: Caver::Proto::LevelState::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::InitAsDefaultInstance() */

void __thiscall Caver::Proto::LevelState::InitAsDefaultInstance(LevelState *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e4820;
  lVar2 = *(long *)PTR_default_instance__007e4820;
  if (lVar2 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x20) = lVar2;
  return;
}


