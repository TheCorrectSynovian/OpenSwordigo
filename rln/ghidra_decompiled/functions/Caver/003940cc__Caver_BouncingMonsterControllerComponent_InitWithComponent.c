/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003940cc
 * Function: Caver::BouncingMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(BouncingMonsterControllerComponent * this, BouncingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::InitWithComponent(Caver::BouncingMonsterControllerComponent
   const*) */

void __thiscall
Caver::BouncingMonsterControllerComponent::InitWithComponent
          (BouncingMonsterControllerComponent *this,BouncingMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
  return;
}


