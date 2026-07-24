/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393a24
 * Function: Caver::BatMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(BatMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::Clone() const */

BatMonsterControllerComponent * __thiscall
Caver::BatMonsterControllerComponent::Clone(BatMonsterControllerComponent *this)

{
  BatMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x108);
  BatMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  return this_00;
}


