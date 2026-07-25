/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAC0C
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver14GUIRoundedRectEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *
 * Callers: 1
 *   0x00000000001F7380  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
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
 * Referenced strings: 36
 *   insn=0x00000000004AAC24 string=0x00000000004AAC28 "n*"
 *   insn=0x00000000004AAC28 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004AAC2C string=0x00000000004AAC30 ")iB"
 *   insn=0x00000000004AAC3C string=0x00000000004AAC40 "(A"
 *   insn=0x00000000004AAC44 string=0x00000000004AAC48 ""
 *   insn=0x00000000004AAC5C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004AAC60 string=0x00000000004AAC64 "`F@"
 *   insn=0x00000000004AAC68 string=0x00000000004AAC6C "`:@"
 *   insn=0x00000000004AAC70 string=0x00000000004AAC74 "`*@"
 *   insn=0x00000000004AAC78 string=0x00000000004AAC98 "@"
 *   insn=0x00000000004AAC7C string=0x00000000004AACB4 "`"
 *   insn=0x00000000004AAC80 string=0x00000000004AAC84 "`:@"
 *   insn=0x00000000004AAC80 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004AAC84 string=0x00000000004AAC88 "`"
 *   insn=0x00000000004AAC8C string=0x00000000004AAC90 "`*@"
 *   insn=0x00000000004AAC98 string=0x00000000004AAC9C ""
 *   insn=0x00000000004AAC9C string=0x00000000004AACA0 ""
 *   insn=0x00000000004AACA4 string=0x00000000004AACA8 ""
 *   insn=0x00000000004AACA8 string=0x00000000004AACAC ""
 *   insn=0x00000000004AACB8 string=0x00000000004AACBC "@"
 *   insn=0x00000000004AACBC string=0x00000000004AACC0 ""
 *   insn=0x00000000004AACC0 string=0x00000000004AACC4 ""
 *   insn=0x00000000004AACC8 string=0x00000000004AACCC ""
 *   insn=0x00000000004AACCC string=0x00000000004AACD0 ""
 *   insn=0x00000000004AACD8 string=0x00000000004AACDC "u1"
 *   insn=0x00000000004AACDC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004AACF0 string=0x00000000004AACF4 "("
 *   insn=0x00000000004AACF4 string=0x00000000004AACF8 "\t\t@"
 *   insn=0x00000000004AACF8 string=0x00000000004AACFC ")"
 *   insn=0x00000000004AACFC string=0x00000000004AAD00 "\t\t"
 *   insn=0x00000000004AAD04 string=0x00000000004AAD08 "\t"
 *   insn=0x00000000004AAD08 string=0x00000000004AAD0C ")"
 *   insn=0x00000000004AAD10 string=0x00000000004AAD14 " "
 *   insn=0x00000000004AAD18 string=0x00000000004AAD1C "e1"
 *   insn=0x00000000004AAD2C string=0x00000000001FD590 "0'"
 *   insn=0x00000000004AAD38 string=0x00000000004AAD3C "]1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D6DC8;
  *a1 = v4;
  return result;
}

