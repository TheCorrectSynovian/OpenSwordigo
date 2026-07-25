/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037F650
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver11AchievementEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *
 * Callers: 1
 *   0x00000000001F8960  boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8B40  Caver::Achievement::~Achievement()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000037F66C string=0x000000000037F670 ")"
 *   insn=0x000000000037F66C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037F670 string=0x000000000037F674 ")%G"
 *   insn=0x000000000037F680 string=0x000000000037F684 "(A"
 *   insn=0x000000000037F688 string=0x000000000037F68C ""
 *   insn=0x000000000037F6A0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000037F6A4 string=0x000000000037F6B8 "."
 *   insn=0x000000000037F6A8 string=0x000000000037F6AC "%"
 *   insn=0x000000000037F6AC string=0x00000000001F8B40 "0'"
 *   insn=0x000000000037F6B4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037F6D0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000037F6D4 string=0x000000000037F6D8 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::Achievement>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CD0A8;
  *a1 = v4;
  return result;
}

