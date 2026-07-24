/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00397214
 * Function: Caver::GenericMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(GenericMonsterControllerComponent * this, GenericMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::InitWithComponent(Caver::GenericMonsterControllerComponent
   const*) */

void __thiscall
Caver::GenericMonsterControllerComponent::InitWithComponent
          (GenericMonsterControllerComponent *this,GenericMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  return;
}


