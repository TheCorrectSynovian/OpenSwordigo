/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAD30
 * Mangled: _ZN5Caver5Proto19FireBreathComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::FireBreathComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FAD3C string=0x00000000002FAD40 "t"
 *   insn=0x00000000002FAD40 string=0x00000000002FAD44 "`"
 *   insn=0x00000000002FAD40 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::InitAsDefaultInstance(Caver::Proto::FireBreathComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

