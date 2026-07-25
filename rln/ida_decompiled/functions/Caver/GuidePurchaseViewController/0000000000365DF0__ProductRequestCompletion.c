/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000365DF0
 * Mangled: _ZN5Caver27GuidePurchaseViewController24ProductRequestCompletionERKSsRKN5boost10shared_ptrINS_12StoreProductEEES2_
 * Demangled: Caver::GuidePurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *
 * Callees: 9
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000001FF560  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 116
 *   insn=0x0000000000365E04 string=0x0000000000365E08 "V"
 *   insn=0x0000000000365E18 string=0x0000000000365E1C "I @"
 *   insn=0x0000000000365E20 string=0x0000000000365E24 "\n"
 *   insn=0x0000000000365E20 string=0x0000000000365E30 "uF@"
 *   insn=0x0000000000365E24 string=0x0000000000365E28 "J"
 *   insn=0x0000000000365E28 string=0x0000000000365E2C "\n"
 *   insn=0x0000000000365E30 string=0x0000000000365E34 "i""
 *   insn=0x0000000000365E38 string=0x0000000000365E6C "hB@"
 *   insn=0x0000000000365E3C string=0x0000000000365E40 ""
 *   insn=0x0000000000365E44 string=0x0000000000365E48 "!"
 *   insn=0x0000000000365E50 string=0x0000000000365E54 "\t@"
 *   insn=0x0000000000365E5C string=0x0000000000365E60 ""
 *   insn=0x0000000000365E6C string=0x0000000000365E70 "h"
 *   insn=0x0000000000365E70 string=0x0000000000365E9C "A"
 *   insn=0x0000000000365E7C string=0x0000000000365E80 "t"
 *   insn=0x0000000000365E88 string=0x0000000000365E8C "@"
 *   insn=0x0000000000365E90 string=0x0000000000365E94 "hB@"
 *   insn=0x0000000000365E9C string=0x000000000058F6BA "Ok"
 *   insn=0x0000000000365EA8 string=0x0000000000365EAC "C"
 *   insn=0x0000000000365EAC string=0x0000000000365EB0 "A"
 *   insn=0x0000000000365EB0 string=0x000000000058F6BD "STORE ERROR"
 *   insn=0x0000000000365EBC string=0x0000000000365EC0 ">"
 *   insn=0x0000000000365ED8 string=0x0000000000365EDC "i8"
 *   insn=0x0000000000365EDC string=0x00000000001F4080 "P'"
 *   insn=0x0000000000365EE4 string=0x0000000000365EE8 "\n"
 *   insn=0x0000000000365EE4 string=0x0000000000365EF4 "t>@"
 *   insn=0x0000000000365EE8 string=0x0000000000365EEC "J"
 *   insn=0x0000000000365EEC string=0x0000000000365EF0 "\n"
 *   insn=0x0000000000365EF4 string=0x0000000000365EF8 "i""
 *   insn=0x0000000000365EF8 string=0x0000000000365EFC "4"
 *   insn=0x0000000000365F00 string=0x0000000000365F04 ""
 *   insn=0x0000000000365F10 string=0x0000000000365F14 "\t@"
 *   insn=0x0000000000365F20 string=0x0000000000365F24 ""
 *   insn=0x0000000000365F30 string=0x0000000000365F34 "@"
 *   insn=0x0000000000365F40 string=0x0000000000365F44 "4"
 *   insn=0x0000000000365F48 string=0x0000000000365F4C ""
 *   insn=0x0000000000365F58 string=0x0000000000365F5C "\t@"
 *   insn=0x0000000000365F68 string=0x0000000000365F6C ""
 *   insn=0x0000000000365F78 string=0x0000000000365F7C "@"
 *   insn=0x0000000000365F9C string=0x0000000000365FA0 "u:@"
 *   insn=0x0000000000365FA0 string=0x0000000000365FA4 "hB"
 *   insn=0x0000000000365FA8 string=0x0000000000365FAC "a"
 *   insn=0x0000000000365FB0 string=0x0000000000365FB4 "h"
 *   insn=0x0000000000365FB0 string=0x0000000000365FC8 "t"
 *   insn=0x0000000000365FB4 string=0x0000000000365FB8 "@"
 *   insn=0x0000000000365FC0 string=0x0000000000365FC4 "a"
 *   insn=0x0000000000365FD0 string=0x0000000000365FD4 ""
 *   insn=0x0000000000365FE0 string=0x0000000000365FE4 "4"
 *   insn=0x0000000000365FE0 string=0x00000000001FDDF0 "0'"
 *   insn=0x0000000000365FE4 string=0x0000000000366028 "h2@"
 *   insn=0x0000000000365FE8 string=0x0000000000365FEC ""
 *   insn=0x0000000000365FF8 string=0x0000000000365FFC "\t@"
 *   insn=0x0000000000366008 string=0x000000000036600C ""
 *   insn=0x0000000000366018 string=0x000000000036601C "@"
 *   insn=0x0000000000366028 string=0x000000000036602C "\t"
 *   insn=0x000000000036602C string=0x0000000000366030 "?"
 *   insn=0x0000000000366030 string=0x0000000000366034 ""
 *   insn=0x0000000000366038 string=0x000000000036603C "\t"
 *   insn=0x0000000000366058 string=0x000000000036605C "!"
 *   insn=0x000000000036605C string=0x0000000000366100 "t@"
 *   insn=0x0000000000366078 string=0x000000000036607C ")=G"
 *   insn=0x000000000036607C string=0x0000000000366080 "!"
 *   insn=0x0000000000366084 string=0x0000000000366088 "\t"
 *   insn=0x0000000000366084 string=0x00000000003660C0 "\t"
 *   insn=0x0000000000366088 string=0x000000000036608C "*"
 *   insn=0x000000000036608C string=0x0000000000366090 "\n"
 *   insn=0x0000000000366094 string=0x0000000000366098 ""
 *   insn=0x0000000000366098 string=0x00000000003660CC "?"
 *   insn=0x000000000036609C string=0x00000000003660A0 ")=G"
 *   insn=0x00000000003660A0 string=0x00000000003660A4 "!"
 *   insn=0x00000000003660A8 string=0x00000000003660AC "\t"
 *   insn=0x00000000003660A8 string=0x00000000003660E0 "\t"
 *   insn=0x00000000003660AC string=0x00000000003660B0 "*"
 *   insn=0x00000000003660B0 string=0x00000000003660B4 "\n"
 *   insn=0x00000000003660BC string=0x00000000003660EC "?"
 *   insn=0x00000000003660C0 string=0x00000000003660C4 "*"
 *   insn=0x00000000003660C4 string=0x00000000003660C8 "\n"
 *   insn=0x00000000003660E0 string=0x00000000003660E4 "*"
 *   insn=0x00000000003660E4 string=0x00000000003660E8 "\n"
 *   insn=0x0000000000366100 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000366110 string=0x0000000000366114 ""
 *   insn=0x0000000000366120 string=0x0000000000366124 "\t@"
 *   insn=0x0000000000366130 string=0x0000000000366134 ""
 *   insn=0x0000000000366140 string=0x0000000000366144 "@"
 *   insn=0x000000000036614C string=0x0000000000366150 ""
 *   insn=0x0000000000366164 string=0x0000000000366168 ""
 *   insn=0x000000000036616C string=0x0000000000366170 "!"
 *   insn=0x0000000000366174 string=0x0000000000366178 "\t@"
 *   insn=0x0000000000366184 string=0x0000000000366188 ""
 *   insn=0x000000000036618C string=0x0000000000366190 "!"
 *   insn=0x0000000000366194 string=0x0000000000366198 "@"
 *   insn=0x00000000003661AC string=0x00000000003661B0 "\t"
 *   insn=0x00000000003661C0 string=0x00000000003661C4 ")"
 *   insn=0x00000000003661D8 string=0x00000000003661DC ")"
 *   insn=0x00000000003661EC string=0x00000000003661F0 ")=G"
 *   insn=0x00000000003661F0 string=0x00000000003661F4 "!"
 *   insn=0x00000000003661F8 string=0x00000000003661FC "\t"
 *   insn=0x00000000003661F8 string=0x0000000000366268 "\t"
 *   insn=0x00000000003661FC string=0x0000000000366200 "*"
 *   insn=0x0000000000366200 string=0x0000000000366204 "\n"
 *   insn=0x0000000000366208 string=0x000000000036620C "?"
 *   insn=0x000000000036620C string=0x0000000000366210 "l"
 *   insn=0x0000000000366214 string=0x0000000000366218 "c"
 *   insn=0x0000000000366224 string=0x0000000000366228 ")=G"
 *   insn=0x0000000000366228 string=0x000000000036622C "!"
 *   insn=0x0000000000366230 string=0x0000000000366234 "\t"
 *   insn=0x0000000000366230 string=0x0000000000366248 "\t"
 *   insn=0x0000000000366234 string=0x0000000000366238 "*"
 *   insn=0x0000000000366238 string=0x000000000036623C "\n"
 *   insn=0x0000000000366244 string=0x0000000000366254 "?"
 *   insn=0x0000000000366248 string=0x000000000036624C "*"
 *   insn=0x000000000036624C string=0x0000000000366250 "\n"
 *   insn=0x000000000036625C string=0x0000000000366260 "Q"
 *   insn=0x0000000000366268 string=0x000000000036626C "*"
 *   insn=0x000000000036626C string=0x0000000000366270 "\n"
 *   insn=0x0000000000366270 string=0x0000000000366274 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuidePurchaseViewController::ProductRequestCompletion(
        Caver::GuidePurchaseViewController *this,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  void *v17; // x0
  Caver::GUIAlertView *v18; // x21
  Caver::GUIView *v19; // x1
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  void *v24; // x0
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  _QWORD v29[2]; // [xsp+10h] [xbp-60h] BYREF
  _QWORD *v30; // [xsp+20h] [xbp-50h]
  _QWORD v31[2]; // [xsp+30h] [xbp-40h] BYREF

  v31[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a3;
  v4 = a3[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 16) = v5;
  *((_QWORD *)this + 17) = v4;
  if ( !v6
    || (v7 = v6[1] - 1LL, (v6[1] = v7) != 0)
    || ((*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6), v8 = v6[2] - 1LL, (v6[2] = v8) != 0) )
  {
    if ( *((_QWORD *)this + 16) )
    {
LABEL_7:
      Caver::GuidePurchaseViewController::SetBuyButtonEnabled(this, 1);
      return;
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    if ( *((_QWORD *)this + 16) )
      goto LABEL_7;
  }
  sub_566BB8((int)v31, "Ok");
  sub_566BB8((int)v29, "STORE ERROR");
  Caver::GameInterfaceBuilder::AlertView();
  v10 = v29[1];
  v9 = v30;
  if ( v30 )
    ++v30[1];
  v11 = (_QWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 14) = v10;
  *((_QWORD *)this + 15) = v9;
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v30;
  if ( v30 )
  {
    v15 = v30[1] - 1LL;
    v30[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (void *)(v29[0] - 24LL);
  if ( (__int64 *)(v29[0] - 24LL) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v29[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v17);
  }
  v18 = (Caver::GUIAlertView *)*((_QWORD *)this + 14);
  *((_QWORD *)v18 + 35) = (char *)this + 80;
  v19 = (Caver::GUIView *)*((_QWORD *)this + 3);
  if ( !v19 )
  {
    (*(void (__fastcall **)(Caver::GuidePurchaseViewController *))(*(_QWORD *)this + 24LL))(this);
    v19 = (Caver::GUIView *)*((_QWORD *)this + 3);
  }
  v20 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v20 )
    ++v20[1];
  Caver::GUIAlertView::PresentFromView(v18, v19);
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = *((_QWORD *)this + 12);
  *(_BYTE *)(*(_QWORD *)(v23 + 320) + 228LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v23 + 304) + 228LL) = 1;
  v24 = (void *)(v31[0] - 24LL);
  if ( (__int64 *)(v31[0] - 24LL) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v31[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v24);
  }
}

