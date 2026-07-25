/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F99C0
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002F99D0 string=0x00000000002F99D4 "`\n"
 *   insn=0x00000000002F99D0 string=0x00000000001FD230 "0'"
 *   insn=0x00000000002F99D8 string=0x00000000002F99DC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance(
        Caver::Proto::ModelTransformControllerComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 3) = result;
  return result;
}

