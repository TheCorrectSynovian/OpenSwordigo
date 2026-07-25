/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045ED50
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver7ProgramEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *
 * Callers: 1
 *   0x00000000001F38E0  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000045ED6C string=0x000000000045ED70 ")"
 *   insn=0x000000000045ED6C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045ED70 string=0x000000000045ED74 ")IG"
 *   insn=0x000000000045ED80 string=0x000000000045ED84 "(A"
 *   insn=0x000000000045ED88 string=0x000000000045ED8C ""
 *   insn=0x000000000045EDA0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000045EDA4 string=0x000000000045EDB8 "n"
 *   insn=0x000000000045EDA8 string=0x000000000045EDAC "q"
 *   insn=0x000000000045EDB0 string=0x000000000045EDB4 "?a"
 *   insn=0x000000000045EDB4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045EDC0 string=0x000000000045EDC4 ";a"
 *   insn=0x000000000045EDD0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000045EDD8 string=0x000000000045EDDC "\"
 *   insn=0x000000000045EDDC string=0x000000000045EDE0 "4a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Program>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6D47A8;
  *a1 = v4;
  return result;
}

