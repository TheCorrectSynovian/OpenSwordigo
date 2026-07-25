/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453784
 * Mangled: _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20SparkParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000002037F0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000004537A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004537A4 string=0x00000000004537A8 ")"
 *   insn=0x00000000004537B4 string=0x00000000004537B8 "(A"
 *   insn=0x00000000004537BC string=0x00000000004537C0 ""
 *   insn=0x00000000004537D8 string=0x00000000004537DC "]"
 *   insn=0x00000000004537E0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004537E4 string=0x00000000004537E8 "h"
 *   insn=0x00000000004537E8 string=0x00000000004537EC ""
 *   insn=0x00000000004537FC string=0x0000000000453800 "d"
 *   insn=0x0000000000453800 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000453804 string=0x0000000000453808 "/"
 *   insn=0x0000000000453810 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D4428;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

