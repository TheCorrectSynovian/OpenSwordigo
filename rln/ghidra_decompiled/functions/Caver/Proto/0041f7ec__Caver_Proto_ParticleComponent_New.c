/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f7ec
 * Function: Caver::Proto::ParticleComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::New() const */

void Caver::Proto::ParticleComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5a48;
                    /* try { // try from 0041f7fc to 0051f7ff has its CatchHandler @ 0041f858 */
                    /* try { // try from 0041f800 to 0051f86b has its CatchHandler @ 0041f7e0 */
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_texture_name__007e6170;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[2] = (long)puVar2;
  plVar3[3] = 0;
  return;
}


