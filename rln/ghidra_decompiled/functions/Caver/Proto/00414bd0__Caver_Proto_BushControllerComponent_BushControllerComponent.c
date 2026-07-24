/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414bd0
 * Function: Caver::Proto::BushControllerComponent::BushControllerComponent
 * Signature: undefined __thiscall BushControllerComponent(BushControllerComponent * this, BushControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::BushControllerComponent(Caver::Proto::BushControllerComponent
   const&) */

void __thiscall
Caver::Proto::BushControllerComponent::BushControllerComponent
          (BushControllerComponent *this,BushControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4c90;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


