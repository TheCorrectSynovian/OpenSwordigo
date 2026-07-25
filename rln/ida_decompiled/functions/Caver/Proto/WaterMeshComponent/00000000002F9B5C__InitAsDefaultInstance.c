/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9B5C
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::WaterMeshComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F9B6C string=0x00000000002F9B70 "`"
 *   insn=0x00000000002F9B6C string=0x00000000001F6310 "0'"
 *   insn=0x00000000002F9B74 string=0x00000000002F9B78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::InitAsDefaultInstance(Caver::Proto::WaterMeshComponent *this)
{
  Caver::Proto::FloatColor *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  result = Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 4) = result;
  return result;
}

