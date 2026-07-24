/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424c68
 * Function: Caver::Proto::ChargingMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(ChargingMonsterControllerComponent * this, ChargingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::Swap(Caver::Proto::ChargingMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::Swap
          (ChargingMonsterControllerComponent *this,ChargingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00424c68 to 00524ca3 has its CatchHandler @ 00425654 */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x14);
    *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x1c);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


