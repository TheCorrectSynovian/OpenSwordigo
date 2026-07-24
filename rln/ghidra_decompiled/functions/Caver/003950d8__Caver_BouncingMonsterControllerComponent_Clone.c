/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003950d8
 * Function: Caver::BouncingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::Clone() const */

BouncingMonsterControllerComponent * __thiscall
Caver::BouncingMonsterControllerComponent::Clone(BouncingMonsterControllerComponent *this)

{
  BouncingMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x120);
  BouncingMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  *(undefined8 *)(this_00 + 0x108) = *(undefined8 *)(this + 0x108);
  return this_00;
}


