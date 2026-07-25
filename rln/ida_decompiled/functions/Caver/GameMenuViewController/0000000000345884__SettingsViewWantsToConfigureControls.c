/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345884
 * Mangled: _ZN5Caver22GameMenuViewController36SettingsViewWantsToConfigureControlsEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000001F6BA0  Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDD30  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *   0x0000000000200A60  Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000345AD4  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 60
 *   insn=0x0000000000345894 string=0x0000000000345898 "U"
 *   insn=0x00000000003458A8 string=0x00000000003458AC "M"
 *   insn=0x00000000003458AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003458B0 string=0x00000000003458B4 "k"
 *   insn=0x00000000003458C0 string=0x00000000003458C4 "h"
 *   insn=0x00000000003458C0 string=0x00000000001FDD30 "0'"
 *   insn=0x00000000003458CC string=0x00000000003458D0 "+"
 *   insn=0x00000000003458CC string=0x00000000003458DC "T-@"
 *   insn=0x00000000003458D0 string=0x00000000003458D4 "k"
 *   insn=0x00000000003458D4 string=0x00000000003458D8 "+"
 *   insn=0x00000000003458DC string=0x00000000003458E0 "H%"
 *   insn=0x00000000003458E0 string=0x00000000003458E4 "4"
 *   insn=0x00000000003458E4 string=0x0000000000345928 "`"
 *   insn=0x00000000003458E8 string=0x00000000003458EC ""
 *   insn=0x00000000003458F8 string=0x00000000003458FC "\t@"
 *   insn=0x0000000000345908 string=0x000000000034590C ""
 *   insn=0x0000000000345918 string=0x000000000034591C "@"
 *   insn=0x000000000034592C string=0x0000000000345930 ""
 *   insn=0x0000000000345930 string=0x0000000000345934 ")@"
 *   insn=0x000000000034593C string=0x0000000000345940 "*"
 *   insn=0x0000000000345940 string=0x0000000000345944 "J"
 *   insn=0x0000000000345944 string=0x0000000000345948 "*"
 *   insn=0x0000000000345954 string=0x0000000000345958 "3"
 *   insn=0x0000000000345958 string=0x000000000034595C "h"
 *   insn=0x000000000034595C string=0x0000000000345960 ""
 *   insn=0x0000000000345960 string=0x0000000000345964 "h"
 *   insn=0x0000000000345968 string=0x000000000034596C "h"
 *   insn=0x000000000034596C string=0x0000000000345970 "\t@"
 *   insn=0x0000000000345978 string=0x000000000034597C "h\n@"
 *   insn=0x000000000034597C string=0x0000000000345980 ""
 *   insn=0x0000000000345980 string=0x0000000000345984 "h\n"
 *   insn=0x0000000000345988 string=0x000000000034598C "h"
 *   insn=0x000000000034598C string=0x0000000000345990 "@"
 *   insn=0x000000000034599C string=0x00000000003459A0 "3"
 *   insn=0x00000000003459A0 string=0x00000000003459A4 "h"
 *   insn=0x00000000003459A4 string=0x00000000003459A8 ""
 *   insn=0x00000000003459A8 string=0x00000000003459AC "h"
 *   insn=0x00000000003459B0 string=0x00000000003459B4 "h"
 *   insn=0x00000000003459B8 string=0x00000000003459BC "\t@"
 *   insn=0x00000000003459C0 string=0x00000000003459C4 "h\n@"
 *   insn=0x00000000003459C4 string=0x00000000003459C8 ""
 *   insn=0x00000000003459C8 string=0x00000000003459CC "h\n"
 *   insn=0x00000000003459D0 string=0x00000000003459D4 "h"
 *   insn=0x00000000003459D8 string=0x00000000003459DC "@"
 *   insn=0x00000000003459F0 string=0x0000000000345A08 "2"
 *   insn=0x0000000000345A08 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000345A18 string=0x0000000000345A1C "&"
 *   insn=0x0000000000345A24 string=0x0000000000345A28 "4"
 *   insn=0x0000000000345A2C string=0x0000000000345A30 ""
 *   insn=0x0000000000345A3C string=0x0000000000345A40 "\t@"
 *   insn=0x0000000000345A4C string=0x0000000000345A50 ""
 *   insn=0x0000000000345A5C string=0x0000000000345A60 "@"
 *   insn=0x0000000000345A6C string=0x0000000000345A70 "4"
 *   insn=0x0000000000345A74 string=0x0000000000345A78 ""
 *   insn=0x0000000000345A84 string=0x0000000000345A88 "\t@"
 *   insn=0x0000000000345A94 string=0x0000000000345A98 ""
 *   insn=0x0000000000345AA4 string=0x0000000000345AA8 "@"
 *   insn=0x0000000000345AB8 string=0x0000000000345ABC "$""
 *   insn=0x0000000000345AC8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000345ACC string=0x0000000000345AD0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  Caver::ConfigureOverlayViewController *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 (*v9)(void); // x8
  __int64 result; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+18h] [xbp-38h]
  _QWORD *v16; // [xsp+20h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v3 = (Caver::ConfigureOverlayViewController *)operator new(0x70u);
  Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(v3);
  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>();
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v6 = *(_QWORD **)(v15 + 88);
  *(_QWORD *)(v15 + 80) = v4;
  *(_QWORD *)(v15 + 88) = v5;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = *(__int64 (**)(void))(**((_QWORD **)this + 5) + 80LL);
  if ( v16 )
    ++v16[1];
  result = v9();
  if ( v16 )
  {
    v11 = v16[1] - 1LL;
    v16[1] = v11;
    if ( !v11 )
    {
      result = (*(__int64 (__fastcall **)())(*v16 + 16LL))();
      v12 = v16[2] - 1LL;
      v16[2] = v12;
      if ( !v12 )
        result = (*(__int64 (__fastcall **)())(*v16 + 24LL))();
    }
  }
  if ( v16 )
  {
    v13 = v16[1] - 1LL;
    v16[1] = v13;
    if ( !v13 )
    {
      result = (*(__int64 (__fastcall **)())(*v16 + 16LL))();
      v14 = v16[2] - 1LL;
      v16[2] = v14;
      if ( !v14 )
        return (*(__int64 (__fastcall **)())(*v16 + 24LL))();
    }
  }
  return result;
}

