/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392dec
 * Function: Caver::AttackComponent::Clone
 * Signature: undefined __thiscall Clone(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::Clone() const */

AttackComponent * __thiscall Caver::AttackComponent::Clone(AttackComponent *this)

{
  AttackComponent *this_00;
  
  this_00 = operator_new(0x138);
  AttackComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


