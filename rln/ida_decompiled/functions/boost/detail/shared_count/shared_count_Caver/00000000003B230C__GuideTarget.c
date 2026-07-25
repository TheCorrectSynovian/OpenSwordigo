/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B230C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver11GuideTargetEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *
 * Callers: 1
 *   0x00000000001F8BF0  boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8260  Caver::GuideTarget::~GuideTarget()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000003B2328 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B232C string=0x00000000003B2330 ")"
 *   insn=0x00000000003B233C string=0x00000000003B2340 "(A"
 *   insn=0x00000000003B2344 string=0x00000000003B2348 ""
 *   insn=0x00000000003B235C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B2368 string=0x00000000001F8260 "0'"
 *   insn=0x00000000003B2370 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B238C string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B2390 string=0x00000000003B2394 "L="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GuideTarget>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CEE08;
  *a1 = v4;
  return result;
}

