/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8a08
 * Function: Caver::Proto::PlayerProfile::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::InitAsDefaultInstance() */

void __thiscall Caver::Proto::PlayerProfile::InitAsDefaultInstance(PlayerProfile *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = DateTime::default_instance();
  *(undefined8 *)(this + 0x18) = uVar2;
  puVar1 = PTR_default_instance__007e5ff0;
  lVar3 = *(long *)PTR_default_instance__007e5ff0;
  if (lVar3 == 0) {
    protobuf_AddDesc_GameState_2eproto();
    lVar3 = *(long *)puVar1;
  }
  *(long *)(this + 0x38) = lVar3;
  return;
}


