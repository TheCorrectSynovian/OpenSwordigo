/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B968
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver16RenderingContextEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001FA890  boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB590  Caver::RenderingContext::~RenderingContext()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000047B984 string=0x000000000047B988 "I"
 *   insn=0x000000000047B984 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047B988 string=0x000000000047B98C ")%G"
 *   insn=0x000000000047B998 string=0x000000000047B99C "(A"
 *   insn=0x000000000047B9A0 string=0x000000000047B9A4 ""
 *   insn=0x000000000047B9B8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000047B9BC string=0x000000000047B9D0 "h"
 *   insn=0x000000000047B9C4 string=0x00000000001FB590 "0'"
 *   insn=0x000000000047B9C8 string=0x000000000047B9CC "9"
 *   insn=0x000000000047B9CC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047B9D8 string=0x000000000047B9DC "5"
 *   insn=0x000000000047B9E8 string=0x00000000001FD590 "0'"
 *   insn=0x000000000047B9F0 string=0x000000000047B9F4 "VJ"
 *   insn=0x000000000047B9F4 string=0x000000000047B9F8 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::RenderingContext>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D5178;
  *a1 = v4;
  return result;
}

