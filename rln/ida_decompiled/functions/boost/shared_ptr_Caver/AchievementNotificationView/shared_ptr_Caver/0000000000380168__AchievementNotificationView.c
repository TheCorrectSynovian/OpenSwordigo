/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000380168
 * Mangled: _ZN5boost10shared_ptrIN5Caver27AchievementNotificationViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *
 * Callers: 1
 *   0x0000000000203150  boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F53D0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000380184 string=0x0000000000380188 ")"
 *   insn=0x0000000000380184 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000380188 string=0x000000000038018C ")"
 *   insn=0x0000000000380198 string=0x000000000038019C "(A"
 *   insn=0x00000000003801A0 string=0x00000000003801A4 ""
 *   insn=0x00000000003801AC string=0x00000000003801B0 "`""
 *   insn=0x00000000003801BC string=0x00000000001F53D0 "P'"
 *   insn=0x00000000003801D0 string=0x00000000003801D4 "4"
 *   insn=0x00000000003801D8 string=0x00000000003801DC ""
 *   insn=0x00000000003801E8 string=0x00000000003801EC "\t@"
 *   insn=0x00000000003801F8 string=0x00000000003801FC ""
 *   insn=0x0000000000380208 string=0x000000000038020C "@"
 *   insn=0x000000000038021C string=0x0000000000380220 "K8"
 *   insn=0x0000000000380224 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000380228 string=0x000000000038022C "h"
 *   insn=0x0000000000380228 string=0x000000000038023C "M\n"
 *   insn=0x000000000038022C string=0x0000000000380230 "!@"
 *   insn=0x0000000000380244 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000380250 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // x0

  *a1 = a2;
  a1[1] = 0;
  result = operator new(0x20u);
  *(_QWORD *)(result + 24) = a2;
  *(int64x2_t *)(result + 8) = vdupq_n_s64(1u);
  *(_QWORD *)result = &off_6CD0F8;
  a1[1] = result;
  if ( a2 )
    return boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>();
  return result;
}

