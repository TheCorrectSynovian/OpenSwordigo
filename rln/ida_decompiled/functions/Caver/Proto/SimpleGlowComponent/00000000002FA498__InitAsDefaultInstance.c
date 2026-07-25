/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA498
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FB0B0  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002FA4A8 string=0x00000000002FA4AC "`\n"
 *   insn=0x00000000002FA4A8 string=0x00000000001F6310 "0'"
 *   insn=0x00000000002FA4B0 string=0x00000000002FA4B4 "`"
 *   insn=0x00000000002FA4B0 string=0x00000000001FB0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance(Caver::Proto::SimpleGlowComponent *this)
{
  Caver::Proto::Vector2 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector2 *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::Vector2::default_instance(v2);
  *((_QWORD *)this + 5) = result;
  return result;
}

