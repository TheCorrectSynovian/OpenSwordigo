/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BD38
 * Mangled: _ZThn24_N5Caver23MagicSpellCastComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::MagicSpellCastComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF8F0  Caver::MagicSpellCastComponent::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicSpellCastComponent::Update(
        Caver::MagicSpellCastComponent *this,
        float a2)
{
  return Caver::MagicSpellCastComponent::Update((Caver::MagicSpellCastComponent *)((char *)this - 24), a2);
}

