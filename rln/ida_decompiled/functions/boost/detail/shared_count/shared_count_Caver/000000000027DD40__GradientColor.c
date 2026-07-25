/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DD40
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver13GradientColorEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *
 * Callers: 1
 *   0x0000000000200CB0  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
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
 * Referenced strings: 21
 *   insn=0x000000000027DD58 string=0x000000000027DD5C "!"
 *   insn=0x000000000027DD5C string=0x000000000027DD60 "I#"
 *   insn=0x000000000027DD5C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027DD60 string=0x000000000027DD64 ")"
 *   insn=0x000000000027DD70 string=0x000000000027DD74 "(A"
 *   insn=0x000000000027DD78 string=0x000000000027DD7C ""
 *   insn=0x000000000027DD90 string=0x000000000027DD94 "3"
 *   insn=0x000000000027DD90 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000027DD94 string=0x000000000027DD98 "`\n@"
 *   insn=0x000000000027DD94 string=0x000000000027DDB8 "n"
 *   insn=0x000000000027DD98 string=0x000000000027DD9C "@"
 *   insn=0x000000000027DD9C string=0x000000000027DDA0 "p"
 *   insn=0x000000000027DD9C string=0x000000000027DDA4 "`"
 *   insn=0x000000000027DDA0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000027DDA4 string=0x000000000027DDA8 "@"
 *   insn=0x000000000027DDA8 string=0x000000000027DDAC "m"
 *   insn=0x000000000027DDB0 string=0x000000000027DDB4 "?"
 *   insn=0x000000000027DDB4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027DDC0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000027DDC8 string=0x000000000027DDCC "`A"
 *   insn=0x000000000027DDCC string=0x000000000027DDD0 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GradientColor>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6BF948;
  *a1 = v4;
  return result;
}

