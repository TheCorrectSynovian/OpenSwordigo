/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000453994
 * Mangled: _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_23FountainParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000002026A0  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FF8B0  Caver::VertexArrayObject::VertexArrayObject(void)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x00000000004539B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004539B4 string=0x00000000004539B8 ")"
 *   insn=0x00000000004539C4 string=0x00000000004539C8 "(A"
 *   insn=0x00000000004539CC string=0x00000000004539D0 ""
 *   insn=0x00000000004539F0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004539F4 string=0x00000000004539F8 "h"
 *   insn=0x00000000004539F4 string=0x0000000000453A08 "Z"
 *   insn=0x00000000004539F8 string=0x00000000004539FC ""
 *   insn=0x0000000000453A10 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000453A18 string=0x0000000000453A1C "L"
 *   insn=0x0000000000453A30 string=0x0000000000453A34 "`""
 *   insn=0x0000000000453A3C string=0x0000000000453A40 "`"
 *   insn=0x0000000000453A40 string=0x0000000000453A44 "`"
 *   insn=0x0000000000453A60 string=0x0000000000453A64 "h"
 *   insn=0x0000000000453A64 string=0x0000000000453A68 "`B"
 *   insn=0x0000000000453A68 string=0x0000000000453A6C "i"
 *   insn=0x0000000000453A88 string=0x0000000000453A8C "h"
 *   insn=0x0000000000453A8C string=0x0000000000453A98 "h"
 *   insn=0x0000000000453A90 string=0x0000000000453A94 "3"
 *   insn=0x0000000000453A94 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000453AA8 string=0x0000000000453AE8 "u"
 *   insn=0x0000000000453AB0 string=0x0000000000453AB4 " "
 *   insn=0x0000000000453AB4 string=0x0000000000453AB8 "\n@"
 *   insn=0x0000000000453AB8 string=0x0000000000453ABC "J"
 *   insn=0x0000000000453ABC string=0x0000000000453AC0 "\n"
 *   insn=0x0000000000453AC4 string=0x0000000000453AC8 "\t"
 *   insn=0x0000000000453AC8 string=0x0000000000453ACC ")"
 *   insn=0x0000000000453ACC string=0x0000000000453AD0 " "
 *   insn=0x0000000000453AD8 string=0x0000000000453ADC "?"
 *   insn=0x0000000000453AE0 string=0x0000000000453AE4 "u"
 *   insn=0x0000000000453AE8 string=0x0000000000453AF4 "`"
 *   insn=0x0000000000453AF0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000453AF8 string=0x0000000000453AFC "@"
 *   insn=0x0000000000453AFC string=0x0000000000453B00 ""
 *   insn=0x0000000000453B00 string=0x0000000000453B04 ""
 *   insn=0x0000000000453B08 string=0x0000000000453B0C ""
 *   insn=0x0000000000453B0C string=0x0000000000453B10 ""
 *   insn=0x0000000000453B18 string=0x0000000000453B1C "j"
 *   insn=0x0000000000453B24 string=0x0000000000453B28 "\t"
 *   insn=0x0000000000453B28 string=0x0000000000453B2C "h"
 *   insn=0x0000000000453B30 string=0x0000000000453B34 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(
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

