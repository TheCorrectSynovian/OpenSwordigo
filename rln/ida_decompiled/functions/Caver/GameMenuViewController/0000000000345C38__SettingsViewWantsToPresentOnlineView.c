/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345C38
 * Mangled: _ZN5Caver22GameMenuViewController36SettingsViewWantsToPresentOnlineViewEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000001F8E00  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *
 * Callees: 9
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8890  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *   0x00000000001FBC40  .memset
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000345E44  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x0000000000345C48 string=0x0000000000345C4C "U"
 *   insn=0x0000000000345C5C string=0x0000000000345C60 "`"
 *   insn=0x0000000000345C60 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000345C70 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000345C78 string=0x0000000000345C7C ""
 *   insn=0x0000000000345C78 string=0x00000000001F40B0 "P'"
 *   insn=0x0000000000345C7C string=0x0000000000345C80 ""
 *   insn=0x0000000000345C8C string=0x0000000000345C90 "A"
 *   insn=0x0000000000345C98 string=0x0000000000345C9C "`"
 *   insn=0x0000000000345C98 string=0x00000000001F8890 "0'"
 *   insn=0x0000000000345CA0 string=0x0000000000345CA4 ""
 *   insn=0x0000000000345CA4 string=0x0000000000345CA8 ")@"
 *   insn=0x0000000000345CB0 string=0x0000000000345CB4 "*"
 *   insn=0x0000000000345CB4 string=0x0000000000345CB8 "J"
 *   insn=0x0000000000345CB8 string=0x0000000000345CBC "*"
 *   insn=0x0000000000345CC8 string=0x0000000000345CCC "3"
 *   insn=0x0000000000345CCC string=0x0000000000345CD0 "h"
 *   insn=0x0000000000345CD0 string=0x0000000000345CD4 ""
 *   insn=0x0000000000345CD4 string=0x0000000000345CD8 "h"
 *   insn=0x0000000000345CDC string=0x0000000000345CE0 "h"
 *   insn=0x0000000000345CE0 string=0x0000000000345CE4 "\t@"
 *   insn=0x0000000000345CEC string=0x0000000000345CF0 "h\n@"
 *   insn=0x0000000000345CF0 string=0x0000000000345CF4 ""
 *   insn=0x0000000000345CF4 string=0x0000000000345CF8 "h\n"
 *   insn=0x0000000000345CFC string=0x0000000000345D00 "h"
 *   insn=0x0000000000345D00 string=0x0000000000345D04 "@"
 *   insn=0x0000000000345D10 string=0x0000000000345D14 "3"
 *   insn=0x0000000000345D14 string=0x0000000000345D18 "h"
 *   insn=0x0000000000345D18 string=0x0000000000345D1C ""
 *   insn=0x0000000000345D1C string=0x0000000000345D20 "h"
 *   insn=0x0000000000345D24 string=0x0000000000345D28 "h"
 *   insn=0x0000000000345D2C string=0x0000000000345D30 "\t@"
 *   insn=0x0000000000345D34 string=0x0000000000345D38 "h\n@"
 *   insn=0x0000000000345D38 string=0x0000000000345D3C ""
 *   insn=0x0000000000345D3C string=0x0000000000345D40 "h\n"
 *   insn=0x0000000000345D44 string=0x0000000000345D48 "h"
 *   insn=0x0000000000345D4C string=0x0000000000345D50 "@"
 *   insn=0x0000000000345D64 string=0x0000000000345D7C "U"
 *   insn=0x0000000000345D7C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000345D88 string=0x0000000000345D8C "&"
 *   insn=0x0000000000345D94 string=0x0000000000345D98 "4"
 *   insn=0x0000000000345D9C string=0x0000000000345DA0 ""
 *   insn=0x0000000000345DAC string=0x0000000000345DB0 "\t@"
 *   insn=0x0000000000345DBC string=0x0000000000345DC0 ""
 *   insn=0x0000000000345DCC string=0x0000000000345DD0 "@"
 *   insn=0x0000000000345DDC string=0x0000000000345DE0 "4"
 *   insn=0x0000000000345DE4 string=0x0000000000345DE8 ""
 *   insn=0x0000000000345DF4 string=0x0000000000345DF8 "\t@"
 *   insn=0x0000000000345E04 string=0x0000000000345E08 ""
 *   insn=0x0000000000345E14 string=0x0000000000345E18 "@"
 *   insn=0x0000000000345E28 string=0x0000000000345E2C "H!"
 *   insn=0x0000000000345E38 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  _QWORD *v3; // x20
  __int64 (*v4)(void); // x8
  __int64 result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // [xsp+8h] [xbp-48h]
  _QWORD *v13; // [xsp+10h] [xbp-40h]
  __int64 v14; // [xsp+18h] [xbp-38h]
  _QWORD *v15; // [xsp+20h] [xbp-30h]
  __int64 v16; // [xsp+28h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (_QWORD *)operator new(0x58u);
  memset(v3, 0, 0x58u);
  Caver::GUIViewController::GUIViewController((Caver::GUIViewController *)v3);
  v3[9] = 0;
  v3[10] = 0;
  *v3 = off_6CE0E0;
  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>();
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 5) + 80LL);
  v12 = v14;
  v13 = v15;
  if ( v15 )
    ++v15[1];
  result = v4();
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

