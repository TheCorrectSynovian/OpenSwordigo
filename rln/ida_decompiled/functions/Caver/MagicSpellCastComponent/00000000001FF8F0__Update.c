/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8F0
 * Mangled: ._ZN5Caver23MagicSpellCastComponent6UpdateEf
 * Demangled: Caver::MagicSpellCastComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000028BD38  `non-virtual thunk to'Caver::MagicSpellCastComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8F8 string=0x00000000001FF8FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicSpellCastComponent::Update(Caver::MagicSpellCastComponent *this, float a2)
{
  return _ZN5Caver23MagicSpellCastComponent6UpdateEf(this, a2);
}

