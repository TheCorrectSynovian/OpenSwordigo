/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002846C4
 * Mangled: _ZThn16_N5Caver18MagicBoltComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::MagicBoltComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002846C8 string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicBoltComponent::PerformBindedAction(
        Caver::MagicBoltComponent *this,
        int a2)
{
  return Caver::SpellComponent::PerformBindedAction((Caver::MagicBoltComponent *)((char *)this - 16), a2);
}

