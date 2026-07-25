/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE530
 * Mangled: _ZN5Caver21PortalEffectComponent19PerformBindedActionEi
 * Demangled: Caver::PortalEffectComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002AE530 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalEffectComponent::PerformBindedAction(Caver::PortalEffectComponent *this, int a2)
{
  return Caver::GlowComponent::PerformBindedAction(this, a2);
}

