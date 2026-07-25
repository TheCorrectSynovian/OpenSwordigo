/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004538E4
 * Mangled: _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_21WhooshParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000001FD0A0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
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
 *   insn=0x00000000004538FC string=0x0000000000453900 "8"
 *   insn=0x0000000000453900 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000453904 string=0x0000000000453908 ")1D"
 *   insn=0x0000000000453914 string=0x0000000000453918 "(A"
 *   insn=0x000000000045391C string=0x0000000000453920 ""
 *   insn=0x0000000000453940 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000453944 string=0x0000000000453948 "h"
 *   insn=0x0000000000453948 string=0x000000000045394C ""
 *   insn=0x0000000000453960 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000453968 string=0x000000000045396C "x"
 *   insn=0x000000000045396C string=0x0000000000453970 "P"
 *   insn=0x0000000000453970 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D44C8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

