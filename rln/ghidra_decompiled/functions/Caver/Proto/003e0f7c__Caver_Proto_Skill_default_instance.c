/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e0f7c
 * Function: Caver::Proto::Skill::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::default_instance() */

long Caver::Proto::Skill::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e6480;
  lVar2 = *(long *)PTR_default_instance__007e6480;
  if (lVar2 == 0) {
    protobuf_AddDesc_GameData_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


