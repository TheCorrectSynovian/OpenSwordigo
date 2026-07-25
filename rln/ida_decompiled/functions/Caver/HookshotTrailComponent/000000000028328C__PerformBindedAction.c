/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028328C
 * Mangled: _ZN5Caver22HookshotTrailComponent19PerformBindedActionEi
 * Demangled: Caver::HookshotTrailComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000028328C string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HookshotTrailComponent::PerformBindedAction(Caver::HookshotTrailComponent *this, int a2)
{
  return Caver::GlowComponent::PerformBindedAction(this, a2);
}

