/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9DFC
 * Mangled: _ZN5Caver5Proto15ShadowComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ShadowComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F9E08 string=0x00000000002F9E0C "\t"
 *   insn=0x00000000002F9E0C string=0x00000000002F9E10 "`"
 *   insn=0x00000000002F9E0C string=0x00000000001FD230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::InitAsDefaultInstance(Caver::Proto::ShadowComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 3) = result;
  return result;
}

