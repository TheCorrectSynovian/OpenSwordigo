/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039d9cc
 * Function: Caver::SkellyMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SkellyMonsterControllerComponent * this, SkellyMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::InitWithComponent(Caver::SkellyMonsterControllerComponent
   const*) */

void __thiscall
Caver::SkellyMonsterControllerComponent::InitWithComponent
          (SkellyMonsterControllerComponent *this,SkellyMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


