/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f97b4
 * Function: Caver::Proto::ObjectTemplate::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ObjectTemplate::InitAsDefaultInstance(ObjectTemplate *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e7da8;
  lVar2 = *(long *)PTR_default_instance__007e7da8;
  if (lVar2 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x10) = lVar2;
  return;
}


