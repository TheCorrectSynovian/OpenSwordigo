/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422b24
 * Function: Caver::Proto::ParticleObjectComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::New() const */

void Caver::Proto::ParticleObjectComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e6080;
  *(undefined4 *)(plVar2 + 2) = 0;
                    /* try { // try from 00422b44 to 00522b6b has its CatchHandler @ 00422b74 */
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


