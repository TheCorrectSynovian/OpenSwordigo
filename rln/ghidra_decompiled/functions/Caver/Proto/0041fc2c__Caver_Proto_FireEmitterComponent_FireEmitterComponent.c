/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fc2c
 * Function: Caver::Proto::FireEmitterComponent::FireEmitterComponent
 * Signature: undefined __thiscall FireEmitterComponent(FireEmitterComponent * this, FireEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent
   const&) */

void __thiscall
Caver::Proto::FireEmitterComponent::FireEmitterComponent
          (FireEmitterComponent *this,FireEmitterComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5028;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  MergeFrom(this,param_1);
  return;
}


