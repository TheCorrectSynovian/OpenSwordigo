/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033aad0
 * Function: Caver::SpawnPointComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SpawnPointComponent * this, SpawnPointComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::InitWithComponent(Caver::SpawnPointComponent const*) */

void __thiscall
Caver::SpawnPointComponent::InitWithComponent
          (SpawnPointComponent *this,SpawnPointComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = uVar1;
  return;
}


