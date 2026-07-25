/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346274
 * Mangled: _ZN5Caver22GameMenuViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE
 * Demangled: Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x0000000000202EE0  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 22
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DF0  Caver::StoreViewController::StoreViewController(void)
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8BC0  Caver::MapView::UpdateTargetPath(void)
 *   0x00000000001FA0C0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FEAB0  Caver::MapView::UpdateDefaultNodeVisibility(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x00000000002018D0  Caver::MapMenuPage::UpdateMapViewBounds(void)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202EE0  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000203310  boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>(Caver::StoreViewController *)
 *   0x0000000000203C30  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 145
 *   insn=0x0000000000346284 string=0x0000000000346288 "U"
 *   insn=0x0000000000346298 string=0x000000000034629C "hV@"
 *   insn=0x00000000003462A4 string=0x00000000003462A8 "h^@"
 *   insn=0x00000000003462AC string=0x00000000003462B0 "!"
 *   insn=0x00000000003462B0 string=0x00000000003462B4 "`B@"
 *   insn=0x00000000003462B8 string=0x00000000003462BC ""
 *   insn=0x00000000003462C4 string=0x00000000003462C8 "@"
 *   insn=0x00000000003462C8 string=0x00000000003462CC ""!E9"
 *   insn=0x00000000003462D0 string=0x00000000003462D4 "P"
 *   insn=0x00000000003462D8 string=0x00000000003462DC "!E9"
 *   insn=0x00000000003462E0 string=0x00000000003462F0 "`B@"
 *   insn=0x00000000003462E4 string=0x00000000003462E8 "R"
 *   insn=0x00000000003462E8 string=0x00000000003462EC "`\n"
 *   insn=0x00000000003462F4 string=0x00000000003462F8 ""
 *   insn=0x00000000003462F4 string=0x0000000000346310 "hN@"
 *   insn=0x0000000000346300 string=0x0000000000346304 "\t@"
 *   insn=0x0000000000346304 string=0x0000000000346308 ""!E9"
 *   insn=0x0000000000346318 string=0x0000000000346354 "`"
 *   insn=0x0000000000346328 string=0x000000000034632C "\t@"
 *   insn=0x0000000000346334 string=0x0000000000346338 ""
 *   insn=0x0000000000346348 string=0x000000000034634C "@"
 *   insn=0x000000000034635C string=0x0000000000346360 ""
 *   insn=0x0000000000346368 string=0x000000000034636C "4"
 *   insn=0x0000000000346368 string=0x00000000001F8BC0 "0'"
 *   insn=0x000000000034636C string=0x00000000003463B0 "`"
 *   insn=0x0000000000346370 string=0x0000000000346374 ""
 *   insn=0x0000000000346384 string=0x0000000000346388 "\t@"
 *   insn=0x0000000000346390 string=0x0000000000346394 ""
 *   insn=0x00000000003463A4 string=0x00000000003463A8 "@"
 *   insn=0x00000000003463B8 string=0x00000000003463BC ""
 *   insn=0x00000000003463C4 string=0x00000000003463C8 "4"
 *   insn=0x00000000003463CC string=0x00000000003463D0 ""
 *   insn=0x00000000003463E0 string=0x00000000003463E4 "\t@"
 *   insn=0x00000000003463EC string=0x00000000003463F0 ""
 *   insn=0x0000000000346400 string=0x0000000000346404 "@"
 *   insn=0x000000000034640C string=0x0000000000346410 "0"
 *   insn=0x000000000034641C string=0x0000000000346420 "a"
 *   insn=0x0000000000346420 string=0x00000000003465AC "I"
 *   insn=0x0000000000346440 string=0x00000000001F6E70 "0'"
 *   insn=0x0000000000346448 string=0x000000000034644C "!"
 *   insn=0x000000000034644C string=0x000000000058AC03 "Map"
 *   insn=0x0000000000346470 string=0x0000000000346474 ")"
 *   insn=0x000000000034647C string=0x0000000000346480 "A"
 *   insn=0x0000000000346484 string=0x0000000000346488 "V"
 *   insn=0x0000000000346488 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000034648C string=0x0000000000346490 "X"
 *   insn=0x0000000000346490 string=0x00000000001F6DF0 "0'"
 *   insn=0x00000000003464A0 string=0x00000000003464A4 "h"
 *   insn=0x00000000003464A4 string=0x00000000003464A8 "H)"
 *   insn=0x00000000003464A8 string=0x00000000003464AC "h"
 *   insn=0x00000000003464AC string=0x00000000003464B0 ")@"
 *   insn=0x00000000003464B8 string=0x00000000003464BC "*"
 *   insn=0x00000000003464BC string=0x00000000003464C0 "J"
 *   insn=0x00000000003464C0 string=0x00000000003464C4 "*"
 *   insn=0x00000000003464D4 string=0x00000000003464D8 "3"
 *   insn=0x00000000003464D8 string=0x00000000003464DC "h"
 *   insn=0x00000000003464DC string=0x00000000003464E0 ""
 *   insn=0x00000000003464E0 string=0x00000000003464E4 "h"
 *   insn=0x00000000003464E8 string=0x00000000003464EC "h"
 *   insn=0x00000000003464EC string=0x00000000003464F0 "\t@"
 *   insn=0x00000000003464F8 string=0x00000000003464FC "h\n@"
 *   insn=0x00000000003464FC string=0x0000000000346500 ""
 *   insn=0x0000000000346500 string=0x0000000000346504 "h\n"
 *   insn=0x0000000000346508 string=0x000000000034650C "h"
 *   insn=0x000000000034650C string=0x0000000000346510 "@"
 *   insn=0x0000000000346520 string=0x0000000000346524 "h"
 *   insn=0x0000000000346524 string=0x0000000000346528 ""
 *   insn=0x0000000000346528 string=0x000000000034652C "h"
 *   insn=0x000000000034652C string=0x0000000000346530 "!"
 *   insn=0x0000000000346530 string=0x0000000000346534 "h"
 *   insn=0x0000000000346538 string=0x000000000034653C "\t@"
 *   insn=0x0000000000346540 string=0x0000000000346544 "h\n@"
 *   insn=0x0000000000346544 string=0x0000000000346548 ""
 *   insn=0x0000000000346548 string=0x000000000034654C "h\n"
 *   insn=0x000000000034654C string=0x0000000000346550 "!"
 *   insn=0x0000000000346550 string=0x0000000000346554 "h"
 *   insn=0x0000000000346558 string=0x000000000034655C "@"
 *   insn=0x0000000000346568 string=0x000000000034656C ")=G"
 *   insn=0x000000000034656C string=0x0000000000346570 "!"
 *   insn=0x0000000000346574 string=0x0000000000346578 "\t"
 *   insn=0x0000000000346574 string=0x000000000034658C "\t"
 *   insn=0x0000000000346578 string=0x000000000034657C "*"
 *   insn=0x000000000034657C string=0x0000000000346580 "\n"
 *   insn=0x0000000000346588 string=0x0000000000346598 "?"
 *   insn=0x000000000034658C string=0x0000000000346590 "*"
 *   insn=0x0000000000346590 string=0x0000000000346594 "\n"
 *   insn=0x0000000000346598 string=0x000000000034659C "L"
 *   insn=0x00000000003465AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003465B8 string=0x00000000003465BC "n"
 *   insn=0x00000000003465C4 string=0x00000000003465C8 "4"
 *   insn=0x00000000003465CC string=0x00000000003465D0 ""
 *   insn=0x00000000003465DC string=0x00000000003465E0 "\t@"
 *   insn=0x00000000003465EC string=0x00000000003465F0 ""
 *   insn=0x00000000003465FC string=0x0000000000346600 "@"
 *   insn=0x000000000034660C string=0x0000000000346610 "4"
 *   insn=0x0000000000346614 string=0x0000000000346618 ""
 *   insn=0x0000000000346624 string=0x0000000000346628 "\t@"
 *   insn=0x0000000000346634 string=0x0000000000346638 ""
 *   insn=0x0000000000346644 string=0x0000000000346648 "@"
 *   insn=0x0000000000346650 string=0x0000000000346654 "H"
 *   insn=0x0000000000346660 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000346670 string=0x0000000000346674 "J"
 *   insn=0x0000000000346678 string=0x000000000034667C "(a"
 *   insn=0x0000000000346688 string=0x000000000034668C "J=G"
 *   insn=0x000000000034668C string=0x0000000000346690 ")!"
 *   insn=0x0000000000346694 string=0x0000000000346698 "*"
 *   insn=0x0000000000346694 string=0x00000000003466C4 "*"
 *   insn=0x0000000000346698 string=0x000000000034669C "K"
 *   insn=0x000000000034669C string=0x00000000003466A0 "+"
 *   insn=0x00000000003466A4 string=0x00000000003466A8 "_"
 *   insn=0x00000000003466A8 string=0x00000000003466AC "L"
 *   insn=0x00000000003466B4 string=0x00000000003466B8 ";"
 *   insn=0x00000000003466C4 string=0x00000000003466C8 "K"
 *   insn=0x00000000003466C8 string=0x00000000003466CC "+"
 *   insn=0x00000000003466CC string=0x00000000003466D0 "_"
 *   insn=0x00000000003466D4 string=0x00000000003466D8 "'"
 *   insn=0x00000000003466E8 string=0x00000000003466EC ""
 *   insn=0x00000000003466F8 string=0x00000000003466FC "\t@"
 *   insn=0x0000000000346708 string=0x000000000034670C ""
 *   insn=0x0000000000346718 string=0x000000000034671C "@"
 *   insn=0x000000000034672C string=0x0000000000346730 "4"
 *   insn=0x0000000000346734 string=0x0000000000346738 ""
 *   insn=0x0000000000346744 string=0x0000000000346748 "\t@"
 *   insn=0x0000000000346754 string=0x0000000000346758 ""
 *   insn=0x0000000000346764 string=0x0000000000346768 "@"
 *   insn=0x0000000000346774 string=0x0000000000346778 "S"
 *   insn=0x000000000034679C string=0x00000000003467A0 "\t"
 *   insn=0x00000000003467A0 string=0x00000000003467A4 ")eD"
 *   insn=0x00000000003467B0 string=0x00000000003467B4 "(A"
 *   insn=0x00000000003467B8 string=0x00000000003467BC ""
 *   insn=0x00000000003467C4 string=0x00000000003467C8 "`""
 *   insn=0x00000000003467D0 string=0x00000000003467D4 ";"
 *   insn=0x00000000003467D4 string=0x00000000001FA0C0 "0'"
 *   insn=0x00000000003467E8 string=0x00000000003467EC "4"
 *   insn=0x00000000003467F0 string=0x00000000003467F4 ""
 *   insn=0x0000000000346800 string=0x0000000000346804 "\t@"
 *   insn=0x0000000000346810 string=0x0000000000346814 ""
 *   insn=0x0000000000346820 string=0x0000000000346824 "@"
 *   insn=0x0000000000346830 string=0x0000000000346834 "$"
 *   insn=0x0000000000346838 string=0x000000000034683C "i"
 *   insn=0x000000000034683C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000346840 string=0x0000000000346844 "h"
 *   insn=0x0000000000346844 string=0x0000000000346848 ""
 *   insn=0x0000000000346858 string=0x000000000034685C "M"
 *   insn=0x000000000034685C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(
        Caver::GameMenuViewController *this,
        Caver::GuideToggleView *a2)
{
  __int64 v4; // x0
  Caver::StoreController *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x8
  Caver::MapMenuPage *v8; // x19
  _QWORD *v9; // x20
  __int64 v10; // x8
  Caver::MapView *v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  Caver::MapView *v15; // x0
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  Caver::GUISwitch *v19; // x0
  Caver::StoreController *updated; // x0
  __int64 v21; // x20
  void *v22; // x0
  Caver::StoreViewController *v23; // x0
  _QWORD *v24; // x9
  __int64 v25; // x10
  void (__fastcall *v26)(Caver::GameMenuViewController *, __int64 *); // x8
  _QWORD *v27; // x19
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x19
  __int64 v31; // x8
  __int64 v32; // x8
  unsigned int *v33; // x8
  int v34; // w9
  __int64 v35; // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v36; // [xsp+28h] [xbp-48h]
  __int64 v37; // [xsp+30h] [xbp-40h] BYREF
  _QWORD *v38; // [xsp+38h] [xbp-38h]
  __int64 v39; // [xsp+48h] [xbp-28h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((Caver::GuideToggleView **)this + 21) == a2 )
  {
    if ( *(_BYTE *)(*((_QWORD *)a2 + 33) + 328LL)
      && (v5 = (Caver::StoreController *)Caver::StoreController::SharedController(this),
          (Caver::StoreController::IsGuideUnlockedCheck(v5) & 1) == 0) )
    {
      v19 = (Caver::GUISwitch *)*((_QWORD *)a2 + 33);
      *((_BYTE *)v19 + 328) = 0;
      updated = (Caver::StoreController *)Caver::GUISwitch::UpdateFrameTexture(v19);
      v21 = Caver::StoreController::SharedController(updated);
      sub_566BB8((int)&v37, "Map");
      sub_56A6A8(v21 + 8);
      v22 = (void *)(v37 - 24);
      if ( (__int64 *)(v37 - 24) != &qword_6FD2E0 )
      {
        v33 = (unsigned int *)(v37 - 8);
        if ( &pthread_create )
        {
          do
            v34 = __ldaxr(v33);
          while ( __stlxr(v34 - 1, v33) );
        }
        else
        {
          v34 = (*v33)--;
        }
        if ( v34 <= 0 )
          operator delete(v22);
      }
      v23 = (Caver::StoreViewController *)operator new(0xD8u);
      Caver::StoreViewController::StoreViewController(v23);
      boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>();
      v25 = v37;
      v24 = v38;
      *(_QWORD *)(v37 + 80) = (char *)this + 120;
      v26 = *(void (__fastcall **)(Caver::GameMenuViewController *, __int64 *))(*(_QWORD *)this + 80LL);
      v35 = v25;
      v36 = v24;
      if ( v24 )
        ++v24[1];
      v26(this, &v35);
      v27 = v36;
      if ( v36 )
      {
        v28 = v36[1] - 1LL;
        v36[1] = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          v29 = v27[2] - 1LL;
          v27[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
        }
      }
      v30 = v38;
      if ( v38 )
      {
        v31 = v38[1] - 1LL;
        v38[1] = v31;
        if ( !v31 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
          v32 = v30[2] - 1LL;
          v30[2] = v32;
          if ( !v32 )
            (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
        }
      }
    }
    else
    {
      v6 = *((_QWORD *)this + 16);
      if ( v6 )
        (*(void (__fastcall **)(__int64, Caver::GameMenuViewController *, _QWORD))(*(_QWORD *)v6 + 16LL))(
          v6,
          this,
          *(unsigned __int8 *)(*((_QWORD *)a2 + 33) + 328LL));
      v7 = *((_QWORD *)this + 19);
      v8 = *(Caver::MapMenuPage **)(v7 + 312);
      v9 = *(_QWORD **)(v7 + 320);
      if ( v9 )
      {
        if ( !v9[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v10 = v9[2] - 1LL;
          v9[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      v11 = (Caver::MapView *)*((_QWORD *)v8 + 57);
      v12 = (_QWORD *)*((_QWORD *)v8 + 58);
      if ( v12 )
        ++v12[1];
      Caver::MapView::UpdateTargetPath(v11);
      if ( v12 )
      {
        v13 = v12[1] - 1LL;
        v12[1] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      v15 = (Caver::MapView *)*((_QWORD *)v8 + 57);
      v16 = (_QWORD *)*((_QWORD *)v8 + 58);
      if ( v16 )
        ++v16[1];
      Caver::MapView::UpdateDefaultNodeVisibility(v15);
      if ( v16 )
      {
        v17 = v16[1] - 1LL;
        v16[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
      Caver::MapMenuPage::UpdateMapViewBounds(v8);
    }
  }
  else if ( *((Caver::GuideToggleView **)this + 23) == a2 )
  {
    v4 = *((_QWORD *)this + 16);
    if ( v4 )
      (*(void (__fastcall **)(__int64, Caver::GameMenuViewController *, _QWORD))(*(_QWORD *)v4 + 24LL))(
        v4,
        this,
        *(unsigned __int8 *)(*((_QWORD *)a2 + 33) + 328LL));
  }
}

