/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003861EC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_23OfflineAchievementsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(boost::shared_ptr<Caver::OfflineAchievementsView> const*,Caver::OfflineAchievementsView *)
 *
 * Callers: 1
 *   0x00000000001F9500  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(boost::shared_ptr<Caver::OfflineAchievementsView> const*,Caver::OfflineAchievementsView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003861FC string=0x0000000000386200 "`"
 *   insn=0x0000000000386200 string=0x0000000000386204 ""
 *   insn=0x0000000000386200 string=0x000000000038620C "3"
 *   insn=0x0000000000386204 string=0x0000000000386208 "h"
 *   insn=0x0000000000386210 string=0x0000000000386214 "h"
 *   insn=0x0000000000386214 string=0x0000000000386218 ""
 *   insn=0x0000000000386218 string=0x000000000038621C "h"
 *   insn=0x000000000038622C string=0x0000000000386230 "h\n@"
 *   insn=0x0000000000386230 string=0x0000000000386234 ""
 *   insn=0x0000000000386234 string=0x0000000000386238 "h\n"
 *   insn=0x000000000038623C string=0x0000000000386240 "@"
 *   insn=0x0000000000386240 string=0x0000000000386244 ""
 *   insn=0x0000000000386244 string=0x0000000000386248 ""
 *   insn=0x000000000038624C string=0x0000000000386250 ""
 *   insn=0x0000000000386250 string=0x0000000000386254 "@"
 *   insn=0x0000000000386260 string=0x0000000000386264 "h"
 *   insn=0x0000000000386264 string=0x0000000000386268 ""
 *   insn=0x0000000000386268 string=0x000000000038626C "h"
 *   insn=0x000000000038626C string=0x0000000000386270 "!"
 *   insn=0x0000000000386270 string=0x0000000000386274 "h"
 *   insn=0x0000000000386278 string=0x000000000038627C "\t@"
 *   insn=0x0000000000386280 string=0x0000000000386284 "h\n@"
 *   insn=0x0000000000386284 string=0x0000000000386288 ""
 *   insn=0x0000000000386288 string=0x000000000038628C "h\n"
 *   insn=0x0000000000386290 string=0x00000000003862A0 "h"
 *   insn=0x00000000003862B0 string=0x00000000003862B4 " "
 *   insn=0x00000000003862B8 string=0x00000000003862BC "3"
 *   insn=0x00000000003862BC string=0x00000000003862C0 "h"
 *   insn=0x00000000003862C0 string=0x00000000003862C4 ""
 *   insn=0x00000000003862C4 string=0x00000000003862C8 "h"
 *   insn=0x00000000003862CC string=0x00000000003862D0 "h"
 *   insn=0x00000000003862D0 string=0x00000000003862D4 "\t@"
 *   insn=0x00000000003862DC string=0x00000000003862E0 "h\n@"
 *   insn=0x00000000003862E0 string=0x00000000003862E4 ""
 *   insn=0x00000000003862E4 string=0x00000000003862E8 "h\n"
 *   insn=0x00000000003862EC string=0x00000000003862F0 "h"
 *   insn=0x00000000003862F0 string=0x00000000003862F4 "@"
 *   insn=0x0000000000386300 string=0x0000000000386304 "p"
 *   insn=0x0000000000386318 string=0x000000000038631C "_"
 *   insn=0x0000000000386324 string=0x0000000000386328 ""
 *   insn=0x0000000000386324 string=0x000000000038633C "_"
 *   insn=0x0000000000386328 string=0x000000000038632C ""
 *   insn=0x0000000000386330 string=0x0000000000386334 "h"
 *   insn=0x0000000000386340 string=0x0000000000386358 "_"
 *   insn=0x0000000000386344 string=0x0000000000386348 "h\n"
 *   insn=0x000000000038634C string=0x0000000000386350 "`"
 *   insn=0x000000000038635C string=0x0000000000386360 "_"
 *   insn=0x0000000000386360 string=0x0000000000386364 "!"
 *   insn=0x0000000000386364 string=0x0000000000386368 "h"
 *   insn=0x000000000038636C string=0x0000000000386370 ""
 *   insn=0x0000000000386374 string=0x0000000000386378 "*"
 *   insn=0x0000000000386378 string=0x000000000038637C "!PD"
 *   insn=0x000000000038637C string=0x0000000000386380 "_"
 *   insn=0x000000000038637C string=0x0000000000590AC0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver33OfflineAchievementsViewControllerEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000386380 string=0x0000000000386384 " "
 *   insn=0x0000000000386384 string=0x0000000000386388 "f"
 *   insn=0x0000000000386388 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(
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

