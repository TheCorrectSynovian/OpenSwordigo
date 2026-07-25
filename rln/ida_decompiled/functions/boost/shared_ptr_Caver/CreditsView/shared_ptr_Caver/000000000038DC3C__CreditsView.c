/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038DC3C
 * Mangled: _ZN5boost10shared_ptrIN5Caver11CreditsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *
 * Callers: 2
 *   0x00000000001FBB80  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *   0x000000000038DB04  Caver::CreditsViewController::~CreditsViewController()
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202110  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*,Caver::CreditsView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000038DC54 string=0x000000000038DC58 "b"
 *   insn=0x000000000038DC58 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000038DC5C string=0x000000000038DC60 ")"
 *   insn=0x000000000038DC6C string=0x000000000038DC70 "(A"
 *   insn=0x000000000038DC74 string=0x000000000038DC78 ""
 *   insn=0x000000000038DC80 string=0x000000000038DC84 "`""
 *   insn=0x000000000038DC8C string=0x000000000038DC90 " "
 *   insn=0x000000000038DCA4 string=0x000000000038DCA8 "4"
 *   insn=0x000000000038DCAC string=0x000000000038DCB0 ""
 *   insn=0x000000000038DCBC string=0x000000000038DCC0 "\t@"
 *   insn=0x000000000038DCCC string=0x000000000038DCD0 ""
 *   insn=0x000000000038DCDC string=0x000000000038DCE0 "@"
 *   insn=0x000000000038DCF4 string=0x000000000038DCF8 ":"
 *   insn=0x000000000038DCF8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000038DCFC string=0x000000000038DD00 "h"
 *   insn=0x000000000038DD00 string=0x000000000038DD04 "!@"
 *   insn=0x000000000038DD18 string=0x00000000001FD590 "0'"
 *   insn=0x000000000038DD20 string=0x000000000038DD24 "c"
 *   insn=0x000000000038DD24 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CDCF8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>();
  return result;
}

