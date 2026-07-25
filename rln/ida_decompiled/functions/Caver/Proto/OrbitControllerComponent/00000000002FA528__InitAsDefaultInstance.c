/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA528
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA534 string=0x00000000002FA538 ">"
 *   insn=0x00000000002FA538 string=0x00000000002FA53C "`\n"
 *   insn=0x00000000002FA538 string=0x00000000001FD230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::InitAsDefaultInstance(
        Caver::Proto::OrbitControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

