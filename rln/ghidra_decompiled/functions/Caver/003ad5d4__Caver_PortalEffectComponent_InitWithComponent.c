/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad5d4
 * Function: Caver::PortalEffectComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PortalEffectComponent * this, PortalEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::InitWithComponent(Caver::PortalEffectComponent const*) */

void __thiscall
Caver::PortalEffectComponent::InitWithComponent
          (PortalEffectComponent *this,PortalEffectComponent *param_1)

{
  undefined8 uVar1;
  
  GlowComponent::InitWithComponent((GlowComponent *)this,(GlowComponent *)param_1);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  return;
}


