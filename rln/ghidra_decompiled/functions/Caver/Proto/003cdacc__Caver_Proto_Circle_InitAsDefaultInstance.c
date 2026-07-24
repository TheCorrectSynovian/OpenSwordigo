/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdacc
 * Function: Caver::Proto::Circle::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Circle::InitAsDefaultInstance(Circle *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e6ee8;
  lVar2 = *(long *)PTR_default_instance__007e6ee8;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x10) = lVar2;
  return;
}


