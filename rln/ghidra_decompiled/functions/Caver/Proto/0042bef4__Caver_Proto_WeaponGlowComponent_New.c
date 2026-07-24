/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bef4
 * Function: Caver::Proto::WeaponGlowComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::New() const */

void Caver::Proto::WeaponGlowComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e6f60;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


