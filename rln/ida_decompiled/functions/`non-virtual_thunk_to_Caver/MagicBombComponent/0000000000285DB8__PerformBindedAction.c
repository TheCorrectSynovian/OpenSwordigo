/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285DB8
 * Mangled: _ZThn16_N5Caver18MagicBombComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::MagicBombComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000285DBC string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicBombComponent::PerformBindedAction(
        Caver::MagicBombComponent *this,
        int a2)
{
  return Caver::SpellComponent::PerformBindedAction((Caver::MagicBombComponent *)((char *)this - 16), a2);
}

