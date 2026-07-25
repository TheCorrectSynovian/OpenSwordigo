/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000499288
 * Mangled: _ZN5Caver23GUINavigationController24ViewControllerViewLoadedEPNS_17GUIViewControllerE
 * Demangled: Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *
 * Callers: 1
 *   0x00000000001FB910  Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9740  Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *   0x00000000001FB910  Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x000000000049929C string=0x00000000004992A0 "W"
 *   insn=0x00000000004992B0 string=0x00000000004992B4 "h*@"
 *   insn=0x00000000004992B8 string=0x00000000004992BC "`"
 *   insn=0x00000000004992CC string=0x0000000000499664 "s"
 *   insn=0x00000000004992F4 string=0x00000000004992F8 "@"
 *   insn=0x0000000000499308 string=0x0000000000499318 "\tq@"
 *   insn=0x000000000049930C string=0x0000000000499310 ")"
 *   insn=0x0000000000499318 string=0x000000000049931C "?I"
 *   insn=0x0000000000499320 string=0x0000000000499354 "5"
 *   insn=0x0000000000499324 string=0x0000000000499328 "I"
 *   insn=0x0000000000499328 string=0x000000000049932C "\tq"
 *   insn=0x000000000049932C string=0x0000000000499330 " "
 *   insn=0x0000000000499330 string=0x0000000000499334 "H"
 *   insn=0x0000000000499334 string=0x0000000000583734 "o"
 *   insn=0x0000000000499344 string=0x0000000000499348 ""
 *   insn=0x0000000000499348 string=0x000000000049934C "-@"
 *   insn=0x0000000000499354 string=0x0000000000499398 "v"
 *   insn=0x0000000000499358 string=0x000000000049935C ""
 *   insn=0x000000000049936C string=0x0000000000499370 "\t@"
 *   insn=0x0000000000499378 string=0x000000000049937C ""
 *   insn=0x000000000049938C string=0x0000000000499390 "@"
 *   insn=0x000000000049939C string=0x00000000004993A0 "h"
 *   insn=0x000000000049939C string=0x00000000004993B4 "u"
 *   insn=0x00000000004993A4 string=0x00000000004993A8 "@"
 *   insn=0x00000000004993AC string=0x00000000004993B0 "v"
 *   insn=0x00000000004993BC string=0x00000000004993C0 ""
 *   insn=0x00000000004993CC string=0x00000000004993D0 "89@"
 *   insn=0x00000000004993D8 string=0x00000000004993DC "@"
 *   insn=0x00000000004993F8 string=0x00000000004993FC "\t"
 *   insn=0x00000000004993FC string=0x0000000000499400 ")"
 *   insn=0x0000000000499400 string=0x0000000000499404 "\t"
 *   insn=0x0000000000499418 string=0x000000000049941C "6"
 *   insn=0x000000000049941C string=0x0000000000499460 "5"
 *   insn=0x0000000000499420 string=0x0000000000499424 ""
 *   insn=0x0000000000499430 string=0x0000000000499434 "\t@"
 *   insn=0x0000000000499440 string=0x0000000000499444 ""
 *   insn=0x0000000000499450 string=0x0000000000499454 "@"
 *   insn=0x0000000000499464 string=0x0000000000499468 ""
 *   insn=0x0000000000499478 string=0x000000000049947C "\t@"
 *   insn=0x0000000000499484 string=0x0000000000499488 ""
 *   insn=0x0000000000499498 string=0x000000000049949C "@"
 *   insn=0x00000000004994A8 string=0x00000000004994AC ""
 *   insn=0x00000000004994C0 string=0x00000000004994C4 "@"
 *   insn=0x00000000004994D4 string=0x00000000004994E4 ""
 *   insn=0x00000000004994D8 string=0x00000000004994DC ""
 *   insn=0x00000000004994E4 string=0x00000000004994E8 "y@"
 *   insn=0x00000000004994F0 string=0x00000000004994F4 "5"
 *   insn=0x00000000004994F8 string=0x00000000004994FC ""
 *   insn=0x000000000049950C string=0x0000000000499510 "\t@"
 *   insn=0x0000000000499518 string=0x000000000049951C ""
 *   insn=0x000000000049952C string=0x0000000000499530 "@"
 *   insn=0x0000000000499538 string=0x00000000004995B4 "`2@"
 *   insn=0x0000000000499548 string=0x000000000049954C "@"
 *   insn=0x000000000049955C string=0x000000000049956C "u"
 *   insn=0x0000000000499560 string=0x0000000000499564 ""
 *   insn=0x000000000049956C string=0x0000000000499570 "4"
 *   insn=0x000000000049956C string=0x00000000001F9740 "0'"
 *   insn=0x0000000000499574 string=0x0000000000499578 ""
 *   insn=0x0000000000499588 string=0x000000000049958C "\t@"
 *   insn=0x0000000000499594 string=0x0000000000499598 ""
 *   insn=0x00000000004995A8 string=0x00000000004995AC "@"
 *   insn=0x00000000004995B4 string=0x00000000004995B8 "@"
 *   insn=0x00000000004995B8 string=0x00000000004995BC ""
 *   insn=0x00000000004995BC string=0x00000000004995C0 "\t"
 *   insn=0x00000000004995C4 string=0x00000000004995C8 " "
 *   insn=0x00000000004995CC string=0x00000000004995D0 "4"
 *   insn=0x00000000004995D0 string=0x0000000000499614 "t6@"
 *   insn=0x00000000004995D4 string=0x00000000004995D8 ""
 *   insn=0x00000000004995E8 string=0x00000000004995EC "\t@"
 *   insn=0x00000000004995F4 string=0x00000000004995F8 ""
 *   insn=0x0000000000499608 string=0x000000000049960C "@"
 *   insn=0x0000000000499618 string=0x000000000049961C "4"
 *   insn=0x0000000000499620 string=0x0000000000499624 ""
 *   insn=0x0000000000499634 string=0x0000000000499638 "\t@"
 *   insn=0x0000000000499640 string=0x0000000000499644 ""
 *   insn=0x0000000000499654 string=0x0000000000499658 "@"
 *   insn=0x0000000000499664 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000499670 string=0x0000000000499674 ""
 *   insn=0x0000000000499678 string=0x000000000049967C "a"
 *   insn=0x0000000000499680 string=0x0000000000499684 "\t@"
 *   insn=0x0000000000499690 string=0x0000000000499694 ""
 *   insn=0x0000000000499698 string=0x000000000049969C "a\n"
 *   insn=0x00000000004996A0 string=0x00000000004996A4 "@"
 *   insn=0x00000000004996AC string=0x00000000004996B0 "N"
 *   insn=0x00000000004996BC string=0x00000000004996C0 ""
 *   insn=0x00000000004996CC string=0x00000000004996D0 "\t@"
 *   insn=0x00000000004996DC string=0x00000000004996E0 ""
 *   insn=0x00000000004996EC string=0x00000000004996F0 "@"
 *   insn=0x00000000004996F8 string=0x00000000004996FC ";"
 *   insn=0x0000000000499700 string=0x0000000000499704 "5"
 *   insn=0x0000000000499704 string=0x0000000000499708 "8"
 *   insn=0x0000000000499714 string=0x0000000000499718 ""
 *   insn=0x000000000049971C string=0x0000000000499720 "A"
 *   insn=0x0000000000499724 string=0x0000000000499728 "\t@"
 *   insn=0x0000000000499734 string=0x0000000000499738 ""
 *   insn=0x000000000049973C string=0x0000000000499740 "A"
 *   insn=0x0000000000499744 string=0x0000000000499748 "@"
 *   insn=0x0000000000499750 string=0x0000000000499754 "%"
 *   insn=0x000000000049975C string=0x0000000000499760 "4"
 *   insn=0x0000000000499760 string=0x00000000004997A4 "5"
 *   insn=0x0000000000499764 string=0x0000000000499768 ""
 *   insn=0x0000000000499774 string=0x0000000000499778 "\t@"
 *   insn=0x0000000000499784 string=0x0000000000499788 ""
 *   insn=0x0000000000499794 string=0x0000000000499798 "@"
 *   insn=0x00000000004997A8 string=0x00000000004997AC ""
 *   insn=0x00000000004997B8 string=0x00000000004997BC "\t@"
 *   insn=0x00000000004997C8 string=0x00000000004997CC ""
 *   insn=0x00000000004997D8 string=0x00000000004997DC "@"
 *   insn=0x00000000004997E8 string=0x00000000004997EC "6"
 *   insn=0x00000000004997F4 string=0x00000000004997F8 "F"
 *   insn=0x00000000004997F8 string=0x00000000001FB910 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIViewController **__fastcall Caver::GUINavigationController::ViewControllerViewLoaded(
        Caver::GUIViewController **this,
        Caver::GUIViewController *a2)
{
  Caver::GUIViewController **v2; // x19
  __int64 v4; // x8
  _QWORD *v5; // x21
  float *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIViewController *v9; // x22
  Caver::GUIViewController *v10; // x21
  __int64 v11; // x8
  void (__fastcall *v12)(Caver::GUIViewController *, _QWORD, __int64 *); // x24
  _QWORD *v13; // x8
  _QWORD *v14; // x22
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x0
  _QWORD *v20; // x21
  __int64 v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  Caver::GUIView *v24; // x0
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  Caver::GUIViewController *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // [xsp+8h] [xbp-58h] BYREF
  _QWORD *v35; // [xsp+10h] [xbp-50h]
  __int64 v36; // [xsp+18h] [xbp-48h] BYREF
  _QWORD *v37; // [xsp+20h] [xbp-40h]
  __int64 v38; // [xsp+28h] [xbp-38h]

  v2 = this;
  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[10] == a2 )
  {
    v4 = *((_QWORD *)a2 + 3);
    if ( !v4 )
    {
      (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)a2 + 24LL))(a2);
      v4 = *((_QWORD *)a2 + 3);
    }
    v5 = (_QWORD *)*((_QWORD *)a2 + 4);
    if ( v5 )
      ++v5[1];
    if ( *(_DWORD *)(v4 + 112) != 18 )
    {
      v6 = *(float **)(v4 + 88);
      *(_DWORD *)(v4 + 112) = 18;
      if ( v6 )
      {
        if ( v6[35] > 0.001 )
          (*(void (__fastcall **)(float *))(*(_QWORD *)v6 + 88LL))(v6);
      }
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v9 = v2[3];
    if ( !v9 )
    {
      (*((void (__fastcall **)(Caver::GUIViewController **))*v2 + 3))(v2);
      v9 = v2[3];
    }
    v10 = v2[4];
    if ( v10 )
      ++*((_QWORD *)v10 + 1);
    v11 = *((_QWORD *)a2 + 3);
    v12 = *(void (__fastcall **)(Caver::GUIViewController *, _QWORD, __int64 *))(*(_QWORD *)v9 + 112LL);
    if ( !v11 )
    {
      (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)a2 + 24LL))(a2);
      v11 = *((_QWORD *)a2 + 3);
    }
    v36 = v11;
    v13 = (_QWORD *)*((_QWORD *)a2 + 4);
    v37 = v13;
    if ( v13 )
      ++v13[1];
    v12(v9, 0, &v36);
    v14 = v37;
    if ( v37 )
    {
      v15 = v37[1] - 1LL;
      v37[1] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        v16 = v14[2] - 1LL;
        v14[2] = v16;
        if ( !v16 )
          (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
      }
    }
    if ( v10 )
    {
      v17 = *((_QWORD *)v10 + 1) - 1LL;
      *((_QWORD *)v10 + 1) = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)v10 + 16LL))(v10);
        v18 = *((_QWORD *)v10 + 2) - 1LL;
        *((_QWORD *)v10 + 2) = v18;
        if ( !v18 )
          (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)v10 + 24LL))(v10);
      }
    }
    (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)a2 + 56LL))(a2);
    v19 = *((_QWORD *)a2 + 3);
    if ( !v19 )
    {
      (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)a2 + 24LL))(a2);
      v19 = *((_QWORD *)a2 + 3);
    }
    v20 = (_QWORD *)*((_QWORD *)a2 + 4);
    if ( v20 )
      ++v20[1];
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 240LL))(v19);
    if ( v20 )
    {
      v22 = v20[1] - 1LL;
      v20[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v23 = v20[2] - 1LL;
        v20[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
      }
    }
    if ( v21 )
    {
      v24 = (Caver::GUIView *)*((_QWORD *)a2 + 3);
      if ( !v24 )
      {
        (*(void (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)a2 + 24LL))(a2);
        v24 = (Caver::GUIView *)*((_QWORD *)a2 + 3);
      }
      v25 = (_QWORD *)*((_QWORD *)a2 + 4);
      if ( v25 )
        ++v25[1];
      Caver::GUIView::FindAndSetSubviewFirstResponder(v24);
      if ( v25 )
      {
        v26 = v25[1] - 1LL;
        v25[1] = v26;
        if ( !v26 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
          v27 = v25[2] - 1LL;
          v25[2] = v27;
          if ( !v27 )
            (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
        }
      }
    }
    this = (Caver::GUIViewController **)v2[12];
    if ( this )
    {
      this = (Caver::GUIViewController **)(*((_QWORD *(__fastcall **)(__int64 *__return_ptr))*this + 39))(&v34);
      v28 = v35;
      if ( v35 )
      {
        v29 = v35[1] - 1LL;
        v35[1] = v29;
        if ( !v29 )
        {
          this = (Caver::GUIViewController **)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
          v30 = v28[2] - 1LL;
          v28[2] = v30;
          if ( !v30 )
            this = (Caver::GUIViewController **)(*(__int64 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
        }
      }
      v31 = v2[13];
      v2[12] = 0;
      v2[13] = 0;
      if ( v31 )
      {
        v32 = *((_QWORD *)v31 + 1) - 1LL;
        *((_QWORD *)v31 + 1) = v32;
        if ( !v32 )
        {
          this = (Caver::GUIViewController **)(*(__int64 (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)v31 + 16LL))(v31);
          v33 = *((_QWORD *)v31 + 2) - 1LL;
          *((_QWORD *)v31 + 2) = v33;
          if ( !v33 )
            return (Caver::GUIViewController **)(*(__int64 (__fastcall **)(Caver::GUIViewController *))(*(_QWORD *)v31 + 24LL))(v31);
        }
      }
    }
  }
  return this;
}

