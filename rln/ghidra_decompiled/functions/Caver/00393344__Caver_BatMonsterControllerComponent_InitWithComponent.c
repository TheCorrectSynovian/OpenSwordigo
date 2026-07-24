/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393344
 * Function: Caver::BatMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(BatMonsterControllerComponent * this, BatMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::InitWithComponent(Caver::BatMonsterControllerComponent
   const*) */

void __thiscall
Caver::BatMonsterControllerComponent::InitWithComponent
          (BatMonsterControllerComponent *this,BatMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


