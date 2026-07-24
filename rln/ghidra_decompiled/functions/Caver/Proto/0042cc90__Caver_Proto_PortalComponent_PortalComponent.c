/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cc90
 * Function: Caver::Proto::PortalComponent::PortalComponent
 * Signature: undefined __thiscall PortalComponent(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::PortalComponent() */

void __thiscall Caver::Proto::PortalComponent::PortalComponent(PortalComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e6f58;
  *(undefined8 *)(this + 8) = 0;
  puVar3 = PTR__default_spawn_point_name__007e72a0;
  puVar1 = PTR__default_destination_scene_name__007e6a68;
  this[0x20] = (PortalComponent)0x0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


