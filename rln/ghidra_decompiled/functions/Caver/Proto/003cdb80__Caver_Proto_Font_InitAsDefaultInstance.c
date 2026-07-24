/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdb80
 * Function: Caver::Proto::Font::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Font::InitAsDefaultInstance(Font *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e7970;
  lVar2 = *(long *)PTR_default_instance__007e7970;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x18) = lVar2;
  puVar1 = PTR_default_instance__007e5520;
  lVar2 = *(long *)PTR_default_instance__007e5520;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x68) = lVar2;
  return;
}


