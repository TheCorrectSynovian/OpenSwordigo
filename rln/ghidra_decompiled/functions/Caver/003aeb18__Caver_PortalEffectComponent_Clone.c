/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aeb18
 * Function: Caver::PortalEffectComponent::Clone
 * Signature: undefined __thiscall Clone(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::Clone() const */

PortalEffectComponent * __thiscall Caver::PortalEffectComponent::Clone(PortalEffectComponent *this)

{
  PortalEffectComponent *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x100);
  PortalEffectComponent(this_00);
  GlowComponent::InitWithComponent((GlowComponent *)this_00,(GlowComponent *)this);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this_00 + 0xa8) = *(undefined4 *)(this + 0xa8);
  uVar1 = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this_00 + 0xc0) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(this_00 + 0xb8) = uVar1;
  *(undefined8 *)(this_00 + 200) = *(undefined8 *)(this + 200);
  *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(this + 0xd0);
  return this_00;
}


