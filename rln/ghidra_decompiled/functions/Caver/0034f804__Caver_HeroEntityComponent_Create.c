/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f804
 * Function: Caver::HeroEntityComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::Create() */

HeroEntityComponent * Caver::HeroEntityComponent::Create(void)

{
  HeroEntityComponent *this;
  
  this = operator_new(0x1d0);
  HeroEntityComponent(this);
  return this;
}


