/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004043b4
 * Function: Caver::Proto::KeyframeAnimationComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::New() const */

void Caver::Proto::KeyframeAnimationComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x28);
  puVar2 = PTR_vtable_007e73c8;
  plVar3[1] = 0;
  puVar1 = PTR__default_name__007e5890;
  *(undefined2 *)(plVar3 + 3) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)puVar1;
  *(undefined8 *)((long)plVar3 + 0x1c) = 0;
  return;
}


