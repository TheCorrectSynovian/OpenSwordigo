/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA98C
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA998 string=0x00000000002FA99C "]"
 *   insn=0x00000000002FA99C string=0x00000000002FA9A0 "`\n"
 *   insn=0x00000000002FA99C string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::InitAsDefaultInstance(Caver::Proto::WeaponTrailComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

