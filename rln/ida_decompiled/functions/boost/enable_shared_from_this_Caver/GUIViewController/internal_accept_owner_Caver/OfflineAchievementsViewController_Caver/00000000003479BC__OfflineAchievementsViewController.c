/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003479BC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_33OfflineAchievementsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(boost::shared_ptr<Caver::OfflineAchievementsViewController> const*,Caver::OfflineAchievementsViewController *)
 *
 * Callers: 1
 *   0x00000000001F8700  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(boost::shared_ptr<Caver::OfflineAchievementsViewController> const*,Caver::OfflineAchievementsViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000003479CC string=0x00000000003479D0 "`"
 *   insn=0x00000000003479D0 string=0x00000000003479D4 ""
 *   insn=0x00000000003479D0 string=0x00000000003479DC "3"
 *   insn=0x00000000003479D4 string=0x00000000003479D8 "h"
 *   insn=0x00000000003479E0 string=0x00000000003479E4 "h"
 *   insn=0x00000000003479E4 string=0x00000000003479E8 ""
 *   insn=0x00000000003479E8 string=0x00000000003479EC "h"
 *   insn=0x00000000003479FC string=0x0000000000347A00 "h\n@"
 *   insn=0x0000000000347A00 string=0x0000000000347A04 ""
 *   insn=0x0000000000347A04 string=0x0000000000347A08 "h\n"
 *   insn=0x0000000000347A0C string=0x0000000000347A10 "@"
 *   insn=0x0000000000347A10 string=0x0000000000347A14 ""
 *   insn=0x0000000000347A14 string=0x0000000000347A18 ""
 *   insn=0x0000000000347A1C string=0x0000000000347A20 ""
 *   insn=0x0000000000347A20 string=0x0000000000347A24 "@"
 *   insn=0x0000000000347A30 string=0x0000000000347A34 "h"
 *   insn=0x0000000000347A34 string=0x0000000000347A38 ""
 *   insn=0x0000000000347A38 string=0x0000000000347A3C "h"
 *   insn=0x0000000000347A3C string=0x0000000000347A40 "!"
 *   insn=0x0000000000347A40 string=0x0000000000347A44 "h"
 *   insn=0x0000000000347A48 string=0x0000000000347A4C "\t@"
 *   insn=0x0000000000347A50 string=0x0000000000347A54 "h\n@"
 *   insn=0x0000000000347A54 string=0x0000000000347A58 ""
 *   insn=0x0000000000347A58 string=0x0000000000347A5C "h\n"
 *   insn=0x0000000000347A60 string=0x0000000000347A70 "h"
 *   insn=0x0000000000347A80 string=0x0000000000347A84 " "
 *   insn=0x0000000000347A88 string=0x0000000000347A8C "3"
 *   insn=0x0000000000347A8C string=0x0000000000347A90 "h"
 *   insn=0x0000000000347A90 string=0x0000000000347A94 ""
 *   insn=0x0000000000347A94 string=0x0000000000347A98 "h"
 *   insn=0x0000000000347A9C string=0x0000000000347AA0 "h"
 *   insn=0x0000000000347AA0 string=0x0000000000347AA4 "\t@"
 *   insn=0x0000000000347AAC string=0x0000000000347AB0 "h\n@"
 *   insn=0x0000000000347AB0 string=0x0000000000347AB4 ""
 *   insn=0x0000000000347AB4 string=0x0000000000347AB8 "h\n"
 *   insn=0x0000000000347ABC string=0x0000000000347AC0 "h"
 *   insn=0x0000000000347AC0 string=0x0000000000347AC4 "@"
 *   insn=0x0000000000347AD0 string=0x0000000000347AD4 "|"
 *   insn=0x0000000000347ADC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(
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

