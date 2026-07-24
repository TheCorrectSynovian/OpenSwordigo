/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00432794
 * Function: Caver::Proto::PortalEffectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PortalEffectComponent * this, PortalEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::CopyFrom(Caver::Proto::PortalEffectComponent const&) */

void __thiscall
Caver::Proto::PortalEffectComponent::CopyFrom
          (PortalEffectComponent *this,PortalEffectComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


