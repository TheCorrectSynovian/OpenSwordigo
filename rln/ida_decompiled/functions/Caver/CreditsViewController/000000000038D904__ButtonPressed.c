/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D904
 * Mangled: _ZN5Caver21CreditsViewController13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::CreditsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x000000000038D4E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIEffectView,Caver::GUIEffectView>(boost::shared_ptr<Caver::GUIEffectView> const*,Caver::GUIEffectView *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6D40  boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>(Caver::MainMenuViewController *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAC50  Caver::MainMenuViewController::MainMenuViewController(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038DAFC  Caver::CreditsViewController::ViewDidAppear(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 50
 *   insn=0x000000000038D914 string=0x000000000038D918 "U"
 *   insn=0x000000000038D928 string=0x000000000038D92C "-"
 *   insn=0x000000000038D92C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000038D934 string=0x00000000001FAC50 "0'"
 *   insn=0x000000000038D940 string=0x000000000038D944 "`"@"
 *   insn=0x000000000038D940 string=0x00000000001F6D40 "0'"
 *   insn=0x000000000038D948 string=0x000000000038D94C ""
 *   insn=0x000000000038D94C string=0x000000000038D950 ""
 *   insn=0x000000000038D958 string=0x000000000038D95C "*"
 *   insn=0x000000000038D95C string=0x000000000038D960 "J"
 *   insn=0x000000000038D960 string=0x000000000038D964 "*"
 *   insn=0x000000000038D968 string=0x000000000038D96C " "
 *   insn=0x000000000038D980 string=0x000000000038D984 "3"
 *   insn=0x000000000038D984 string=0x000000000038D988 "h"
 *   insn=0x000000000038D988 string=0x000000000038D98C ""
 *   insn=0x000000000038D98C string=0x000000000038D990 "h"
 *   insn=0x000000000038D994 string=0x000000000038D998 "h"
 *   insn=0x000000000038D998 string=0x000000000038D99C "\t@"
 *   insn=0x000000000038D9A4 string=0x000000000038D9A8 "h\n@"
 *   insn=0x000000000038D9A8 string=0x000000000038D9AC ""
 *   insn=0x000000000038D9AC string=0x000000000038D9B0 "h\n"
 *   insn=0x000000000038D9B4 string=0x000000000038D9B8 "h"
 *   insn=0x000000000038D9B8 string=0x000000000038D9BC "@"
 *   insn=0x000000000038D9C8 string=0x000000000038D9CC "3"
 *   insn=0x000000000038D9CC string=0x000000000038D9D0 "h"
 *   insn=0x000000000038D9D0 string=0x000000000038D9D4 ""
 *   insn=0x000000000038D9D4 string=0x000000000038D9D8 "h"
 *   insn=0x000000000038D9DC string=0x000000000038D9E0 "h"
 *   insn=0x000000000038D9E4 string=0x000000000038D9E8 "\t@"
 *   insn=0x000000000038D9EC string=0x000000000038D9F0 "h\n@"
 *   insn=0x000000000038D9F0 string=0x000000000038D9F4 ""
 *   insn=0x000000000038D9F4 string=0x000000000038D9F8 "h\n"
 *   insn=0x000000000038D9FC string=0x000000000038DA00 "h"
 *   insn=0x000000000038DA04 string=0x000000000038DA08 "@"
 *   insn=0x000000000038DA1C string=0x000000000038DA34 "'"
 *   insn=0x000000000038DA34 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000038DA40 string=0x000000000038DA44 "&"
 *   insn=0x000000000038DA4C string=0x000000000038DA50 "4"
 *   insn=0x000000000038DA54 string=0x000000000038DA58 ""
 *   insn=0x000000000038DA64 string=0x000000000038DA68 "\t@"
 *   insn=0x000000000038DA74 string=0x000000000038DA78 ""
 *   insn=0x000000000038DA84 string=0x000000000038DA88 "@"
 *   insn=0x000000000038DA94 string=0x000000000038DA98 "4"
 *   insn=0x000000000038DA9C string=0x000000000038DAA0 ""
 *   insn=0x000000000038DAAC string=0x000000000038DAB0 "\t@"
 *   insn=0x000000000038DABC string=0x000000000038DAC0 ""
 *   insn=0x000000000038DACC string=0x000000000038DAD0 "@"
 *   insn=0x000000000038DADC string=0x000000000038DAE0 "y"
 *   insn=0x000000000038DAF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038DAF4 string=0x000000000038DAF8 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreditsViewController::ButtonPressed(__int64 a1)
{
  Caver::MainMenuViewController *v2; // x0
  long double v3; // q0
  __int64 (__fastcall *v4)(float, long double); // x8
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
  v2 = (Caver::MainMenuViewController *)operator new(0x128u);
  Caver::MainMenuViewController::MainMenuViewController(v2);
  boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>();
  v4 = *(__int64 (__fastcall **)(float, long double))(**(_QWORD **)(a1 + 64) + 8LL);
  v12 = v14;
  v13 = v15;
  if ( v15 )
    ++v15[1];
  LODWORD(v3) = 1053609165;
  result = v4(0.4, v3);
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

