/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040cde4
 * Function: Caver::Proto::DamageComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::New() const */

void Caver::Proto::DamageComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x30);
  puVar1 = PTR_vtable_007e7a18;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined8 *)((long)plVar2 + 0x15) = 0;
  plVar2[4] = 0;
  *(undefined2 *)(plVar2 + 5) = 0x100;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar2 + 0x2c) = 0;
  return;
}


