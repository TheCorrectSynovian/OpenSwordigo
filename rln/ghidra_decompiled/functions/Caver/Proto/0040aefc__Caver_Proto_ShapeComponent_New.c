/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040aefc
 * Function: Caver::Proto::ShapeComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::New() const */

void Caver::Proto::ShapeComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x30);
  puVar1 = PTR_vtable_007e6c08;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 5) = 0;
  return;
}


