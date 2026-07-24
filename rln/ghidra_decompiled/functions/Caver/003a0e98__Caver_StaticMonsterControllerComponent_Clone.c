/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0e98
 * Function: Caver::StaticMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(StaticMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::Clone() const */

StaticMonsterControllerComponent * __thiscall
Caver::StaticMonsterControllerComponent::Clone(StaticMonsterControllerComponent *this)

{
  StaticMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x120);
  StaticMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0x118) = *(undefined4 *)(this + 0x118);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this_00 + 0x108) = *(undefined4 *)(this + 0x108);
  return this_00;
}


