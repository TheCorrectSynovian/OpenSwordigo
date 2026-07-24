/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039d530
 * Function: Caver::ShootingMonsterControllerComponent::Clone
 * Signature: undefined __thiscall Clone(ShootingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::Clone() const */

ShootingMonsterControllerComponent * __thiscall
Caver::ShootingMonsterControllerComponent::Clone(ShootingMonsterControllerComponent *this)

{
  ShootingMonsterControllerComponent *this_00;
  
  this_00 = operator_new(0x128);
  ShootingMonsterControllerComponent(this_00);
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this_00,(MonsterControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  return this_00;
}


