/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdbd4
 * Function: Caver::Proto::Font_Glyph::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Font_Glyph * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Font_Glyph::InitAsDefaultInstance(Font_Glyph *this)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e5520;
  lVar2 = *(long *)PTR_default_instance__007e5520;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
    *(long *)(this + 0x10) = lVar2;
    if (lVar2 == 0) {
      protobuf_AddDesc_Common_2eproto();
      lVar2 = *(long *)puVar1;
    }
  }
  else {
    *(long *)(this + 0x10) = lVar2;
  }
  *(long *)(this + 0x20) = lVar2;
  return;
}


