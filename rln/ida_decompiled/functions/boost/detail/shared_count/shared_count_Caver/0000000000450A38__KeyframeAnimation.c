/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450A38
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver17KeyframeAnimationEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
 *
 * Callers: 1
 *   0x00000000001FAA30  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
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
 * Referenced strings: 44
 *   insn=0x0000000000450A48 string=0x0000000000450A4C "U"
 *   insn=0x0000000000450A68 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000450A6C string=0x0000000000450A70 ")"
 *   insn=0x0000000000450A7C string=0x0000000000450A80 "(A"
 *   insn=0x0000000000450A84 string=0x0000000000450A88 ""
 *   insn=0x0000000000450A9C string=0x0000000000450AB4 ""
 *   insn=0x0000000000450AB4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000450AB8 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000450ABC string=0x0000000000450AC0 "t"
 *   insn=0x0000000000450AC0 string=0x0000000000450AC4 "4"
 *   insn=0x0000000000450AC4 string=0x0000000000450B08 "h"
 *   insn=0x0000000000450AC8 string=0x0000000000450ACC ""
 *   insn=0x0000000000450AD8 string=0x0000000000450ADC "\t@"
 *   insn=0x0000000000450AE8 string=0x0000000000450AEC ""
 *   insn=0x0000000000450AF8 string=0x0000000000450AFC "@"
 *   insn=0x0000000000450B0C string=0x0000000000450B10 ")"
 *   insn=0x0000000000450B20 string=0x0000000000450B24 ")=G"
 *   insn=0x0000000000450B24 string=0x0000000000450B28 "!"
 *   insn=0x0000000000450B2C string=0x0000000000450B30 "\t"
 *   insn=0x0000000000450B2C string=0x0000000000450B5C "\t"
 *   insn=0x0000000000450B30 string=0x0000000000450B34 "*"
 *   insn=0x0000000000450B34 string=0x0000000000450B38 "\n"
 *   insn=0x0000000000450B3C string=0x0000000000450B40 "?"
 *   insn=0x0000000000450B40 string=0x0000000000450B44 "l"
 *   insn=0x0000000000450B54 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000450B5C string=0x0000000000450B60 "*"
 *   insn=0x0000000000450B60 string=0x0000000000450B64 "\n"
 *   insn=0x0000000000450B64 string=0x0000000000450B68 "?"
 *   insn=0x0000000000450B78 string=0x0000000000450B7C "J"
 *   insn=0x0000000000450B80 string=0x0000000000450B84 "(a"
 *   insn=0x0000000000450B90 string=0x0000000000450B94 "J=G"
 *   insn=0x0000000000450B94 string=0x0000000000450B98 ")!"
 *   insn=0x0000000000450B9C string=0x0000000000450BA0 "*"
 *   insn=0x0000000000450B9C string=0x0000000000450BD0 "*"
 *   insn=0x0000000000450BA0 string=0x0000000000450BA4 "K"
 *   insn=0x0000000000450BA4 string=0x0000000000450BA8 "+"
 *   insn=0x0000000000450BAC string=0x0000000000450BB0 "_"
 *   insn=0x0000000000450BC8 string=0x0000000000450BCC ""
 *   insn=0x0000000000450BCC string=0x0000000000450BEC "i"
 *   insn=0x0000000000450BD0 string=0x0000000000450BD4 "K"
 *   insn=0x0000000000450BD4 string=0x0000000000450BD8 "+"
 *   insn=0x0000000000450BD8 string=0x0000000000450BDC "_"
 *   insn=0x0000000000450BEC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000450BF0 string=0x0000000000450BF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  _ReadStatusReg(TPIDR_EL0);
  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D42A8;
  *a1 = v4;
  return result;
}

