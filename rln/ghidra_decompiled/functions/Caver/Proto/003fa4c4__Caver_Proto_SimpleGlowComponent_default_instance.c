/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa4c4
 * Function: Caver::Proto::SimpleGlowComponent::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::default_instance() */

long Caver::Proto::SimpleGlowComponent::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e53a8;
  lVar2 = *(long *)PTR_default_instance__007e53a8;
  if (lVar2 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


