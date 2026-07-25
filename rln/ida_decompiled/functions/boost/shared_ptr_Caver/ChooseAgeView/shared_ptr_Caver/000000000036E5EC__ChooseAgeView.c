/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E5EC
 * Mangled: _ZN5boost10shared_ptrIN5Caver13ChooseAgeViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *
 * Callers: 1
 *   0x00000000001F4B40  boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200AC0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000036E608 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036E60C string=0x000000000036E610 ")QB"
 *   insn=0x000000000036E61C string=0x000000000036E620 "(A"
 *   insn=0x000000000036E624 string=0x000000000036E628 ""
 *   insn=0x000000000036E630 string=0x000000000036E634 "`""
 *   insn=0x000000000036E63C string=0x000000000036E640 " I"
 *   insn=0x000000000036E654 string=0x000000000036E658 "4"
 *   insn=0x000000000036E65C string=0x000000000036E660 ""
 *   insn=0x000000000036E66C string=0x000000000036E670 "\t@"
 *   insn=0x000000000036E67C string=0x000000000036E680 ""
 *   insn=0x000000000036E68C string=0x000000000036E690 "@"
 *   insn=0x000000000036E6A0 string=0x000000000036E6A4 "*"
 *   insn=0x000000000036E6A8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000036E6AC string=0x000000000036E6B0 "h"
 *   insn=0x000000000036E6AC string=0x000000000036E6C0 ",Q"
 *   insn=0x000000000036E6B0 string=0x000000000036E6B4 "!@"
 *   insn=0x000000000036E6C8 string=0x00000000001FD590 "0'"
 *   insn=0x000000000036E6D0 string=0x000000000036E6D4 "t@"
 *   insn=0x000000000036E6D8 string=0x000000000036E6DC ")"
 *   insn=0x000000000036E6DC string=0x000000000036E6E0 "\t"
 *   insn=0x000000000036E6E0 string=0x000000000036E6E4 ""
 *   insn=0x000000000036E6E4 string=0x000000000036E6E8 "?"
 *   insn=0x000000000036E6F0 string=0x000000000036E6F4 "("
 *   insn=0x000000000036E6F4 string=0x000000000036E6F8 "*x"
 *   insn=0x000000000036E6F8 string=0x000000000036E6FC ""
 *   insn=0x000000000036E700 string=0x000000000036E704 " "
 *   insn=0x000000000036E704 string=0x000000000036E708 "A"
 *   insn=0x000000000036E708 string=0x000000000036E710 ""
 *   insn=0x000000000036E714 string=0x000000000036E718 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CC878;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>();
  return result;
}

