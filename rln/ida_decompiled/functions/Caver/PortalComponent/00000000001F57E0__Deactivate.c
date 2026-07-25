/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F57E0
 * Mangled: ._ZN5Caver15PortalComponent10DeactivateEv
 * Demangled: Caver::PortalComponent::Deactivate(void)
 *
 * Callers: 1
 *   0x0000000000272780  Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Callees: 1
 *   0x0000000000230C80  Caver::PortalComponent::Deactivate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F57E8 string=0x00000000001F57EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalComponent::Deactivate(Caver::PortalComponent *this)
{
  return _ZN5Caver15PortalComponent10DeactivateEv(this);
}

