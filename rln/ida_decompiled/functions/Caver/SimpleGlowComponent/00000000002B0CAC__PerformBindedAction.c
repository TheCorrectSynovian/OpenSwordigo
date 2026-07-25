/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0CAC
 * Mangled: _ZN5Caver19SimpleGlowComponent19PerformBindedActionEi
 * Demangled: Caver::SimpleGlowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B0CAC string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SimpleGlowComponent::PerformBindedAction(Caver::SimpleGlowComponent *this, int a2)
{
  return Caver::GlowComponent::PerformBindedAction(this, a2);
}

