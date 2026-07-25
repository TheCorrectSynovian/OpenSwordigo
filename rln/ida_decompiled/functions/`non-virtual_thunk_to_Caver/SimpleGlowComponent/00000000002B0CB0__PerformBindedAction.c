/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B0CB0
 * Mangled: _ZThn16_N5Caver19SimpleGlowComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::SimpleGlowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B0CB4 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SimpleGlowComponent::PerformBindedAction(
        Caver::SimpleGlowComponent *this,
        int a2)
{
  return Caver::GlowComponent::PerformBindedAction((Caver::SimpleGlowComponent *)((char *)this - 16), a2);
}

