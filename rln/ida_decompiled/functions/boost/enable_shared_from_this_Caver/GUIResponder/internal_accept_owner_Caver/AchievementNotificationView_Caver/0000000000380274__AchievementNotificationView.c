/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000380274
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_27AchievementNotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *
 * Callers: 1
 *   0x00000000001F53D0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *
 * Callees: 3
 *   0x00000000001F5190  .memcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x0000000000380284 string=0x0000000000380288 "`"
 *   insn=0x0000000000380288 string=0x000000000038028C ""
 *   insn=0x0000000000380288 string=0x0000000000380294 "3"
 *   insn=0x000000000038028C string=0x0000000000380290 "h"
 *   insn=0x0000000000380298 string=0x000000000038029C "h"
 *   insn=0x000000000038029C string=0x00000000003802A0 ""
 *   insn=0x00000000003802A0 string=0x00000000003802A4 "h"
 *   insn=0x00000000003802B4 string=0x00000000003802B8 "h\n@"
 *   insn=0x00000000003802B8 string=0x00000000003802BC ""
 *   insn=0x00000000003802BC string=0x00000000003802C0 "h\n"
 *   insn=0x00000000003802C4 string=0x00000000003802C8 "@"
 *   insn=0x00000000003802C8 string=0x00000000003802CC ""
 *   insn=0x00000000003802CC string=0x00000000003802D0 ""
 *   insn=0x00000000003802D4 string=0x00000000003802D8 ""
 *   insn=0x00000000003802D8 string=0x00000000003802DC "@"
 *   insn=0x00000000003802E8 string=0x00000000003802EC "h"
 *   insn=0x00000000003802EC string=0x00000000003802F0 ""
 *   insn=0x00000000003802F0 string=0x00000000003802F4 "h"
 *   insn=0x00000000003802F4 string=0x00000000003802F8 "!"
 *   insn=0x00000000003802F8 string=0x00000000003802FC "h"
 *   insn=0x0000000000380300 string=0x0000000000380304 "\t@"
 *   insn=0x0000000000380308 string=0x000000000038030C "h\n@"
 *   insn=0x000000000038030C string=0x0000000000380310 ""
 *   insn=0x0000000000380310 string=0x0000000000380314 "h\n"
 *   insn=0x0000000000380318 string=0x0000000000380328 "h"
 *   insn=0x0000000000380338 string=0x000000000038033C " "
 *   insn=0x0000000000380340 string=0x0000000000380344 "3"
 *   insn=0x0000000000380344 string=0x0000000000380348 "h"
 *   insn=0x0000000000380348 string=0x000000000038034C ""
 *   insn=0x000000000038034C string=0x0000000000380350 "h"
 *   insn=0x0000000000380354 string=0x0000000000380358 "h"
 *   insn=0x0000000000380358 string=0x000000000038035C "\t@"
 *   insn=0x0000000000380364 string=0x0000000000380368 "h\n@"
 *   insn=0x0000000000380368 string=0x000000000038036C ""
 *   insn=0x000000000038036C string=0x0000000000380370 "h\n"
 *   insn=0x0000000000380374 string=0x0000000000380378 "h"
 *   insn=0x0000000000380378 string=0x000000000038037C "@"
 *   insn=0x0000000000380388 string=0x000000000038038C "N"
 *   insn=0x00000000003803D4 string=0x00000000003803D8 "@"
 *   insn=0x00000000003803DC string=0x00000000003803E0 ""
 *   insn=0x00000000003803E8 string=0x00000000003803EC "i"
 *   insn=0x00000000003803EC string=0x00000000001F5190 "P'"
 *   insn=0x00000000003803F0 string=0x00000000003803F4 "@"
 *   insn=0x00000000003803F4 string=0x00000000003803F8 "Hc"
 *   insn=0x00000000003803F4 string=0x000000000038041C "HC"
 *   insn=0x0000000000380400 string=0x0000000000380404 "\n"
 *   insn=0x0000000000380448 string=0x000000000038044C ""
 *   insn=0x000000000038044C string=0x0000000000380450 ")"
 *   insn=0x0000000000380454 string=0x0000000000380458 """
 *   insn=0x0000000000380458 string=0x000000000038045C "M"
 *   insn=0x000000000038045C string=0x0000000000380460 "`"
 *   insn=0x0000000000380460 string=0x0000000000380464 "@"
 *   insn=0x0000000000380464 string=0x0000000000380468 "\n"
 *   insn=0x0000000000380484 string=0x0000000000380488 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

