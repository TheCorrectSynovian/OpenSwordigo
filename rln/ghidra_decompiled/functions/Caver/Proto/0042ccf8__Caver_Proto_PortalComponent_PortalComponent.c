/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ccf8
 * Function: Caver::Proto::PortalComponent::PortalComponent
 * Signature: undefined __thiscall PortalComponent(PortalComponent * this, PortalComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&) */

void __thiscall
Caver::Proto::PortalComponent::PortalComponent(PortalComponent *this,PortalComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e6f58;
  *(undefined8 *)(this + 8) = 0;
  puVar3 = PTR__default_spawn_point_name__007e72a0;
  puVar1 = PTR__default_destination_scene_name__007e6a68;
                    /* try { // try from 0042cd14 to 0052cd17 has its CatchHandler @ 0042cf20 */
  this[0x20] = (PortalComponent)0x0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x24) = 0;
  MergeFrom(this,param_1);
  return;
}


