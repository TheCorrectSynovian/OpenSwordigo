/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9A78
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::GroundMeshComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001F9600  Caver::Proto::Rectangle::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9A88 string=0x00000000002F9A8C "`."
 *   insn=0x00000000002F9A88 string=0x00000000001F9600 "0'"
 *   insn=0x00000000002F9A8C string=0x00000000002F9A90 " "
 *   insn=0x00000000002F9A90 string=0x00000000002F9A94 "`j"
 *   insn=0x00000000002F9A90 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::InitAsDefaultInstance(Caver::Proto::GroundMeshComponent *this)
{
  Caver::Proto::FloatColor *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::Rectangle::default_instance(this);
  *((_QWORD *)this + 11) = v2;
  result = Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 26) = result;
  return result;
}

