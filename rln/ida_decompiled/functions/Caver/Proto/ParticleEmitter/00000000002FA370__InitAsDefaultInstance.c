/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA370
 * Mangled: _ZN5Caver5Proto15ParticleEmitter21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ParticleEmitter::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002FA380 string=0x00000000002FA384 "`\n"
 *   insn=0x00000000002FA380 string=0x00000000001FD230 "0'"
 *   insn=0x00000000002FA388 string=0x00000000002FA38C "`"
 *   insn=0x00000000002FA388 string=0x00000000001F6310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::InitAsDefaultInstance(Caver::Proto::ParticleEmitter *this)
{
  Caver::Proto::FloatColor *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::FloatColor *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::FloatColor::default_instance(v2);
  *((_QWORD *)this + 3) = result;
  return result;
}

