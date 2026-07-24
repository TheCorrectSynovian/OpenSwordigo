/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cccc
 * Function: Caver::Proto::PortalComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::SharedCtor() */

void __thiscall Caver::Proto::PortalComponent::SharedCtor(PortalComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR__default_spawn_point_name__007e72a0;
  puVar1 = PTR__default_destination_scene_name__007e6a68;
  this[0x20] = (PortalComponent)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


