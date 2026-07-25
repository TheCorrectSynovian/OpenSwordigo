/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453834
 * Mangled: _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20TrailParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000001F68C0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
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
 * Referenced strings: 13
 *   insn=0x000000000045384C string=0x0000000000453850 "d"
 *   insn=0x0000000000453850 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000453854 string=0x0000000000453858 ")"
 *   insn=0x0000000000453864 string=0x0000000000453868 "(A"
 *   insn=0x000000000045386C string=0x0000000000453870 ""
 *   insn=0x0000000000453888 string=0x000000000045388C "1"
 *   insn=0x0000000000453890 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000453894 string=0x0000000000453898 "h"
 *   insn=0x0000000000453898 string=0x000000000045389C ""
 *   insn=0x00000000004538AC string=0x00000000004538B0 "8"
 *   insn=0x00000000004538B0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004538BC string=0x00000000004538C0 "|"
 *   insn=0x00000000004538C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D4478;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

