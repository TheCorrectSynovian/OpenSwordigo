/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034ffb8
 * Function: Caver::ChargingMonsterControllerComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::Create() */

ChargingMonsterControllerComponent * Caver::ChargingMonsterControllerComponent::Create(void)

{
  ChargingMonsterControllerComponent *this;
  
  this = operator_new(0x158);
  ChargingMonsterControllerComponent(this);
  return this;
}


