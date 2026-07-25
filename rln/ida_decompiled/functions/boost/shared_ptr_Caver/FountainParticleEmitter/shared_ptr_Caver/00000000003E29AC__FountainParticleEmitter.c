/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E29AC
 * Mangled: _ZN5boost10shared_ptrIN5Caver23FountainParticleEmitterEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Callers: 2
 *   0x00000000001F3ED0  boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x00000000003E2974  Caver::OverlayMenuButton::~OverlayMenuButton()
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
 *   insn=0x00000000003E29C8 string=0x00000000003E29CC ")"
 *   insn=0x00000000003E29C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E29CC string=0x00000000003E29D0 ")"
 *   insn=0x00000000003E29DC string=0x00000000003E29E0 "(A"
 *   insn=0x00000000003E29E4 string=0x00000000003E29E8 ""
 *   insn=0x00000000003E2A08 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003E2A0C string=0x00000000003E2A10 "h"
 *   insn=0x00000000003E2A0C string=0x00000000003E2A20 "T"
 *   insn=0x00000000003E2A10 string=0x00000000003E2A14 ""
 *   insn=0x00000000003E2A28 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003E2A30 string=0x00000000003E2A34 "F"
 *   insn=0x00000000003E2A38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // x0

  *a1 = a2;
  a1[1] = 0;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = vdupq_n_s64(1u);
  *(_QWORD *)v4 = &off_6D0728;
  a1[1] = v4;
  boost::detail::sp_enable_shared_from_this();
}

