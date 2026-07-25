/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F98F4
 * Mangled: _ZN5Caver5Proto14ModelComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ModelComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9900 string=0x00000000002F9904 "K"
 *   insn=0x00000000002F9904 string=0x00000000002F9908 "`"
 *   insn=0x00000000002F9904 string=0x00000000001FD230 "0'"
 *   insn=0x00000000002F990C string=0x00000000002F9910 "`"
 *   insn=0x00000000002F990C string=0x00000000001F6310 "0'"
 *   insn=0x00000000002F9914 string=0x00000000002F9918 "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::InitAsDefaultInstance(Caver::Proto::ModelComponent *this)
{
  Caver::Proto::FloatColor *v2; // x0
  Caver::Proto::FloatColor *v3; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  v3 = (Caver::Proto::FloatColor *)Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 6) = v3;
  result = Caver::Proto::FloatColor::default_instance(v3);
  *((_QWORD *)this + 8) = result;
  return result;
}

