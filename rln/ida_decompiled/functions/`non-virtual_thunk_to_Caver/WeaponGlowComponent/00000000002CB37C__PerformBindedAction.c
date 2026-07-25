/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB37C
 * Mangled: _ZThn16_N5Caver19WeaponGlowComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::WeaponGlowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CB380 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponGlowComponent::PerformBindedAction(
        Caver::WeaponGlowComponent *this,
        int a2)
{
  return Caver::GlowComponent::PerformBindedAction((Caver::WeaponGlowComponent *)((char *)this - 16), a2);
}

