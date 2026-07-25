/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036F8A0
 * Mangled: _ZN5Caver22MainMenuViewController38MainMenuViewDidShowOfflineAchievementsEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000002038C0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7CE0  Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(void)
 *   0x00000000001FA790  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036FA88  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000036F8B0 string=0x000000000036F8B4 "U"
 *   insn=0x000000000036F8C4 string=0x000000000036F8C8 "F"
 *   insn=0x000000000036F8C8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036F8D0 string=0x00000000001F7CE0 "0'"
 *   insn=0x000000000036F8DC string=0x000000000036F8E0 "h"
 *   insn=0x000000000036F8DC string=0x00000000001FA790 "0'"
 *   insn=0x000000000036F8E4 string=0x000000000036F8E8 ")@"
 *   insn=0x000000000036F8F0 string=0x000000000036F8F4 "*"
 *   insn=0x000000000036F8F4 string=0x000000000036F8F8 "J"
 *   insn=0x000000000036F8F8 string=0x000000000036F8FC "*"
 *   insn=0x000000000036F90C string=0x000000000036F910 "3"
 *   insn=0x000000000036F910 string=0x000000000036F914 "h"
 *   insn=0x000000000036F914 string=0x000000000036F918 ""
 *   insn=0x000000000036F918 string=0x000000000036F91C "h"
 *   insn=0x000000000036F920 string=0x000000000036F924 "h"
 *   insn=0x000000000036F924 string=0x000000000036F928 "\t@"
 *   insn=0x000000000036F930 string=0x000000000036F934 "h\n@"
 *   insn=0x000000000036F934 string=0x000000000036F938 ""
 *   insn=0x000000000036F938 string=0x000000000036F93C "h\n"
 *   insn=0x000000000036F940 string=0x000000000036F944 "h"
 *   insn=0x000000000036F944 string=0x000000000036F948 "@"
 *   insn=0x000000000036F954 string=0x000000000036F958 "3"
 *   insn=0x000000000036F958 string=0x000000000036F95C "h"
 *   insn=0x000000000036F95C string=0x000000000036F960 ""
 *   insn=0x000000000036F960 string=0x000000000036F964 "h"
 *   insn=0x000000000036F968 string=0x000000000036F96C "h"
 *   insn=0x000000000036F970 string=0x000000000036F974 "\t@"
 *   insn=0x000000000036F978 string=0x000000000036F97C "h\n@"
 *   insn=0x000000000036F97C string=0x000000000036F980 ""
 *   insn=0x000000000036F980 string=0x000000000036F984 "h\n"
 *   insn=0x000000000036F988 string=0x000000000036F98C "h"
 *   insn=0x000000000036F990 string=0x000000000036F994 "@"
 *   insn=0x000000000036F9A8 string=0x000000000036F9C0 "D"
 *   insn=0x000000000036F9C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036F9CC string=0x000000000036F9D0 "&"
 *   insn=0x000000000036F9D8 string=0x000000000036F9DC "4"
 *   insn=0x000000000036F9E0 string=0x000000000036F9E4 ""
 *   insn=0x000000000036F9F0 string=0x000000000036F9F4 "\t@"
 *   insn=0x000000000036FA00 string=0x000000000036FA04 ""
 *   insn=0x000000000036FA10 string=0x000000000036FA14 "@"
 *   insn=0x000000000036FA20 string=0x000000000036FA24 "4"
 *   insn=0x000000000036FA28 string=0x000000000036FA2C ""
 *   insn=0x000000000036FA38 string=0x000000000036FA3C "\t@"
 *   insn=0x000000000036FA48 string=0x000000000036FA4C ""
 *   insn=0x000000000036FA58 string=0x000000000036FA5C "@"
 *   insn=0x000000000036FA6C string=0x000000000036FA70 "7z"
 *   insn=0x000000000036FA78 string=0x000000000036FA7C ""
 *   insn=0x000000000036FA7C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  Caver::OfflineAchievementsViewController *v3; // x0
  __int64 (__fastcall *v4)(Caver::MainMenuViewController *, __int64 *); // x8
  __int64 result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v13; // [xsp+10h] [xbp-40h]
  __int64 v14; // [xsp+18h] [xbp-38h]
  _QWORD *v15; // [xsp+20h] [xbp-30h]
  __int64 v16; // [xsp+28h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::OfflineAchievementsViewController *)operator new(0x68u);
  Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(v3);
  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>();
  v4 = *(__int64 (__fastcall **)(Caver::MainMenuViewController *, __int64 *))(*(_QWORD *)this + 80LL);
  v12 = v14;
  v13 = v15;
  if ( v15 )
    ++v15[1];
  result = v4(this, &v12);
  v6 = v13;
  if ( v13 )
  {
    v7 = v13[1] - 1LL;
    v13[1] = v7;
    if ( !v7 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = v15;
  if ( v15 )
  {
    v10 = v15[1] - 1LL;
    v15[1] = v10;
    if ( !v10 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      v11 = v9[2] - 1LL;
      v9[2] = v11;
      if ( !v11 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
    }
  }
  return result;
}

