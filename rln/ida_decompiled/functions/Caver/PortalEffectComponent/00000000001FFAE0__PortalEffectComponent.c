/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFAE0
 * Mangled: ._ZN5Caver21PortalEffectComponentC2Ev_0
 * Demangled: Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Callers: 1
 *   0x00000000002AEB18  Caver::PortalEffectComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002AD2B8  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFAE8 string=0x00000000001FFAEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalEffectComponent::PortalEffectComponent(Caver::PortalEffectComponent *this)
{
  return _ZN5Caver21PortalEffectComponentC2Ev(this);
}

