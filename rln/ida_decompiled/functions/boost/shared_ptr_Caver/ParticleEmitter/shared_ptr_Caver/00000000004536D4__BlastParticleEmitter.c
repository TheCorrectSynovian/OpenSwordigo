/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004536D4
 * Mangled: _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20BlastParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000001F7370  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
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
 * Referenced strings: 11
 *   insn=0x00000000004536F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004536F4 string=0x00000000004536F8 ")"
 *   insn=0x0000000000453704 string=0x0000000000453708 "(A"
 *   insn=0x000000000045370C string=0x0000000000453710 ""
 *   insn=0x0000000000453730 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000453734 string=0x0000000000453738 "h"
 *   insn=0x0000000000453734 string=0x0000000000453748 "\n"
 *   insn=0x0000000000453738 string=0x000000000045373C ""
 *   insn=0x0000000000453750 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000453754 string=0x0000000000453758 "["
 *   insn=0x0000000000453760 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D43D8;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

