/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398b78
 * Function: Caver::LeapingMonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(LeapingMonsterControllerComponent * this, LeapingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LeapingMonsterControllerComponent::InitWithComponent(Caver::LeapingMonsterControllerComponent
   const*) */

void __thiscall
Caver::LeapingMonsterControllerComponent::InitWithComponent
          (LeapingMonsterControllerComponent *this,LeapingMonsterControllerComponent *param_1)

{
  MonsterControllerComponent::InitWithComponent
            ((MonsterControllerComponent *)this,(MonsterControllerComponent *)param_1);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}


