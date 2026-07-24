/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003311a8
 * Function: Caver::PortalComponent::Clone
 * Signature: undefined __thiscall Clone(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::Clone() const */

PortalComponent * __thiscall Caver::PortalComponent::Clone(PortalComponent *this)

{
  PortalComponent *this_00;
  
  this_00 = operator_new(0xa8);
  PortalComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  FUN_0066a6a8(this_00 + 0x88,this + 0x88);
  FUN_0066a6a8(this_00 + 0x90,this + 0x90);
  this_00[0x98] = this[0x98];
  return this_00;
}


