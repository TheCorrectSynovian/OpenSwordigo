/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA930
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA93C string=0x00000000002FA940 "t"
 *   insn=0x00000000002FA940 string=0x00000000002FA944 "`\n"
 *   insn=0x00000000002FA940 string=0x00000000001F6310 "0'"
 *   insn=0x00000000002FA944 string=0x00000000002FA948 "r"
 *   insn=0x00000000002FA948 string=0x00000000002FA94C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::InitAsDefaultInstance(Caver::Proto::WeaponGlowComponent *this)
{
  Caver::Proto::FloatColor *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 3) = result;
  return result;
}

