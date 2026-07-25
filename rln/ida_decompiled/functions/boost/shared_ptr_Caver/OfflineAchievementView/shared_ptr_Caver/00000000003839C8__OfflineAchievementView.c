/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003839C8
 * Mangled: _ZN5boost10shared_ptrIN5Caver22OfflineAchievementViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *
 * Callers: 2
 *   0x0000000000203660  boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FA440  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000003839E4 string=0x00000000003839E8 "\t"
 *   insn=0x00000000003839E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003839E8 string=0x00000000003839EC ")"
 *   insn=0x00000000003839F8 string=0x00000000003839FC "(A"
 *   insn=0x0000000000383A00 string=0x0000000000383A04 ""
 *   insn=0x0000000000383A0C string=0x0000000000383A10 "`""
 *   insn=0x0000000000383A1C string=0x00000000001FA440 "0'"
 *   insn=0x0000000000383A30 string=0x0000000000383A34 "4"
 *   insn=0x0000000000383A38 string=0x0000000000383A3C ""
 *   insn=0x0000000000383A48 string=0x0000000000383A4C "\t@"
 *   insn=0x0000000000383A58 string=0x0000000000383A5C ""
 *   insn=0x0000000000383A68 string=0x0000000000383A6C "@"
 *   insn=0x0000000000383A7C string=0x0000000000383A80 "3*"
 *   insn=0x0000000000383A84 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000383A88 string=0x0000000000383A8C "h"
 *   insn=0x0000000000383A88 string=0x0000000000383A9C "5"
 *   insn=0x0000000000383A8C string=0x0000000000383A90 "!@"
 *   insn=0x0000000000383AA4 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000383AAC string=0x0000000000383AB0 ""
 *   insn=0x0000000000383AB4 string=0x0000000000383AC4 ""
 *   insn=0x0000000000383AB8 string=0x0000000000383ABC ")"
 *   insn=0x0000000000383ABC string=0x0000000000383AC0 "\t"
 *   insn=0x0000000000383ACC string=0x0000000000383AD0 ")"
 *   insn=0x0000000000383AD0 string=0x0000000000383AD4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CD2F8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>();
  return result;
}

