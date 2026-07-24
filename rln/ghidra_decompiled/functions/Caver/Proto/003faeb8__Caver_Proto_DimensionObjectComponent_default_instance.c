/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faeb8
 * Function: Caver::Proto::DimensionObjectComponent::default_instance
 * Signature: undefined __cdecl default_instance(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::default_instance() */

long Caver::Proto::DimensionObjectComponent::default_instance(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_default_instance__007e69e0;
  lVar2 = *(long *)PTR_default_instance__007e69e0;
  if (lVar2 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar2 = *(long *)puVar1;
  }
  return lVar2;
}


