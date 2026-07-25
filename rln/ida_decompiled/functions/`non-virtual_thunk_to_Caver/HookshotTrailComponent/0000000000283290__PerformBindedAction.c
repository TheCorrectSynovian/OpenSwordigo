/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283290
 * Mangled: _ZThn16_N5Caver22HookshotTrailComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::HookshotTrailComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000283290 string=0x0000000000283294 ""
 *   insn=0x0000000000283294 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HookshotTrailComponent::PerformBindedAction(
        Caver::HookshotTrailComponent *this,
        int a2)
{
  return Caver::GlowComponent::PerformBindedAction((Caver::HookshotTrailComponent *)((char *)this - 16), a2);
}

