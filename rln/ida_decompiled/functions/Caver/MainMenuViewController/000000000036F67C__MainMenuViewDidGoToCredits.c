/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036F67C
 * Mangled: _ZN5Caver22MainMenuViewController26MainMenuViewDidGoToCreditsEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000001F9070  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callees: 9
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA960  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>(Caver::CreditsViewController *)
 *   0x00000000001FBC40  .memset
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000036F898  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x000000000036F68C string=0x000000000036F690 "U"
 *   insn=0x000000000036F6A4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036F6B0 string=0x000000000036F6B4 "c1"
 *   insn=0x000000000036F6B4 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000036F6B8 string=0x000000000036F6BC "}"
 *   insn=0x000000000036F6BC string=0x00000000001F40B0 "P'"
 *   insn=0x000000000036F6C0 string=0x000000000036F6C4 "uE"
 *   insn=0x000000000036F6D0 string=0x000000000036F6D4 "A"
 *   insn=0x000000000036F6DC string=0x000000000036F6E0 "`"@"
 *   insn=0x000000000036F6DC string=0x00000000001FA960 "0'"
 *   insn=0x000000000036F6E4 string=0x000000000036F6E8 ""
 *   insn=0x000000000036F6E8 string=0x000000000036F6EC ""
 *   insn=0x000000000036F6F4 string=0x000000000036F6F8 "*"
 *   insn=0x000000000036F6F8 string=0x000000000036F6FC "J"
 *   insn=0x000000000036F6FC string=0x000000000036F700 "*"
 *   insn=0x000000000036F704 string=0x000000000036F708 " "
 *   insn=0x000000000036F71C string=0x000000000036F720 "3"
 *   insn=0x000000000036F720 string=0x000000000036F724 "h"
 *   insn=0x000000000036F724 string=0x000000000036F728 ""
 *   insn=0x000000000036F728 string=0x000000000036F72C "h"
 *   insn=0x000000000036F730 string=0x000000000036F734 "h"
 *   insn=0x000000000036F734 string=0x000000000036F738 "\t@"
 *   insn=0x000000000036F740 string=0x000000000036F744 "h\n@"
 *   insn=0x000000000036F744 string=0x000000000036F748 ""
 *   insn=0x000000000036F748 string=0x000000000036F74C "h\n"
 *   insn=0x000000000036F750 string=0x000000000036F754 "h"
 *   insn=0x000000000036F754 string=0x000000000036F758 "@"
 *   insn=0x000000000036F764 string=0x000000000036F768 "3"
 *   insn=0x000000000036F768 string=0x000000000036F76C "h"
 *   insn=0x000000000036F76C string=0x000000000036F770 ""
 *   insn=0x000000000036F770 string=0x000000000036F774 "h"
 *   insn=0x000000000036F778 string=0x000000000036F77C "h"
 *   insn=0x000000000036F780 string=0x000000000036F784 "\t@"
 *   insn=0x000000000036F788 string=0x000000000036F78C "h\n@"
 *   insn=0x000000000036F78C string=0x000000000036F790 ""
 *   insn=0x000000000036F790 string=0x000000000036F794 "h\n"
 *   insn=0x000000000036F798 string=0x000000000036F79C "h"
 *   insn=0x000000000036F7A0 string=0x000000000036F7A4 "@"
 *   insn=0x000000000036F7D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036F7DC string=0x000000000036F7E0 "&"
 *   insn=0x000000000036F7E8 string=0x000000000036F7EC "4"
 *   insn=0x000000000036F7F0 string=0x000000000036F7F4 ""
 *   insn=0x000000000036F800 string=0x000000000036F804 "\t@"
 *   insn=0x000000000036F810 string=0x000000000036F814 ""
 *   insn=0x000000000036F820 string=0x000000000036F824 "@"
 *   insn=0x000000000036F830 string=0x000000000036F834 "4"
 *   insn=0x000000000036F838 string=0x000000000036F83C ""
 *   insn=0x000000000036F848 string=0x000000000036F84C "\t@"
 *   insn=0x000000000036F858 string=0x000000000036F85C ""
 *   insn=0x000000000036F868 string=0x000000000036F86C "@"
 *   insn=0x000000000036F88C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidGoToCredits(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  _QWORD *v3; // x20
  long double v4; // q0
  __int64 (__fastcall *v5)(float, long double); // x8
  __int64 result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // [xsp+8h] [xbp-48h]
  _QWORD *v14; // [xsp+10h] [xbp-40h]
  __int64 v15; // [xsp+18h] [xbp-38h]
  _QWORD *v16; // [xsp+20h] [xbp-30h]
  __int64 v17; // [xsp+28h] [xbp-28h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (_QWORD *)operator new(0x58u);
  memset(v3, 0, 0x58u);
  Caver::GUIViewController::GUIViewController((Caver::GUIViewController *)v3);
  v3[9] = 0;
  v3[10] = 0;
  *v3 = off_6CDC70;
  boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>();
  v5 = *(__int64 (__fastcall **)(float, long double))(**((_QWORD **)this + 8) + 8LL);
  v13 = v15;
  v14 = v16;
  if ( v16 )
    ++v16[1];
  LODWORD(v4) = 1053609165;
  result = v5(0.4, v4);
  v7 = v14;
  if ( v14 )
  {
    v8 = v14[1] - 1LL;
    v14[1] = v8;
    if ( !v8 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = v16;
  if ( v16 )
  {
    v11 = v16[1] - 1LL;
    v16[1] = v11;
    if ( !v11 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  return result;
}

