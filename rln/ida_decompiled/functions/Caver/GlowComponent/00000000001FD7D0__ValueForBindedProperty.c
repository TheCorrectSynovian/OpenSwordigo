/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD7D0
 * Mangled: ._ZN5Caver13GlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 6
 *   0x0000000000283274  Caver::HookshotTrailComponent::ValueForBindedProperty(int)
 *   0x0000000000283278  `non-virtual thunk to'Caver::HookshotTrailComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD40  Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *   0x00000000002ADD64  `non-virtual thunk to'Caver::PortalEffectComponent::ValueForBindedProperty(int)
 *   0x00000000002B0850  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *   0x00000000002CB13C  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002A3548  Caver::GlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD7D4 string=0x00000000002A3548 "bn"
 *   insn=0x00000000001FD7D8 string=0x00000000001FD7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::ValueForBindedProperty(Caver::GlowComponent *this, int a2)
{
  return _ZN5Caver13GlowComponent22ValueForBindedPropertyEi(this, a2);
}

