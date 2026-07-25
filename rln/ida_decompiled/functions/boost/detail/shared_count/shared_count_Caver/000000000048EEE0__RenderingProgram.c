/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048EEE0
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver16RenderingProgramEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *
 * Callers: 1
 *   0x00000000001F79D0  boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203C40  Caver::RenderingProgram::~RenderingProgram()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000048EEFC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000048EF00 string=0x000000000048EF04 ")"
 *   insn=0x000000000048EF10 string=0x000000000048EF14 "(A"
 *   insn=0x000000000048EF18 string=0x000000000048EF1C ""
 *   insn=0x000000000048EF30 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000048EF34 string=0x000000000048EF48 "\n"
 *   insn=0x000000000048EF38 string=0x000000000048EF3C "A"
 *   insn=0x000000000048EF44 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048EF60 string=0x00000000001FD590 "0'"
 *   insn=0x000000000048EF64 string=0x000000000048EF68 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::RenderingProgram>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D55B8;
  *a1 = v4;
  return result;
}

