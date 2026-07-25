/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000439CFC
 * Mangled: _ZN5Caver12SettingsView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *
 * Callees: 13
 *   0x00000000001F51B0  Caver::SettingsView::UpdateAudioControls(void)
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8D90  Caver::GameOptions::ApplyAudioOptions(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 186
 *   insn=0x0000000000439D08 string=0x0000000000439D0C "T"
 *   insn=0x0000000000439D18 string=0x0000000000439D1C "h"
 *   insn=0x0000000000439D24 string=0x0000000000439D28 "h"
 *   insn=0x0000000000439D24 string=0x0000000000439D78 "`~@"
 *   insn=0x0000000000439D30 string=0x0000000000439D34 "h"
 *   insn=0x0000000000439D30 string=0x0000000000439D8C "`~@"
 *   insn=0x0000000000439D38 string=0x0000000000439D3C "@"
 *   insn=0x0000000000439D3C string=0x0000000000439D40 "h"
 *   insn=0x0000000000439D48 string=0x0000000000439D4C "h"
 *   insn=0x0000000000439D50 string=0x0000000000439D54 "@"
 *   insn=0x0000000000439D54 string=0x0000000000439D58 "h"
 *   insn=0x0000000000439D54 string=0x0000000000439EBC "="
 *   insn=0x0000000000439D5C string=0x0000000000439D60 "!"
 *   insn=0x0000000000439D64 string=0x0000000000439D68 ""
 *   insn=0x0000000000439D64 string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000439D68 string=0x0000000000439D6C ""
 *   insn=0x0000000000439D78 string=0x0000000000439D7C "@"
 *   insn=0x0000000000439D7C string=0x0000000000439D80 ""
 *   insn=0x0000000000439D80 string=0x0000000000439D84 ""
 *   insn=0x0000000000439D90 string=0x0000000000439D94 ""
 *   insn=0x0000000000439D94 string=0x0000000000439D98 ""
 *   insn=0x0000000000439DAC string=0x0000000000439DB0 "A\n"
 *   insn=0x0000000000439DC8 string=0x00000000001FD940 "0'"
 *   insn=0x0000000000439DCC string=0x0000000000439DD0 ""
 *   insn=0x0000000000439DD0 string=0x0000000000439DD4 "\t"
 *   insn=0x0000000000439DD4 string=0x0000000000439DD8 "\t"
 *   insn=0x0000000000439DD8 string=0x0000000000439DDC "H"
 *   insn=0x0000000000439DDC string=0x0000000000439DE0 "h\n"
 *   insn=0x0000000000439DF8 string=0x0000000000439DFC "$"
 *   insn=0x0000000000439DFC string=0x0000000000439E00 "\t"
 *   insn=0x0000000000439E0C string=0x00000000001F8D90 "0'"
 *   insn=0x0000000000439E14 string=0x00000000001F51B0 "P'"
 *   insn=0x0000000000439E24 string=0x0000000000439E28 ""
 *   insn=0x0000000000439E28 string=0x0000000000439E2C "\t"
 *   insn=0x0000000000439E2C string=0x0000000000439E30 "\t"
 *   insn=0x0000000000439E30 string=0x0000000000439E34 "H"
 *   insn=0x0000000000439E34 string=0x0000000000439E38 "h\n"
 *   insn=0x0000000000439E50 string=0x0000000000439E54 "("
 *   insn=0x0000000000439E54 string=0x0000000000439E58 "\t"
 *   insn=0x0000000000439E74 string=0x0000000000439E78 "h"
 *   insn=0x0000000000439E78 string=0x0000000000439E7C ""
 *   insn=0x0000000000439E7C string=0x0000000000439E80 "h"
 *   insn=0x0000000000439E84 string=0x0000000000439E88 "h"
 *   insn=0x0000000000439E8C string=0x0000000000439E90 "\t@"
 *   insn=0x0000000000439E94 string=0x0000000000439E98 "h\n@"
 *   insn=0x0000000000439E98 string=0x0000000000439E9C ""
 *   insn=0x0000000000439E9C string=0x0000000000439EA0 "h\n"
 *   insn=0x0000000000439EA4 string=0x0000000000439EA8 "h"
 *   insn=0x0000000000439EAC string=0x0000000000439EB0 "@"
 *   insn=0x0000000000439EBC string=0x0000000000439EC0 ""
 *   insn=0x0000000000439EC0 string=0x0000000000439EC4 "\t@"
 *   insn=0x0000000000439ECC string=0x0000000000439ED0 "`~@"
 *   insn=0x0000000000439ECC string=0x0000000000439EE4 "3"
 *   insn=0x0000000000439ED4 string=0x0000000000439ED8 ""
 *   insn=0x0000000000439ED8 string=0x0000000000439EDC "@"
 *   insn=0x0000000000439EE4 string=0x0000000000439EE8 ""
 *   insn=0x0000000000439EE8 string=0x0000000000439EEC ""
 *   insn=0x0000000000439EF8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000439F08 string=0x0000000000439F0C ""
 *   insn=0x0000000000439F10 string=0x0000000000439F14 "!"
 *   insn=0x0000000000439F18 string=0x0000000000439F1C "\t@"
 *   insn=0x0000000000439F28 string=0x0000000000439F2C ""
 *   insn=0x0000000000439F30 string=0x0000000000439F34 "!"
 *   insn=0x0000000000439F38 string=0x0000000000439F3C "@"
 *   insn=0x0000000000439F50 string=0x0000000000439F54 "4"
 *   insn=0x0000000000439F58 string=0x0000000000439F5C ""
 *   insn=0x0000000000439F68 string=0x0000000000439F6C "\t@"
 *   insn=0x0000000000439F78 string=0x0000000000439F7C ""
 *   insn=0x0000000000439F88 string=0x0000000000439F8C "@"
 *   insn=0x0000000000439F98 string=0x0000000000439F9C "J"
 *   insn=0x0000000000439FB4 string=0x0000000000439FB8 "U"
 *   insn=0x0000000000439FC4 string=0x0000000000439FC8 "h"
 *   insn=0x0000000000439FD0 string=0x0000000000439FD4 "h"
 *   insn=0x0000000000439FD8 string=0x0000000000439FDC "a\n"
 *   insn=0x0000000000439FE0 string=0x0000000000439FE4 "W"
 *   insn=0x0000000000439FE4 string=0x0000000000439FE8 "h"
 *   insn=0x0000000000439FE8 string=0x0000000000439FEC "i\n"
 *   insn=0x0000000000439FEC string=0x0000000000439FF0 "!"
 *   insn=0x000000000043A004 string=0x000000000043A008 ""
 *   insn=0x000000000043A008 string=0x000000000043A00C "a"
 *   insn=0x000000000043A010 string=0x000000000043A014 "g"
 *   insn=0x000000000043A014 string=0x000000000043A018 "h\n"
 *   insn=0x000000000043A018 string=0x000000000043A01C "`"
 *   insn=0x000000000043A02C string=0x00000000001FDF30 "0'"
 *   insn=0x000000000043A030 string=0x000000000043A034 "A\n"
 *   insn=0x000000000043A034 string=0x0000000000584965 "click"
 *   insn=0x000000000043A058 string=0x00000000001F5340 "P'"
 *   insn=0x000000000043A060 string=0x000000000043A064 "@"
 *   insn=0x000000000043A064 string=0x000000000043A068 ""
 *   insn=0x000000000043A068 string=0x000000000043A06C ""
 *   insn=0x000000000043A070 string=0x000000000043A074 ""
 *   insn=0x000000000043A074 string=0x000000000043A078 ""
 *   insn=0x000000000043A080 string=0x000000000043A084 "I"
 *   insn=0x000000000043A084 string=0x000000000043A088 ")"
 *   insn=0x000000000043A094 string=0x000000000043A14C "I"
 *   insn=0x000000000043A09C string=0x000000000043A0A0 "S"
 *   insn=0x000000000043A0A0 string=0x000000000043A0A4 "!"
 *   insn=0x000000000043A0A0 string=0x000000000043A0E8 "h"
 *   insn=0x000000000043A0A8 string=0x000000000043A0AC "%"
 *   insn=0x000000000043A0AC string=0x000000000043A0B0 "h"
 *   insn=0x000000000043A0B0 string=0x000000000043A0B4 "i\n"
 *   insn=0x000000000043A0B4 string=0x000000000043A0B8 "!"
 *   insn=0x000000000043A0CC string=0x000000000043A0D0 ""
 *   insn=0x000000000043A0D0 string=0x000000000043A0D4 "/"
 *   insn=0x000000000043A0D8 string=0x000000000043A0DC "5"
 *   insn=0x000000000043A0E0 string=0x000000000043A0E4 "3"
 *   insn=0x000000000043A0E8 string=0x000000000043A0EC ""
 *   insn=0x000000000043A0EC string=0x000000000043A0F0 "h"
 *   insn=0x000000000043A0F4 string=0x000000000043A0F8 "h"
 *   insn=0x000000000043A0FC string=0x000000000043A100 "\t@"
 *   insn=0x000000000043A104 string=0x000000000043A108 "h\n@"
 *   insn=0x000000000043A108 string=0x000000000043A10C ""
 *   insn=0x000000000043A10C string=0x000000000043A110 "h\n"
 *   insn=0x000000000043A114 string=0x000000000043A118 "h"
 *   insn=0x000000000043A11C string=0x000000000043A120 "@"
 *   insn=0x000000000043A134 string=0x000000000043A190 "P"
 *   insn=0x000000000043A14C string=0x000000000043A150 ")=G"
 *   insn=0x000000000043A150 string=0x000000000043A154 "!"
 *   insn=0x000000000043A158 string=0x000000000043A15C "\t"
 *   insn=0x000000000043A158 string=0x000000000043A170 "\t"
 *   insn=0x000000000043A15C string=0x000000000043A160 "*"
 *   insn=0x000000000043A160 string=0x000000000043A164 "\n"
 *   insn=0x000000000043A16C string=0x000000000043A17C "?"
 *   insn=0x000000000043A170 string=0x000000000043A174 "*"
 *   insn=0x000000000043A174 string=0x000000000043A178 "\n"
 *   insn=0x000000000043A198 string=0x000000000043A19C "J"
 *   insn=0x000000000043A19C string=0x000000000043A1A0 "J"
 *   insn=0x000000000043A1A4 string=0x000000000043A1A8 "(a"
 *   insn=0x000000000043A1B0 string=0x000000000043A1B4 "J"
 *   insn=0x000000000043A1B4 string=0x000000000043A1B8 "J=G"
 *   insn=0x000000000043A1B8 string=0x000000000043A1BC ")!"
 *   insn=0x000000000043A1C0 string=0x000000000043A1C4 "*"
 *   insn=0x000000000043A1C0 string=0x000000000043A1F4 "*"
 *   insn=0x000000000043A1C4 string=0x000000000043A1C8 "K"
 *   insn=0x000000000043A1C8 string=0x000000000043A1CC "+"
 *   insn=0x000000000043A1D0 string=0x000000000043A1D4 "_"
 *   insn=0x000000000043A1E0 string=0x000000000043A1E4 "p"
 *   insn=0x000000000043A1E8 string=0x000000000043A1EC "t"
 *   insn=0x000000000043A1EC string=0x000000000043A1F0 "."
 *   insn=0x000000000043A1F4 string=0x000000000043A1F8 "K"
 *   insn=0x000000000043A1F8 string=0x000000000043A1FC "+"
 *   insn=0x000000000043A1FC string=0x000000000043A200 "_"
 *   insn=0x000000000043A218 string=0x000000000043A21C ""
 *   insn=0x000000000043A220 string=0x000000000043A224 "!"
 *   insn=0x000000000043A228 string=0x000000000043A22C "\t@"
 *   insn=0x000000000043A238 string=0x000000000043A23C ""
 *   insn=0x000000000043A240 string=0x000000000043A244 "!"
 *   insn=0x000000000043A248 string=0x000000000043A24C "@"
 *   insn=0x000000000043A260 string=0x000000000043A264 "4"
 *   insn=0x000000000043A268 string=0x000000000043A26C ""
 *   insn=0x000000000043A278 string=0x000000000043A27C "\t@"
 *   insn=0x000000000043A288 string=0x000000000043A28C ""
 *   insn=0x000000000043A298 string=0x000000000043A29C "@"
 *   insn=0x000000000043A2AC string=0x000000000043A2B0 "'P"
 *   insn=0x000000000043A2C0 string=0x000000000043A2C4 "T"
 *   insn=0x000000000043A2CC string=0x000000000043A2D0 ""
 *   insn=0x000000000043A2D8 string=0x000000000043A2DC ""
 *   insn=0x000000000043A2F8 string=0x000000000043A2FC "3"
 *   insn=0x000000000043A2FC string=0x000000000043A300 "h"
 *   insn=0x000000000043A300 string=0x000000000043A304 ""
 *   insn=0x000000000043A304 string=0x000000000043A308 "h"
 *   insn=0x000000000043A30C string=0x000000000043A310 "h"
 *   insn=0x000000000043A314 string=0x000000000043A318 "\t@"
 *   insn=0x000000000043A31C string=0x000000000043A320 "h\n@"
 *   insn=0x000000000043A320 string=0x000000000043A324 ""
 *   insn=0x000000000043A324 string=0x000000000043A328 "h\n"
 *   insn=0x000000000043A32C string=0x000000000043A330 "h"
 *   insn=0x000000000043A334 string=0x000000000043A338 "@"
 *   insn=0x000000000043A368 string=0x000000000043A36C "4"
 *   insn=0x000000000043A370 string=0x000000000043A374 ""
 *   insn=0x000000000043A380 string=0x000000000043A384 "\t@"
 *   insn=0x000000000043A390 string=0x000000000043A394 ""
 *   insn=0x000000000043A3A0 string=0x000000000043A3A4 "@"
 *   insn=0x000000000043A3B0 string=0x000000000043A3B4 "D"
 *   insn=0x000000000043A3C4 string=0x000000000043A3C8 ") @"
 *   insn=0x000000000043A3D0 string=0x000000000043A3D4 "\n"
 *   insn=0x000000000043A3D0 string=0x000000000043A3E0 "t"
 *   insn=0x000000000043A3D4 string=0x000000000043A3D8 "J"
 *   insn=0x000000000043A3D8 string=0x000000000043A3DC "\n"
 *   insn=0x000000000043A3E0 string=0x000000000043A3E4 "i""
 *   insn=0x000000000043A3E4 string=0x000000000043A3E8 "4"
 *   insn=0x000000000043A3EC string=0x000000000043A3F0 ""
 *   insn=0x000000000043A400 string=0x000000000043A404 "\t@"
 *   insn=0x000000000043A40C string=0x000000000043A410 ""
 *   insn=0x000000000043A420 string=0x000000000043A424 "@"
 *   insn=0x000000000043A434 string=0x000000000043A438 "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SettingsView *__fastcall Caver::SettingsView::ButtonPressed(Caver::SettingsView *result, __int64 a2)
{
  Caver::SettingsView *v2; // x19
  __int64 v3; // x0
  __int64 (*v4)(void); // x8
  Caver::GameOptions *v5; // x0
  int v6; // w8
  int v7; // w8
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x0
  Caver::OnlineController *v12; // x0
  __int64 v13; // x0
  Caver::GameOptions *v14; // [xsp+D8h] [xbp-28h] BYREF
  _QWORD *v15; // [xsp+E0h] [xbp-20h]
  __int64 v16; // [xsp+E8h] [xbp-18h]

  v2 = result;
  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)result + 34) == a2 )
  {
    result = (Caver::SettingsView *)*((_QWORD *)result + 31);
    if ( !result )
      return result;
    v4 = *(__int64 (**)(void))(*(_QWORD *)result + 8LL);
    return (Caver::SettingsView *)v4();
  }
  if ( *((_QWORD *)result + 36) == a2 )
  {
    result = (Caver::SettingsView *)*((_QWORD *)result + 31);
    if ( !result )
      return result;
    v4 = **(__int64 (***)(void))result;
    return (Caver::SettingsView *)v4();
  }
  if ( *((_QWORD *)result + 47) == a2 )
  {
    Caver::GameOptions::sharedOptions((__int64 *)&v14, result);
    v5 = v14;
    v6 = *((unsigned __int8 *)v14 + 32);
    *((_BYTE *)v14 + 32) = v6 ^ 1;
    if ( !v6 && *((float *)v5 + 9) < 0.05 )
    {
      *((_DWORD *)v5 + 9) = 1065353216;
      *((_BYTE *)v5 + 32) = 1;
    }
    goto LABEL_21;
  }
  if ( *((_QWORD *)result + 49) == a2 )
  {
    Caver::GameOptions::sharedOptions((__int64 *)&v14, result);
    v5 = v14;
    v7 = *((unsigned __int8 *)v14 + 33);
    *((_BYTE *)v14 + 33) = v7 ^ 1;
    if ( !v7 && *((float *)v5 + 10) < 0.05 )
    {
      *((_DWORD *)v5 + 10) = 1065353216;
      *((_BYTE *)v5 + 33) = 1;
    }
LABEL_21:
    Caver::GameOptions::SaveToFile(v5);
    Caver::GameOptions::ApplyAudioOptions(v14);
    result = (Caver::SettingsView *)Caver::SettingsView::UpdateAudioControls(v2);
    v8 = v15;
    if ( v15 )
    {
      v9 = v15[1] - 1LL;
      v15[1] = v9;
      if ( !v9 )
      {
        result = (Caver::SettingsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          return (Caver::SettingsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    return result;
  }
  if ( *((_QWORD *)result + 40) != a2 )
  {
    if ( *((_QWORD *)result + 42) == a2 )
    {
      v3 = Caver::OnlineController::SharedController(result);
      return (Caver::SettingsView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    }
    return result;
  }
  v11 = Caver::OnlineController::SharedController(result);
  v12 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    v13 = Caver::OnlineController::SharedController(v12);
    return (Caver::SettingsView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
  }
  result = (Caver::SettingsView *)*((_QWORD *)v2 + 31);
  if ( result )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)result + 24LL);
    return (Caver::SettingsView *)v4();
  }
  return result;
}

