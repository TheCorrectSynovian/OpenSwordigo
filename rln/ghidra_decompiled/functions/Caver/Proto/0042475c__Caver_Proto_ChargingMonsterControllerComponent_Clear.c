/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042475c
 * Function: Caver::Proto::ChargingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::Clear(ChargingMonsterControllerComponent *this)

{
  if (this[0x20] != (ChargingMonsterControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


