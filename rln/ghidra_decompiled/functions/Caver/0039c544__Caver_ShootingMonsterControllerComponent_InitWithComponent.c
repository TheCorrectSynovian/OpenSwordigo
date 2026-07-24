/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c544
 * Function: Caver::ShootingMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ShootingMonsterControllerComponent * this, ShootingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShootingMonsterControllerComponent::InitWithComponent(Caver::ShootingMonsterControllerComponent
   const*) */

void __thiscall
Caver::ShootingMonsterControllerComponent::InitWithComponent
          (ShootingMonsterControllerComponent *this,ShootingMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


