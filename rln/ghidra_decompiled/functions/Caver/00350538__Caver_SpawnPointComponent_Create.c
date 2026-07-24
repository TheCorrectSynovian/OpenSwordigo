/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350538
 * Function: Caver::SpawnPointComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::Create() */

SpawnPointComponent * Caver::SpawnPointComponent::Create(void)

{
  SpawnPointComponent *this;
  
  this = operator_new(0x80);
  SpawnPointComponent(this);
  return this;
}


