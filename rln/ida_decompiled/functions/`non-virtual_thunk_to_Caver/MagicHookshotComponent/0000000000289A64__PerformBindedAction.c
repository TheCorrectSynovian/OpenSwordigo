/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289A64
 * Mangled: _ZThn16_N5Caver22MagicHookshotComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::MagicHookshotComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6D80  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000289A68 string=0x00000000001F6D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicHookshotComponent::PerformBindedAction(
        Caver::MagicHookshotComponent *this,
        int a2)
{
  return Caver::SpellComponent::PerformBindedAction((Caver::MagicHookshotComponent *)((char *)this - 16), a2);
}

