/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003860E0
 * Mangled: _ZN5boost10shared_ptrIN5Caver23OfflineAchievementsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *
 * Callers: 1
 *   0x00000000001FCA00  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9500  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(boost::shared_ptr<Caver::OfflineAchievementsView> const*,Caver::OfflineAchievementsView *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000003860F8 string=0x00000000003860FC "9"
 *   insn=0x00000000003860FC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000386100 string=0x0000000000386104 ")"
 *   insn=0x0000000000386110 string=0x0000000000386114 "(A"
 *   insn=0x0000000000386118 string=0x000000000038611C ""
 *   insn=0x0000000000386124 string=0x0000000000386128 "`""
 *   insn=0x0000000000386134 string=0x00000000001F9500 "0'"
 *   insn=0x0000000000386148 string=0x000000000038614C "4"
 *   insn=0x0000000000386150 string=0x0000000000386154 ""
 *   insn=0x0000000000386160 string=0x0000000000386164 "\t@"
 *   insn=0x0000000000386170 string=0x0000000000386174 ""
 *   insn=0x0000000000386180 string=0x0000000000386184 "@"
 *   insn=0x0000000000386194 string=0x0000000000386198 "m "
 *   insn=0x000000000038619C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003861A0 string=0x00000000003861A4 "h"
 *   insn=0x00000000003861A0 string=0x00000000003861B4 "o"
 *   insn=0x00000000003861A4 string=0x00000000003861A8 "!@"
 *   insn=0x00000000003861BC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003861C4 string=0x00000000003861C8 ":"
 *   insn=0x00000000003861C8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CD3D8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>();
  return result;
}

