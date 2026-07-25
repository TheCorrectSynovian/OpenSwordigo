/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB378
 * Mangled: _ZN5Caver19WeaponGlowComponent19PerformBindedActionEi
 * Demangled: Caver::WeaponGlowComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7700  Caver::GlowComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CB378 string=0x00000000001F7700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponGlowComponent::PerformBindedAction(Caver::WeaponGlowComponent *this, int a2)
{
  return Caver::GlowComponent::PerformBindedAction(this, a2);
}

