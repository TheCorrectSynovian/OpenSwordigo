/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCFB0
 * Mangled: ._ZN5Caver13GlowComponentC2Ev
 * Demangled: Caver::GlowComponent::GlowComponent(void)
 *
 * Callers: 6
 *   0x00000000002831FC  Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *   0x0000000000283854  Caver::HookshotTrailComponent::Clone(void)
 *   0x00000000002AD2B8  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x00000000002AF60C  Caver::ShatterComponent::className(void)
 *   0x00000000002B1148  Caver::SimpleGlowComponent::Clone(void)
 *   0x00000000002CA560  Caver::SwingComponent::className(void)
 *
 * Callees: 1
 *   0x00000000002A34AC  Caver::GlowComponent::GlowComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCFB8 string=0x00000000001FCFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::GlowComponent(Caver::GlowComponent *this)
{
  return _ZN5Caver13GlowComponentC2Ev(this);
}

