/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044B2CC
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver16SkeletonInstanceEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *
 * Callers: 1
 *   0x00000000001F7270  boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000044B2E8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044B2EC string=0x000000000044B2F0 ")%D"
 *   insn=0x000000000044B2FC string=0x000000000044B300 "(A"
 *   insn=0x000000000044B304 string=0x000000000044B308 ""
 *   insn=0x000000000044B31C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000044B320 string=0x000000000044B324 "`\n@"
 *   insn=0x000000000044B324 string=0x000000000044B328 "@"
 *   insn=0x000000000044B328 string=0x000000000044B32C ""
 *   insn=0x000000000044B328 string=0x000000000044B330 "t"
 *   insn=0x000000000044B32C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044B330 string=0x000000000044B334 "4"
 *   insn=0x000000000044B338 string=0x000000000044B33C ""
 *   insn=0x000000000044B348 string=0x000000000044B34C "\t@"
 *   insn=0x000000000044B358 string=0x000000000044B35C ""
 *   insn=0x000000000044B368 string=0x000000000044B36C "@"
 *   insn=0x000000000044B37C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044B390 string=0x000000000044B398 "~"
 *   insn=0x000000000044B398 string=0x00000000001FD590 "0'"
 *   insn=0x000000000044B39C string=0x000000000044B3A0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D4118;
  *a1 = v4;
  return result;
}

