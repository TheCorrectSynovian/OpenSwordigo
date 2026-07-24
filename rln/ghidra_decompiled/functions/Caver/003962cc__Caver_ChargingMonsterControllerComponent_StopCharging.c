/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003962cc
 * Function: Caver::ChargingMonsterControllerComponent::StopCharging
 * Signature: undefined __thiscall StopCharging(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChargingMonsterControllerComponent::StopCharging() */

void __thiscall
Caver::ChargingMonsterControllerComponent::StopCharging(ChargingMonsterControllerComponent *this)

{
  if (this[0x130] != (ChargingMonsterControllerComponent)0x0) {
    *(undefined2 *)(*(long *)(this + 0x118) + 0x2c) = 0x101;
    *(undefined2 *)(this + 0x130) = 0;
    *(undefined4 *)(this + 0x134) = 0;
  }
  return;
}


