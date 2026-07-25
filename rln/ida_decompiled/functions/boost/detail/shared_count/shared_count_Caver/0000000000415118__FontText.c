/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000415118
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver8FontTextEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *
 * Callers: 1
 *   0x00000000001F89A0  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000415130 string=0x0000000000415134 "+"
 *   insn=0x0000000000415134 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000415138 string=0x000000000041513C ")"
 *   insn=0x0000000000415148 string=0x000000000041514C "(A"
 *   insn=0x0000000000415150 string=0x0000000000415154 ""
 *   insn=0x0000000000415168 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000041516C string=0x0000000000415180 "|"
 *   insn=0x0000000000415170 string=0x0000000000415174 ""
 *   insn=0x0000000000415174 string=0x00000000001F8990 "0'"
 *   insn=0x0000000000415178 string=0x000000000041517C "M"
 *   insn=0x000000000041517C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000415188 string=0x000000000041518C "I"
 *   insn=0x0000000000415198 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004151A0 string=0x00000000004151A4 "j"
 *   insn=0x00000000004151A4 string=0x00000000004151A8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::FontText>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D23D8;
  *a1 = v4;
  return result;
}

