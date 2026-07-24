/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399ecc
 * Function: Caver::MonsterDeathControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MonsterDeathControllerComponent * this, MonsterDeathControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::InitWithComponent(Caver::MonsterDeathControllerComponent
   const*) */

void __thiscall
Caver::MonsterDeathControllerComponent::InitWithComponent
          (MonsterDeathControllerComponent *this,MonsterDeathControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


