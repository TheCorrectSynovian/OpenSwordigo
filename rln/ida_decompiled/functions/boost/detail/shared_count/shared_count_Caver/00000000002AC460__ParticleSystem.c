/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC460
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver14ParticleSystemEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *
 * Callers: 1
 *   0x00000000001F7070  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD470  Caver::ParticleSystem::~ParticleSystem()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002AC478 string=0x00000000002AC47C "Y$"
 *   insn=0x00000000002AC47C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AC480 string=0x00000000002AC484 ")9A"
 *   insn=0x00000000002AC490 string=0x00000000002AC494 "(A"
 *   insn=0x00000000002AC498 string=0x00000000002AC49C ""
 *   insn=0x00000000002AC4B0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002AC4BC string=0x00000000001FD470 "0'"
 *   insn=0x00000000002AC4C0 string=0x00000000002AC4C4 "{+"
 *   insn=0x00000000002AC4C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AC4D0 string=0x00000000002AC4D4 "w+"
 *   insn=0x00000000002AC4D8 string=0x00000000002AC4E0 ",D"
 *   insn=0x00000000002AC4E0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002AC4EC string=0x00000000002AC4F0 "p+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::ParticleSystem>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6C3798;
  *a1 = v4;
  return result;
}

