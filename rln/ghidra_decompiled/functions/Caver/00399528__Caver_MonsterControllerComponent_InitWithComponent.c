/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399528
 * Function: Caver::MonsterControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MonsterControllerComponent * this, MonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*) */

void __thiscall
Caver::MonsterControllerComponent::InitWithComponent
          (MonsterControllerComponent *this,MonsterControllerComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  return;
}


