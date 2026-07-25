/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266458
 * Mangled: _ZThn24_N5Caver15DamageComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::DamageComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000266464 string=0x0000000000266468 "nC"
 *   insn=0x0000000000266468 string=0x00000000001F7220 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DamageComponent::Update(__int64 this, float a2)
{
  if ( *(_BYTE *)(this + 184) )
    return Caver::DamageComponent::ResolvePotentialImpacts((Caver::DamageComponent *)(this - 24), 0);
  return this;
}

