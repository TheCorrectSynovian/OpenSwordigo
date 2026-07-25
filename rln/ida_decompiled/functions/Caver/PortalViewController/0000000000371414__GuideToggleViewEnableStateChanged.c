/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371414
 * Mangled: _ZN5Caver20PortalViewController33GuideToggleViewEnableStateChangedEPNS_15GuideToggleViewE
 * Demangled: Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callers: 1
 *   0x00000000001FBE40  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DF0  Caver::StoreViewController::StoreViewController(void)
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8BC0  Caver::MapView::UpdateTargetPath(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000203310  boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>(Caver::StoreViewController *)
 *   0x0000000000203C30  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000371758  `non-virtual thunk to'Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 92
 *   insn=0x0000000000371424 string=0x0000000000371428 "U"
 *   insn=0x000000000037143C string=0x0000000000371440 "!E9"
 *   insn=0x0000000000371444 string=0x0000000000371454 "`6@"
 *   insn=0x0000000000371458 string=0x000000000037145C ""
 *   insn=0x0000000000371458 string=0x0000000000371474 "hB@"
 *   insn=0x0000000000371464 string=0x0000000000371468 ""
 *   insn=0x0000000000371468 string=0x000000000037146C ""!E9"
 *   insn=0x000000000037147C string=0x00000000001F8BC0 "0'"
 *   insn=0x0000000000371488 string=0x000000000037148C "a"
 *   insn=0x000000000037148C string=0x0000000000371618 "."
 *   insn=0x00000000003714A8 string=0x00000000003714AC "q"
 *   insn=0x00000000003714AC string=0x00000000003714B0 "p7"
 *   insn=0x00000000003714AC string=0x00000000001F6E70 "0'"
 *   insn=0x00000000003714B8 string=0x000000000058ABC8 "Portal"
 *   insn=0x00000000003714D0 string=0x00000000003714D4 "u"
 *   insn=0x00000000003714DC string=0x00000000003714E0 ")"
 *   insn=0x00000000003714E8 string=0x00000000003714EC "A"
 *   insn=0x00000000003714F0 string=0x00000000003714F4 ";"
 *   insn=0x00000000003714F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003714F8 string=0x00000000003714FC "="
 *   insn=0x00000000003714FC string=0x00000000001F6DF0 "0'"
 *   insn=0x000000000037150C string=0x0000000000371510 "h"
 *   insn=0x0000000000371510 string=0x0000000000371514 "H)"
 *   insn=0x0000000000371514 string=0x0000000000371518 "h"
 *   insn=0x0000000000371518 string=0x000000000037151C ")@"
 *   insn=0x0000000000371524 string=0x0000000000371528 "*"
 *   insn=0x0000000000371528 string=0x000000000037152C "J"
 *   insn=0x000000000037152C string=0x0000000000371530 "*"
 *   insn=0x0000000000371540 string=0x0000000000371544 "3"
 *   insn=0x0000000000371544 string=0x0000000000371548 "h"
 *   insn=0x0000000000371548 string=0x000000000037154C ""
 *   insn=0x000000000037154C string=0x0000000000371550 "h"
 *   insn=0x0000000000371554 string=0x0000000000371558 "h"
 *   insn=0x0000000000371558 string=0x000000000037155C "\t@"
 *   insn=0x0000000000371564 string=0x0000000000371568 "h\n@"
 *   insn=0x0000000000371568 string=0x000000000037156C ""
 *   insn=0x000000000037156C string=0x0000000000371570 "h\n"
 *   insn=0x0000000000371574 string=0x0000000000371578 "h"
 *   insn=0x0000000000371578 string=0x000000000037157C "@"
 *   insn=0x000000000037158C string=0x0000000000371590 "h"
 *   insn=0x0000000000371590 string=0x0000000000371594 ""
 *   insn=0x0000000000371594 string=0x0000000000371598 "h"
 *   insn=0x0000000000371598 string=0x000000000037159C "!"
 *   insn=0x000000000037159C string=0x00000000003715A0 "h"
 *   insn=0x00000000003715A4 string=0x00000000003715A8 "\t@"
 *   insn=0x00000000003715AC string=0x00000000003715B0 "h\n@"
 *   insn=0x00000000003715B0 string=0x00000000003715B4 ""
 *   insn=0x00000000003715B4 string=0x00000000003715B8 "h\n"
 *   insn=0x00000000003715B8 string=0x00000000003715BC "!"
 *   insn=0x00000000003715BC string=0x00000000003715C0 "h"
 *   insn=0x00000000003715C4 string=0x00000000003715C8 "@"
 *   insn=0x00000000003715D4 string=0x00000000003715D8 ")=G"
 *   insn=0x00000000003715D8 string=0x00000000003715DC "!"
 *   insn=0x00000000003715E0 string=0x00000000003715E4 "\t"
 *   insn=0x00000000003715E0 string=0x00000000003715F8 "\t"
 *   insn=0x00000000003715E4 string=0x00000000003715E8 "*"
 *   insn=0x00000000003715E8 string=0x00000000003715EC "\n"
 *   insn=0x00000000003715F4 string=0x0000000000371604 "?"
 *   insn=0x00000000003715F8 string=0x00000000003715FC "*"
 *   insn=0x00000000003715FC string=0x0000000000371600 "\n"
 *   insn=0x0000000000371604 string=0x0000000000371608 "L"
 *   insn=0x000000000037160C string=0x0000000000371610 "e"
 *   insn=0x0000000000371618 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000371624 string=0x0000000000371628 "J"
 *   insn=0x0000000000371630 string=0x0000000000371634 "4"
 *   insn=0x0000000000371638 string=0x000000000037163C ""
 *   insn=0x0000000000371648 string=0x000000000037164C "\t@"
 *   insn=0x0000000000371658 string=0x000000000037165C ""
 *   insn=0x0000000000371668 string=0x000000000037166C "@"
 *   insn=0x0000000000371680 string=0x0000000000371684 ""
 *   insn=0x0000000000371688 string=0x000000000037168C "!"
 *   insn=0x0000000000371690 string=0x0000000000371694 "\t@"
 *   insn=0x00000000003716A0 string=0x00000000003716A4 ""
 *   insn=0x00000000003716A8 string=0x00000000003716AC "!"
 *   insn=0x00000000003716B0 string=0x00000000003716B4 "@"
 *   insn=0x00000000003716BC string=0x00000000003716C0 "$"
 *   insn=0x00000000003716D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003716D4 string=0x00000000003716D8 "{@"
 *   insn=0x00000000003716E0 string=0x00000000003716E4 "J"
 *   insn=0x00000000003716E8 string=0x00000000003716EC "(a"
 *   insn=0x00000000003716F8 string=0x00000000003716FC "J=G"
 *   insn=0x00000000003716FC string=0x0000000000371700 ")!"
 *   insn=0x0000000000371704 string=0x0000000000371708 "*"
 *   insn=0x0000000000371704 string=0x0000000000371734 "*"
 *   insn=0x0000000000371708 string=0x000000000037170C "K"
 *   insn=0x000000000037170C string=0x0000000000371710 "+"
 *   insn=0x0000000000371714 string=0x0000000000371718 "_"
 *   insn=0x000000000037172C string=0x0000000000371730 "e@"
 *   insn=0x0000000000371734 string=0x0000000000371738 "K"
 *   insn=0x0000000000371738 string=0x000000000037173C "+"
 *   insn=0x000000000037173C string=0x0000000000371740 "_"
 *   insn=0x0000000000371750 string=0x0000000000371754 "\@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalViewController::GuideToggleViewEnableStateChanged(
        Caver::PortalViewController *this,
        Caver::GuideToggleView *a2)
{
  Caver::StoreController *v4; // x0
  __int64 v5; // x0
  __int64 result; // x0
  Caver::GUISwitch *v7; // x0
  Caver::StoreController *updated; // x0
  __int64 v9; // x20
  void *v10; // x0
  Caver::StoreViewController *v11; // x0
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 (__fastcall *v14)(Caver::PortalViewController *, __int64 *); // x8
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x8
  unsigned int *v21; // x8
  int v22; // w9
  __int64 v23; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v24; // [xsp+8h] [xbp-48h]
  __int64 v25; // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v26; // [xsp+18h] [xbp-38h]
  __int64 v27; // [xsp+28h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(*((_QWORD *)a2 + 33) + 328LL)
    && (v4 = (Caver::StoreController *)Caver::StoreController::SharedController(this),
        (Caver::StoreController::IsGuideUnlockedCheck(v4) & 1) == 0) )
  {
    v7 = (Caver::GUISwitch *)*((_QWORD *)a2 + 33);
    *((_BYTE *)v7 + 328) = 0;
    updated = (Caver::StoreController *)Caver::GUISwitch::UpdateFrameTexture(v7);
    v9 = Caver::StoreController::SharedController(updated);
    sub_566BB8((int)&v25, "Portal");
    sub_56A6A8(v9 + 8);
    v10 = (void *)(v25 - 24);
    if ( (__int64 *)(v25 - 24) != &qword_6FD2E0 )
    {
      v21 = (unsigned int *)(v25 - 8);
      if ( &pthread_create )
      {
        do
          v22 = __ldaxr(v21);
        while ( __stlxr(v22 - 1, v21) );
      }
      else
      {
        v22 = (*v21)--;
      }
      if ( v22 <= 0 )
        operator delete(v10);
    }
    v11 = (Caver::StoreViewController *)operator new(0xD8u);
    Caver::StoreViewController::StoreViewController(v11);
    boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>();
    v13 = v25;
    v12 = v26;
    *(_QWORD *)(v25 + 80) = (char *)this + 96;
    v14 = *(__int64 (__fastcall **)(Caver::PortalViewController *, __int64 *))(*(_QWORD *)this + 80LL);
    v23 = v13;
    v24 = v12;
    if ( v12 )
      ++v12[1];
    result = v14(this, &v23);
    v15 = v24;
    if ( v24 )
    {
      v16 = v24[1] - 1LL;
      v24[1] = v16;
      if ( !v16 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
        v17 = v15[2] - 1LL;
        v15[2] = v17;
        if ( !v17 )
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
      }
    }
    v18 = v26;
    if ( v26 )
    {
      v19 = v26[1] - 1LL;
      v26[1] = v19;
      if ( !v19 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        v20 = v18[2] - 1LL;
        v18[2] = v20;
        if ( !v20 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
      }
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 13);
    if ( v5 )
      (*(void (__fastcall **)(__int64, Caver::PortalViewController *, _QWORD))(*(_QWORD *)v5 + 8LL))(
        v5,
        this,
        *(unsigned __int8 *)(*((_QWORD *)a2 + 33) + 328LL));
    return Caver::MapView::UpdateTargetPath(*(Caver::MapView **)(*((_QWORD *)this + 16) + 272LL));
  }
  return result;
}

