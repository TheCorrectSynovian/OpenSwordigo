/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6298
 * Function: Caver::Proto::GUIMargins::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::default_instance() */

long Caver::Proto::GUIMargins::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e7750;
  lVar2 = *(long *)PTR_default_instance__007e7750;
  if (lVar2 == 0) {
    protobuf_AddDesc_Common_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


