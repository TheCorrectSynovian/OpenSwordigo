/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1e84
 * Function: Caver::Proto::Quest::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::default_instance() */

long Caver::Proto::Quest::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e5918;
  lVar2 = *(long *)PTR_default_instance__007e5918;
  if (lVar2 == 0) {
    protobuf_AddDesc_GameData_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


