/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aec68
 * Function: Caver::PortalEffectComponent::RequiresTexturing
 * Signature: undefined __thiscall RequiresTexturing(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::RequiresTexturing() */

bool __thiscall Caver::PortalEffectComponent::RequiresTexturing(PortalEffectComponent *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb0);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    lVar1 = *(long *)(this + 0xb0);
    if (lVar1 == 0) {
      return false;
    }
  }
  return *(long *)(lVar1 + 0x78) != 0;
}


