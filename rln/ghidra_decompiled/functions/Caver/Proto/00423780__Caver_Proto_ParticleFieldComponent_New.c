/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423780
 * Function: Caver::Proto::ParticleFieldComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::New() const */

void Caver::Proto::ParticleFieldComponent::New(void)

{
  long *plVar1;
  
  plVar1 = operator_new(0x10);
  *plVar1 = (long)(PTR_vtable_007e6b68 + 0x10);
  plVar1[1] = 0;
  return;
}


