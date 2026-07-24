/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398458
 * Function: Caver::GenericMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(GenericMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::Clone() const */

GenericMonsterControllerComponent * __thiscall
Caver::GenericMonsterControllerComponent::Clone(GenericMonsterControllerComponent *this)

{
  GenericMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x120);
  GenericMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  return this_00;
}


