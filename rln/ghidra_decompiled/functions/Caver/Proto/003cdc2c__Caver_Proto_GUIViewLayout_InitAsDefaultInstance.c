/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdc2c
 * Function: Caver::Proto::GUIViewLayout::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::InitAsDefaultInstance() */

void __thiscall Caver::Proto::GUIViewLayout::InitAsDefaultInstance(GUIViewLayout *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e7750;
  lVar2 = *(long *)PTR_default_instance__007e7750;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x50) = lVar2;
  return;
}


