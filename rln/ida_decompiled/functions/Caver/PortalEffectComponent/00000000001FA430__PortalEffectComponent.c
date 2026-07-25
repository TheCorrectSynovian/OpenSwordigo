/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA430
 * Mangled: ._ZN5Caver21PortalEffectComponentC2Ev
 * Demangled: Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Callers: 1
 *   0x0000000000250438  Caver::PortalEffectComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002AD2B8  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA438 string=0x00000000001FA43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalEffectComponent::PortalEffectComponent(Caver::PortalEffectComponent *this)
{
  return _ZN5Caver21PortalEffectComponentC2Ev(this);
}

