/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000367C84
 * Mangled: _ZN5Caver27GuidePurchaseViewController21HandlePurchaseSuccessEv
 * Demangled: Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callers: 1
 *   0x0000000000203100  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x0000000000202050  Caver::GuidePurchaseView::AnimateOut(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x0000000000367C94 string=0x0000000000367C98 "U"
 *   insn=0x0000000000367CA8 string=0x0000000000367CAC "%W"
 *   insn=0x0000000000367CAC string=0x00000000001FD940 "0'"
 *   insn=0x0000000000367CB4 string=0x0000000000367CB8 "\tA"
 *   insn=0x0000000000367CB8 string=0x0000000000367CBC "4"
 *   insn=0x0000000000367CC0 string=0x0000000000367CC4 ""
 *   insn=0x0000000000367CD4 string=0x0000000000367CD8 "\t@"
 *   insn=0x0000000000367CE0 string=0x0000000000367CE4 ""
 *   insn=0x0000000000367CF4 string=0x0000000000367CF8 "@"
 *   insn=0x0000000000367D08 string=0x0000000000367D0C "9l"
 *   insn=0x0000000000367D10 string=0x0000000000367D14 "4"
 *   insn=0x0000000000367D14 string=0x0000000000367D58 "`2@"
 *   insn=0x0000000000367D18 string=0x0000000000367D1C ""
 *   insn=0x0000000000367D2C string=0x0000000000367D30 "\t@"
 *   insn=0x0000000000367D38 string=0x0000000000367D3C ""
 *   insn=0x0000000000367D4C string=0x0000000000367D50 "@"
 *   insn=0x0000000000367D5C string=0x0000000000367D60 "`"
 *   insn=0x0000000000367D64 string=0x0000000000367D68 "`.@"
 *   insn=0x0000000000367D64 string=0x00000000001F7010 "0'"
 *   insn=0x0000000000367D6C string=0x0000000000367D70 ""
 *   insn=0x0000000000367D74 string=0x0000000000367D78 ""
 *   insn=0x0000000000367D8C string=0x0000000000367DA4 "K9"
 *   insn=0x0000000000367DA4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000367DAC string=0x0000000000367DB0 "4"
 *   insn=0x0000000000367DB4 string=0x0000000000367DB8 ""
 *   insn=0x0000000000367DC4 string=0x0000000000367DC8 "\t@"
 *   insn=0x0000000000367DD4 string=0x0000000000367DD8 ""
 *   insn=0x0000000000367DE4 string=0x0000000000367DE8 "@"
 *   insn=0x0000000000367DF8 string=0x0000000000367DFC "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIViewController *__fastcall Caver::GuidePurchaseViewController::HandlePurchaseSuccess(
        Caver::GUIViewController **this)
{
  Caver::GameOptions *v2; // x0
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIViewController *result; // x0
  Caver::GameOptions *v10; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v11; // [xsp+10h] [xbp-40h]
  __int64 v12[3]; // [xsp+18h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::GameOptions *)Caver::GameOptions::sharedOptions(v12, (Caver::GameOptions *)this);
  v3 = (_QWORD *)v12[1];
  *(_BYTE *)(v12[0] + 80) = 1;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      v2 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        v2 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  Caver::GameOptions::sharedOptions((__int64 *)&v10, v2);
  Caver::GameOptions::SaveToFile(v10);
  v6 = v11;
  if ( v11 )
  {
    v7 = v11[1] - 1LL;
    v11[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  Caver::GuidePurchaseView::AnimateOut(this[12]);
  Caver::GUIViewController::DismissModalViewController(this[5]);
  result = this[11];
  if ( result )
    return (Caver::GUIViewController *)(**(__int64 (__fastcall ***)(Caver::GUIViewController *, Caver::GUIViewController **))result)(
                                         result,
                                         this);
  return result;
}

