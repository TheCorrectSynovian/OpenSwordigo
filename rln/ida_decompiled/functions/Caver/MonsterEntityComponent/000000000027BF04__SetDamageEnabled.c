/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027BF04
 * Mangled: _ZN5Caver22MonsterEntityComponent16SetDamageEnabledEb
 * Demangled: Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *
 * Callers: 2
 *   0x00000000001F8F80  Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000027BF08 string=0x000000000027BF0C ")"
 *   insn=0x000000000027BF0C string=0x000000000027BF10 "\t"
 *   insn=0x000000000027BF10 string=0x000000000027BF14 "\td"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MonsterEntityComponent::SetDamageEnabled(__int64 this, char a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(this + 392);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 188) = a2 & 1;
    *(_BYTE *)(this + 409) = a2 & 1;
  }
  return this;
}

