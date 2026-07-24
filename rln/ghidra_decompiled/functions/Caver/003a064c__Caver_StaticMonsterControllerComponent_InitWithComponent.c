/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a064c
 * Function: Caver::StaticMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(StaticMonsterControllerComponent * this, StaticMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StaticMonsterControllerComponent::InitWithComponent(Caver::StaticMonsterControllerComponent
   const*) */

void __thiscall
Caver::StaticMonsterControllerComponent::InitWithComponent
          (StaticMonsterControllerComponent *this,StaticMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  return;
}


