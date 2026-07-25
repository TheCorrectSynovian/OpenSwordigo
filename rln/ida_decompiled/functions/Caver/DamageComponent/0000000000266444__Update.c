/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266444
 * Mangled: _ZN5Caver15DamageComponent6UpdateEf
 * Demangled: Caver::DamageComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Referenced strings: 3
 *   insn=0x0000000000266444 string=0x0000000000266448 "h"
 *   insn=0x000000000026644C string=0x0000000000266450 "tC"
 *   insn=0x0000000000266450 string=0x00000000001F7220 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DamageComponent *__fastcall Caver::DamageComponent::Update(Caver::DamageComponent *this, float a2)
{
  if ( *((_BYTE *)this + 208) )
    return (Caver::DamageComponent *)Caver::DamageComponent::ResolvePotentialImpacts(this, 0);
  return this;
}

