/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345E44
 * Mangled: _ZN5boost10shared_ptrIN5Caver24OnlineMenuViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *
 * Callers: 2
 *   0x00000000001F8890  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *   0x0000000000345C38  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F8E00  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *   0x00000000001FD320  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(boost::shared_ptr<Caver::OnlineMenuViewController> const*,Caver::OnlineMenuViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000345E60 string=0x0000000000345E64 "\t"
 *   insn=0x0000000000345E60 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000345E64 string=0x0000000000345E68 ")"
 *   insn=0x0000000000345E74 string=0x0000000000345E78 "(A"
 *   insn=0x0000000000345E7C string=0x0000000000345E80 ""
 *   insn=0x0000000000345E88 string=0x0000000000345E8C "`""
 *   insn=0x0000000000345E94 string=0x0000000000345E98 """
 *   insn=0x0000000000345E98 string=0x00000000001FD320 "0'"
 *   insn=0x0000000000345EAC string=0x0000000000345EB0 "4"
 *   insn=0x0000000000345EB4 string=0x0000000000345EB8 ""
 *   insn=0x0000000000345EC4 string=0x0000000000345EC8 "\t@"
 *   insn=0x0000000000345ED4 string=0x0000000000345ED8 ""
 *   insn=0x0000000000345EE4 string=0x0000000000345EE8 "@"
 *   insn=0x0000000000345EF4 string=0x0000000000345EF8 "s"
 *   insn=0x0000000000345F00 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000345F04 string=0x0000000000345F08 "h"
 *   insn=0x0000000000345F08 string=0x0000000000345F0C ""
 *   insn=0x0000000000345F20 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000345F30 string=0x00000000001F8E00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB308;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>();
  return result;
}

