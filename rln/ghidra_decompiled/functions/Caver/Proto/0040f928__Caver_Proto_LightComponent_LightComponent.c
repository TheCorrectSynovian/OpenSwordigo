/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f928
 * Function: Caver::Proto::LightComponent::LightComponent
 * Signature: undefined __thiscall LightComponent(LightComponent * this, LightComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&) */

void __thiscall
Caver::Proto::LightComponent::LightComponent(LightComponent *this,LightComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e64f0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


