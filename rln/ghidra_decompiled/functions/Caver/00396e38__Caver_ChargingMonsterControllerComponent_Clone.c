/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00396e38
 * Function: Caver::ChargingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::Clone() const */

ChargingMonsterControllerComponent * __thiscall
Caver::ChargingMonsterControllerComponent::Clone(ChargingMonsterControllerComponent *this)

{
  ChargingMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x158);
  ChargingMonsterControllerComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


