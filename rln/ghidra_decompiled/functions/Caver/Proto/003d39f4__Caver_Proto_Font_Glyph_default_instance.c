/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d39f4
 * Function: Caver::Proto::Font_Glyph::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::default_instance() */

long Caver::Proto::Font_Glyph::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e5b90;
  lVar2 = *(long *)PTR_default_instance__007e5b90;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


