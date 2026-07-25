/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345F34
 * Mangled: _ZN5Caver22GameMenuViewController38SettingsViewDidShowOfflineAchievementsEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000001F6810  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7CE0  Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(void)
 *   0x00000000001FA790  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000346184  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000345F44 string=0x0000000000345F48 "U"
 *   insn=0x0000000000345F5C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000345F60 string=0x0000000000345F64 "_"
 *   insn=0x0000000000345F64 string=0x00000000001F7CE0 "0'"
 *   insn=0x0000000000345F6C string=0x0000000000345F70 ""
 *   insn=0x0000000000345F70 string=0x0000000000345F74 "h"
 *   insn=0x0000000000345F70 string=0x00000000001FA790 "0'"
 *   insn=0x0000000000345F7C string=0x0000000000345F80 "+"
 *   insn=0x0000000000345F7C string=0x0000000000345F8C "T)@"
 *   insn=0x0000000000345F80 string=0x0000000000345F84 "k"
 *   insn=0x0000000000345F84 string=0x0000000000345F88 "+"
 *   insn=0x0000000000345F8C string=0x0000000000345F90 "H"
 *   insn=0x0000000000345F90 string=0x0000000000345F94 "4"
 *   insn=0x0000000000345F94 string=0x0000000000345FD8 "h"
 *   insn=0x0000000000345F98 string=0x0000000000345F9C ""
 *   insn=0x0000000000345FA8 string=0x0000000000345FAC "\t@"
 *   insn=0x0000000000345FB8 string=0x0000000000345FBC ""
 *   insn=0x0000000000345FC8 string=0x0000000000345FCC "@"
 *   insn=0x0000000000345FDC string=0x0000000000345FE0 ")@"
 *   insn=0x0000000000345FE8 string=0x0000000000345FEC "*"
 *   insn=0x0000000000345FEC string=0x0000000000345FF0 "J"
 *   insn=0x0000000000345FF0 string=0x0000000000345FF4 "*"
 *   insn=0x0000000000346004 string=0x0000000000346008 "3"
 *   insn=0x0000000000346008 string=0x000000000034600C "h"
 *   insn=0x000000000034600C string=0x0000000000346010 ""
 *   insn=0x0000000000346010 string=0x0000000000346014 "h"
 *   insn=0x0000000000346018 string=0x000000000034601C "h"
 *   insn=0x000000000034601C string=0x0000000000346020 "\t@"
 *   insn=0x0000000000346028 string=0x000000000034602C "h\n@"
 *   insn=0x000000000034602C string=0x0000000000346030 ""
 *   insn=0x0000000000346030 string=0x0000000000346034 "h\n"
 *   insn=0x0000000000346038 string=0x000000000034603C "h"
 *   insn=0x000000000034603C string=0x0000000000346040 "@"
 *   insn=0x000000000034604C string=0x0000000000346050 "3"
 *   insn=0x0000000000346050 string=0x0000000000346054 "h"
 *   insn=0x0000000000346054 string=0x0000000000346058 ""
 *   insn=0x0000000000346058 string=0x000000000034605C "h"
 *   insn=0x0000000000346060 string=0x0000000000346064 "h"
 *   insn=0x0000000000346068 string=0x000000000034606C "\t@"
 *   insn=0x0000000000346070 string=0x0000000000346074 "h\n@"
 *   insn=0x0000000000346074 string=0x0000000000346078 ""
 *   insn=0x0000000000346078 string=0x000000000034607C "h\n"
 *   insn=0x0000000000346080 string=0x0000000000346084 "h"
 *   insn=0x0000000000346088 string=0x000000000034608C "@"
 *   insn=0x00000000003460B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003460C8 string=0x00000000003460CC "&"
 *   insn=0x00000000003460D4 string=0x00000000003460D8 "4"
 *   insn=0x00000000003460DC string=0x00000000003460E0 ""
 *   insn=0x00000000003460EC string=0x00000000003460F0 "\t@"
 *   insn=0x00000000003460FC string=0x0000000000346100 ""
 *   insn=0x000000000034610C string=0x0000000000346110 "@"
 *   insn=0x000000000034611C string=0x0000000000346120 "4"
 *   insn=0x0000000000346124 string=0x0000000000346128 ""
 *   insn=0x0000000000346134 string=0x0000000000346138 "\t@"
 *   insn=0x0000000000346144 string=0x0000000000346148 ""
 *   insn=0x0000000000346154 string=0x0000000000346158 "@"
 *   insn=0x0000000000346168 string=0x000000000034616C "x "
 *   insn=0x0000000000346174 string=0x0000000000346178 "N"
 *   insn=0x0000000000346178 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  Caver::OfflineAchievementsViewController *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x10
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 (__fastcall *v10)(Caver::GameMenuViewController *, __int64 *); // x8
  __int64 result; // x0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v19; // [xsp+10h] [xbp-40h]
  __int64 v20; // [xsp+18h] [xbp-38h]
  _QWORD *v21; // [xsp+20h] [xbp-30h]
  __int64 v22; // [xsp+28h] [xbp-28h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (Caver::OfflineAchievementsViewController *)operator new(0x68u);
  Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(v3);
  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>();
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)this + 18);
  v6 = v20;
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = *(_QWORD **)(v6 + 80);
  *(_QWORD *)(v6 + 72) = v4;
  *(_QWORD *)(v6 + 80) = v5;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = *(__int64 (__fastcall **)(Caver::GameMenuViewController *, __int64 *))(*(_QWORD *)this + 80LL);
  v18 = v20;
  v19 = v21;
  if ( v21 )
    ++v21[1];
  result = v10(this, &v18);
  v12 = v19;
  if ( v19 )
  {
    v13 = v19[1] - 1LL;
    v19[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = v21;
  if ( v21 )
  {
    v16 = v21[1] - 1LL;
    v21[1] = v16;
    if ( !v16 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  return result;
}

