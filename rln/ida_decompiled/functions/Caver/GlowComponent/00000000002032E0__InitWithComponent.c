/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032E0
 * Mangled: ._ZN5Caver13GlowComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Callers: 8
 *   0x0000000000283250  Caver::HookshotTrailComponent::InitWithComponent(Caver::HookshotTrailComponent const*)
 *   0x0000000000283854  Caver::HookshotTrailComponent::Clone(void)
 *   0x00000000002AD2B8  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x00000000002AEB18  Caver::PortalEffectComponent::Clone(void)
 *   0x00000000002AF6E8  Caver::SimpleGlowComponent::InitWithComponent(Caver::SimpleGlowComponent const*)
 *   0x00000000002B1148  Caver::SimpleGlowComponent::Clone(void)
 *   0x00000000002CA560  Caver::SwingComponent::className(void)
 *   0x00000000002CBFF8  Caver::WeaponGlowComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002A3510  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000002032E4 string=0x00000000002A3510 ") @"
 *   insn=0x00000000002032E8 string=0x00000000002032EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::InitWithComponent(Caver::GlowComponent *this, const Caver::GlowComponent *a2)
{
  return _ZN5Caver13GlowComponent17InitWithComponentEPKS0_(this, a2);
}

