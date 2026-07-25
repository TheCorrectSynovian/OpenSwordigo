/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346184
 * Mangled: _ZN5boost10shared_ptrIN5Caver33OfflineAchievementsViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *
 * Callers: 2
 *   0x00000000001FA790  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *   0x0000000000345F34  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6810  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *   0x00000000001F8700  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(boost::shared_ptr<Caver::OfflineAchievementsViewController> const*,Caver::OfflineAchievementsViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000003461A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003461A4 string=0x00000000003461A8 ")"
 *   insn=0x00000000003461B4 string=0x00000000003461B8 "(A"
 *   insn=0x00000000003461BC string=0x00000000003461C0 ""
 *   insn=0x00000000003461C8 string=0x00000000003461CC "`""
 *   insn=0x00000000003461D4 string=0x00000000003461D8 "J"
 *   insn=0x00000000003461D8 string=0x00000000001F8700 "0'"
 *   insn=0x00000000003461EC string=0x00000000003461F0 "4"
 *   insn=0x00000000003461F4 string=0x00000000003461F8 ""
 *   insn=0x0000000000346204 string=0x0000000000346208 "\t@"
 *   insn=0x0000000000346214 string=0x0000000000346218 ""
 *   insn=0x0000000000346224 string=0x0000000000346228 "@"
 *   insn=0x0000000000346238 string=0x000000000034623C "D "
 *   insn=0x0000000000346240 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000346244 string=0x0000000000346248 "h"
 *   insn=0x0000000000346244 string=0x0000000000346258 "F"
 *   insn=0x0000000000346248 string=0x000000000034624C ""
 *   insn=0x0000000000346260 string=0x00000000001FD590 "0'"
 *   insn=0x000000000034626C string=0x0000000000346270 "h"
 *   insn=0x0000000000346270 string=0x00000000001F6810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CB358;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>();
  return result;
}

