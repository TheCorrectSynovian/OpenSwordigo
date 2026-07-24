/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdb0c
 * Function: Caver::Proto::Texture::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Texture::InitAsDefaultInstance(Texture *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e6af0;
  lVar2 = *(long *)PTR_default_instance__007e6af0;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  *(long *)(this + 0x60) = lVar2;
  return;
}


