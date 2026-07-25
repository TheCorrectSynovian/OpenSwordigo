/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA39C
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002FA3AC string=0x00000000002FA3B0 "`>"
 *   insn=0x00000000002FA3AC string=0x00000000001FD230 "0'"
 *   insn=0x00000000002FA3B4 string=0x00000000002FA3B8 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance(
        Caver::Proto::ParticleEmitterComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 15) = v2;
  result = Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 16) = result;
  return result;
}

