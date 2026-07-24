/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039fee0
 * Function: Caver::SnappingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(SnappingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::Clone() const */

SnappingMonsterControllerComponent * __thiscall
Caver::SnappingMonsterControllerComponent::Clone(SnappingMonsterControllerComponent *this)

{
  SnappingMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x150);
  SnappingMonsterControllerComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


