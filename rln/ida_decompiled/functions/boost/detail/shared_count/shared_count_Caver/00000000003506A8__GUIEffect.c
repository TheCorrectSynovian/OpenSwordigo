/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003506A8
 * Mangled: _ZN5boost6detail12shared_countC2IN5Caver9GUIEffectEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *
 * Callers: 1
 *   0x00000000001FFB30  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
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
 * Referenced strings: 31
 *   insn=0x00000000003506C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003506C8 string=0x00000000003506CC ")"
 *   insn=0x00000000003506D8 string=0x00000000003506DC "(A"
 *   insn=0x00000000003506E0 string=0x00000000003506E4 ""
 *   insn=0x00000000003506F8 string=0x00000000003506FC "S"
 *   insn=0x00000000003506F8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003506FC string=0x0000000000350700 "`6@"
 *   insn=0x0000000000350700 string=0x0000000000350704 "@"
 *   insn=0x0000000000350704 string=0x000000000035070C "h"
 *   insn=0x0000000000350708 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000035070C string=0x0000000000350710 "H"
 *   insn=0x0000000000350710 string=0x0000000000350714 ""
 *   insn=0x0000000000350710 string=0x0000000000350738 "`\n@"
 *   insn=0x0000000000350714 string=0x0000000000350718 ""
 *   insn=0x0000000000350718 string=0x000000000035071C ""
 *   insn=0x0000000000350720 string=0x0000000000350724 "`"
 *   insn=0x000000000035073C string=0x0000000000350740 "@"
 *   insn=0x0000000000350740 string=0x0000000000350744 ""
 *   insn=0x0000000000350744 string=0x0000000000350748 ""
 *   insn=0x000000000035074C string=0x0000000000350750 ""
 *   insn=0x0000000000350750 string=0x0000000000350754 "@"
 *   insn=0x0000000000350760 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000350770 string=0x0000000000350774 "\t\t@"
 *   insn=0x0000000000350774 string=0x0000000000350778 ")"
 *   insn=0x0000000000350778 string=0x000000000035077C "\t\t"
 *   insn=0x0000000000350780 string=0x0000000000350784 "\t"
 *   insn=0x0000000000350784 string=0x0000000000350788 ")@"
 *   insn=0x000000000035078C string=0x0000000000350790 " "
 *   insn=0x00000000003507A8 string=0x00000000003507B0 "x"
 *   insn=0x00000000003507B0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003507B4 string=0x00000000003507B8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall boost::detail::shared_count::shared_count<Caver::GUIEffect>(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int64x2_t result; // q0

  *a1 = 0;
  v4 = operator new(0x20u);
  result = vdupq_n_s64(1u);
  *(_QWORD *)(v4 + 24) = a2;
  *(int64x2_t *)(v4 + 8) = result;
  *(_QWORD *)v4 = &off_6CB6D8;
  *a1 = v4;
  return result;
}

