/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c4f8
 * Function: Caver::Proto::PropertiesComponent::PropertiesComponent
 * Signature: undefined __thiscall PropertiesComponent(PropertiesComponent * this, PropertiesComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
    */

void __thiscall
Caver::Proto::PropertiesComponent::PropertiesComponent
          (PropertiesComponent *this,PropertiesComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4ea0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


