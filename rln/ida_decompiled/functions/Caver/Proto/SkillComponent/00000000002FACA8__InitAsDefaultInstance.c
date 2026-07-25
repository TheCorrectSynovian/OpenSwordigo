/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FACA8
 * Mangled: _ZN5Caver5Proto14SkillComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SkillComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FACB8 string=0x00000000002FACBC "`"
 *   insn=0x00000000002FACB8 string=0x00000000001FB0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::InitAsDefaultInstance(Caver::Proto::SkillComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector2::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

