/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424528
 * Function: Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent
 * Signature: undefined __thiscall ChargingMonsterControllerComponent(ChargingMonsterControllerComponent * this, ChargingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(Caver::Proto::ChargingMonsterControllerComponent
   const&) */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent
          (ChargingMonsterControllerComponent *this,ChargingMonsterControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7130;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


