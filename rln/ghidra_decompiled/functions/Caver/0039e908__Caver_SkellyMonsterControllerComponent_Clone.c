/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039e908
 * Function: Caver::SkellyMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::Clone() const */

SkellyMonsterControllerComponent * __thiscall
Caver::SkellyMonsterControllerComponent::Clone(SkellyMonsterControllerComponent *this)

{
  SkellyMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x128);
  SkellyMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  return this_00;
}


