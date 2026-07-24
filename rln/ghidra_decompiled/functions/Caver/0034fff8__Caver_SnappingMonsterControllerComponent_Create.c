/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fff8
 * Function: Caver::SnappingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::Create() */

SnappingMonsterControllerComponent * Caver::SnappingMonsterControllerComponent::Create(void)

{
  SnappingMonsterControllerComponent *this;
  
  this = operator_new(0x150);
  SnappingMonsterControllerComponent(this);
  return this;
}


