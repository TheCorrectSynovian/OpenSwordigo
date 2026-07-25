/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7700
 * Mangled: ._ZN5Caver13GlowComponent19PerformBindedActionEi
 * Demangled: Caver::GlowComponent::PerformBindedAction(int)
 *
 * Callers: 8
 *   0x000000000028328C  Caver::HookshotTrailComponent::PerformBindedAction(int)
 *   0x0000000000283290  `non-virtual thunk to'Caver::HookshotTrailComponent::PerformBindedAction(int)
 *   0x00000000002AE530  Caver::PortalEffectComponent::PerformBindedAction(int)
 *   0x00000000002AE534  `non-virtual thunk to'Caver::PortalEffectComponent::PerformBindedAction(int)
 *   0x00000000002B0CAC  Caver::SimpleGlowComponent::PerformBindedAction(int)
 *   0x00000000002B0CB0  `non-virtual thunk to'Caver::SimpleGlowComponent::PerformBindedAction(int)
 *   0x00000000002CB378  Caver::WeaponGlowComponent::PerformBindedAction(int)
 *   0x00000000002CB37C  `non-virtual thunk to'Caver::WeaponGlowComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x00000000002A3560  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7708 string=0x00000000001F770C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GlowComponent::PerformBindedAction(Caver::GlowComponent *this, int a2)
{
  return _ZN5Caver13GlowComponent19PerformBindedActionEi(this, a2);
}

