/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B1E10
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver5QuestEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *
 * Callers: 1
 *   0x00000000001F5890  boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FECD0  Caver::Quest::~Quest()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000003B1E2C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B1E30 string=0x00000000003B1E34 ")"
 *   insn=0x00000000003B1E40 string=0x00000000003B1E44 "(A"
 *   insn=0x00000000003B1E48 string=0x00000000003B1E4C ""
 *   insn=0x00000000003B1E60 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B1E64 string=0x00000000003B1E78 ">C"
 *   insn=0x00000000003B1E74 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B1E80 string=0x00000000003B1E84 ""
 *   insn=0x00000000003B1E90 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B1E98 string=0x00000000003B1E9C ",q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Quest>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CED68;
  *a1 = v4;
  return result;
}

