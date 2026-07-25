/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BE8B8
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver7MapPathEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *
 * Callers: 1
 *   0x00000000001F6C00  boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 32
 *   insn=0x00000000003BE8CC string=0x00000000003BE8D0 "U"
 *   insn=0x00000000003BE8E8 string=0x00000000003BE8EC "="
 *   insn=0x00000000003BE8EC string=0x00000000003BE8F0 "I"
 *   insn=0x00000000003BE8EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BE8F0 string=0x00000000003BE8F4 ")"
 *   insn=0x00000000003BE900 string=0x00000000003BE904 "(A"
 *   insn=0x00000000003BE908 string=0x00000000003BE90C ""
 *   insn=0x00000000003BE920 string=0x00000000003BE93C "e"
 *   insn=0x00000000003BE93C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BE940 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BE944 string=0x00000000003BE948 "tV@"
 *   insn=0x00000000003BE944 string=0x00000000003BE9E0 "d"
 *   insn=0x00000000003BE950 string=0x00000000003BE954 "6"
 *   insn=0x00000000003BE950 string=0x00000000003BE9CC "t"
 *   insn=0x00000000003BE954 string=0x00000000003BE958 "7"
 *   insn=0x00000000003BE96C string=0x00000000003BE970 "\t"
 *   insn=0x00000000003BE96C string=0x00000000003BE98C "\t"
 *   insn=0x00000000003BE970 string=0x00000000003BE974 "*"
 *   insn=0x00000000003BE974 string=0x00000000003BE978 "\n"
 *   insn=0x00000000003BE97C string=0x00000000003BE980 "?"
 *   insn=0x00000000003BE98C string=0x00000000003BE990 "*"
 *   insn=0x00000000003BE990 string=0x00000000003BE994 "\n"
 *   insn=0x00000000003BE994 string=0x00000000003BE998 "?"
 *   insn=0x00000000003BE9B8 string=0x00000000003BE968 "!"
 *   insn=0x00000000003BE9C0 string=0x00000000003BE9C4 "A"
 *   insn=0x00000000003BE9C4 string=0x00000000003BE9C8 "t"
 *   insn=0x00000000003BE9D0 string=0x00000000003BE9D4 "7"
 *   insn=0x00000000003BE9D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BE9D8 string=0x00000000003BE9DC "5"
 *   insn=0x00000000003BE9E8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BE9F0 string=0x00000000003BE9F4 "V>"
 *   insn=0x00000000003BE9F4 string=0x00000000003BE9F8 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::MapPath>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CF0D8;
  *a1 = v4;
  return result;
}

