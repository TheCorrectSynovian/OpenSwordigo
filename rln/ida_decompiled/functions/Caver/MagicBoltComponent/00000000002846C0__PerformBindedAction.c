/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002846C0
 * Mangled: _ZN5Caver18MagicBoltComponent19PerformBindedActionEi
 * Demangled: Caver::MagicBoltComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002846C0 string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicBoltComponent::PerformBindedAction(Caver::MagicBoltComponent *this, int a2)
{
  return Caver::SpellComponent::PerformBindedAction(this, a2);
}

