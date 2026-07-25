/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAA14
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::SpawnPointComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FAA24 string=0x00000000002FAA28 "`\n"
 *   insn=0x00000000002FAA24 string=0x00000000001FD230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::InitAsDefaultInstance(Caver::Proto::SpawnPointComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 2) = result;
  return result;
}

