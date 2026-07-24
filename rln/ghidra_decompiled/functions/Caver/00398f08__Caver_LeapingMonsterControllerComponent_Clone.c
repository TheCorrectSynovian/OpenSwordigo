/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398f08
 * Function: Caver::LeapingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(LeapingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::Clone() const */

LeapingMonsterControllerComponent * __thiscall
Caver::LeapingMonsterControllerComponent::Clone(LeapingMonsterControllerComponent *this)

{
  LeapingMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x118);
  LeapingMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  return this_00;
}


