/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032f84c
 * Function: Caver::PortalComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PortalComponent * this, PortalComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::InitWithComponent(Caver::PortalComponent const*) */

void __thiscall
Caver::PortalComponent::InitWithComponent(PortalComponent *this,PortalComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  FUN_0066a6a8(this + 0x88,param_1 + 0x88);
  FUN_0066a6a8(this + 0x90,param_1 + 0x90);
  this[0x98] = param_1[0x98];
  return;
}


