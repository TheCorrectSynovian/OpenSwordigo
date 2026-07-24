/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422e28
 * Function: Caver::Proto::OrbitControllerComponent::OrbitControllerComponent
 * Signature: undefined __thiscall OrbitControllerComponent(OrbitControllerComponent * this, OrbitControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent
   const&) */

void __thiscall
Caver::Proto::OrbitControllerComponent::OrbitControllerComponent
          (OrbitControllerComponent *this,OrbitControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6548;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


