/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405524
 * Function: Caver::Proto::ModelTransformControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::New() const */

void Caver::Proto::ModelTransformControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x30);
  puVar1 = PTR_vtable_007e5c10;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 5) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


