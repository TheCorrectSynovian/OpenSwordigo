/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036F394
 * Mangled: _ZN5Caver22MainMenuViewController23MainMenuViewDidOpenShopEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000001F9E90  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DF0  Caver::StoreViewController::StoreViewController(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9E90  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000203310  boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>(Caver::StoreViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x000000000036F3A4 string=0x000000000036F3A8 "U"
 *   insn=0x000000000036F3C0 string=0x000000000058FCC8 "MainMenu"
 *   insn=0x000000000036F3E4 string=0x000000000036F3E8 ")"
 *   insn=0x000000000036F3F8 string=0x000000000036F3FC "y"
 *   insn=0x000000000036F3FC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036F400 string=0x000000000036F404 "{"
 *   insn=0x000000000036F404 string=0x00000000001F6DF0 "0'"
 *   insn=0x000000000036F410 string=0x000000000036F414 "h"
 *   insn=0x000000000036F418 string=0x000000000036F41C ")@"
 *   insn=0x000000000036F424 string=0x000000000036F428 "*"
 *   insn=0x000000000036F428 string=0x000000000036F42C "J"
 *   insn=0x000000000036F42C string=0x000000000036F430 "*"
 *   insn=0x000000000036F440 string=0x000000000036F444 "3"
 *   insn=0x000000000036F444 string=0x000000000036F448 "h"
 *   insn=0x000000000036F448 string=0x000000000036F44C ""
 *   insn=0x000000000036F44C string=0x000000000036F450 "h"
 *   insn=0x000000000036F454 string=0x000000000036F458 "h"
 *   insn=0x000000000036F458 string=0x000000000036F45C "\t@"
 *   insn=0x000000000036F464 string=0x000000000036F468 "h\n@"
 *   insn=0x000000000036F468 string=0x000000000036F46C ""
 *   insn=0x000000000036F46C string=0x000000000036F470 "h\n"
 *   insn=0x000000000036F474 string=0x000000000036F478 "h"
 *   insn=0x000000000036F478 string=0x000000000036F47C "@"
 *   insn=0x000000000036F488 string=0x000000000036F48C "3"
 *   insn=0x000000000036F48C string=0x000000000036F490 "h"
 *   insn=0x000000000036F490 string=0x000000000036F494 ""
 *   insn=0x000000000036F494 string=0x000000000036F498 "h"
 *   insn=0x000000000036F49C string=0x000000000036F4A0 "h"
 *   insn=0x000000000036F4A4 string=0x000000000036F4A8 "\t@"
 *   insn=0x000000000036F4AC string=0x000000000036F4B0 "h\n@"
 *   insn=0x000000000036F4B0 string=0x000000000036F4B4 ""
 *   insn=0x000000000036F4B4 string=0x000000000036F4B8 "h\n"
 *   insn=0x000000000036F4BC string=0x000000000036F4C0 "h"
 *   insn=0x000000000036F4C4 string=0x000000000036F4C8 "@"
 *   insn=0x000000000036F4DC string=0x000000000036F538 "f"
 *   insn=0x000000000036F4F4 string=0x000000000036F4F8 ")=G"
 *   insn=0x000000000036F4F8 string=0x000000000036F4FC "!"
 *   insn=0x000000000036F500 string=0x000000000036F504 "\t"
 *   insn=0x000000000036F500 string=0x000000000036F518 "\t"
 *   insn=0x000000000036F504 string=0x000000000036F508 "*"
 *   insn=0x000000000036F508 string=0x000000000036F50C "\n"
 *   insn=0x000000000036F514 string=0x000000000036F524 "?"
 *   insn=0x000000000036F518 string=0x000000000036F51C "*"
 *   insn=0x000000000036F51C string=0x000000000036F520 "\n"
 *   insn=0x000000000036F538 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036F544 string=0x000000000036F548 "H"
 *   insn=0x000000000036F550 string=0x000000000036F554 "4"
 *   insn=0x000000000036F558 string=0x000000000036F55C ""
 *   insn=0x000000000036F568 string=0x000000000036F56C "\t@"
 *   insn=0x000000000036F578 string=0x000000000036F57C ""
 *   insn=0x000000000036F588 string=0x000000000036F58C "@"
 *   insn=0x000000000036F598 string=0x000000000036F59C "t"
 *   insn=0x000000000036F5A0 string=0x000000000036F5A4 ""
 *   insn=0x000000000036F5B0 string=0x000000000036F5B4 "\t@"
 *   insn=0x000000000036F5C0 string=0x000000000036F5C4 ""
 *   insn=0x000000000036F5D0 string=0x000000000036F5D4 "@"
 *   insn=0x000000000036F5DC string=0x000000000036F5E0 """
 *   insn=0x000000000036F5EC string=0x000000000036F5F0 "0"
 *   insn=0x000000000036F5F0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000036F600 string=0x000000000036F604 "J"
 *   insn=0x000000000036F608 string=0x000000000036F60C "(a"
 *   insn=0x000000000036F618 string=0x000000000036F61C "J=G"
 *   insn=0x000000000036F61C string=0x000000000036F620 ")!"
 *   insn=0x000000000036F624 string=0x000000000036F628 "*"
 *   insn=0x000000000036F624 string=0x000000000036F654 "*"
 *   insn=0x000000000036F628 string=0x000000000036F62C "K"
 *   insn=0x000000000036F62C string=0x000000000036F630 "+"
 *   insn=0x000000000036F634 string=0x000000000036F638 "_"
 *   insn=0x000000000036F638 string=0x000000000036F63C "l"
 *   insn=0x000000000036F644 string=0x000000000036F648 "W"
 *   insn=0x000000000036F654 string=0x000000000036F658 "K"
 *   insn=0x000000000036F658 string=0x000000000036F65C "+"
 *   insn=0x000000000036F65C string=0x000000000036F660 "_"
 *   insn=0x000000000036F678 string=0x00000000001F9E90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidOpenShop(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  __int64 v3; // x20
  void *v4; // x0
  Caver::StoreViewController *v5; // x0
  __int64 (__fastcall *v6)(Caver::MainMenuViewController *, __int64 *); // x8
  __int64 result; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x8
  unsigned int *v14; // x8
  int v15; // w9
  __int64 v16; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v17; // [xsp+8h] [xbp-48h]
  __int64 v18; // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v19; // [xsp+18h] [xbp-38h]
  __int64 v20; // [xsp+28h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = Caver::StoreController::SharedController(this);
  sub_566BB8((int)&v18, "MainMenu");
  sub_56A6A8(v3 + 8);
  v4 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v18 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v4);
  }
  v5 = (Caver::StoreViewController *)operator new(0xD8u);
  Caver::StoreViewController::StoreViewController(v5);
  boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>();
  v6 = *(__int64 (__fastcall **)(Caver::MainMenuViewController *, __int64 *))(*(_QWORD *)this + 80LL);
  v16 = v18;
  v17 = v19;
  if ( v19 )
    ++v19[1];
  result = v6(this, &v16);
  v8 = v17;
  if ( v17 )
  {
    v9 = v17[1] - 1LL;
    v17[1] = v9;
    if ( !v9 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = v19;
  if ( v19 )
  {
    v12 = v19[1] - 1LL;
    v19[1] = v12;
    if ( !v12 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  return result;
}

