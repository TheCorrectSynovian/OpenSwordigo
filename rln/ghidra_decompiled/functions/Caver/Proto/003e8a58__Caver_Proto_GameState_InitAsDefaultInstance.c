/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8a58
 * Function: Caver::Proto::GameState::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::InitAsDefaultInstance() */

void __thiscall Caver::Proto::GameState::InitAsDefaultInstance(GameState *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e6b78;
  lVar2 = *(long *)PTR_default_instance__007e6b78;
  if (lVar2 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x10) = lVar2;
  puVar1 = PTR_default_instance__007e4820;
  lVar2 = *(long *)PTR_default_instance__007e4820;
  if (lVar2 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0xb8) = lVar2;
  return;
}


