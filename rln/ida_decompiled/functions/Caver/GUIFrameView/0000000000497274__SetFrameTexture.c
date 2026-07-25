/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000497274
 * Mangled: _ZN5Caver12GUIFrameView15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEEb
 * Demangled: Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Callers: 1
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F64D0  Caver::GUIRoundedRect::SetColor(Caver::Color)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x0000000000200A70  Caver::GUIRoundedRect::GUIRoundedRect(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004975D0  Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 99
 *   insn=0x0000000000497288 string=0x000000000049728C "W"
 *   insn=0x00000000004972A4 string=0x00000000004972A8 "i"
 *   insn=0x00000000004972B0 string=0x00000000004972B4 "v~@"
 *   insn=0x00000000004972B8 string=0x00000000004972BC "v"
 *   insn=0x00000000004972BC string=0x0000000000497328 "vz@"
 *   insn=0x00000000004972C0 string=0x00000000004972C4 "@"
 *   insn=0x00000000004972C4 string=0x00000000004972C8 "&w"
 *   insn=0x00000000004972C8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004972CC string=0x00000000004972D0 "@"
 *   insn=0x00000000004972D0 string=0x00000000004972D4 "#w"
 *   insn=0x00000000004972DC string=0x00000000004972E0 "@"
 *   insn=0x00000000004972E0 string=0x00000000004972E4 ""
 *   insn=0x00000000004972E4 string=0x00000000004972E8 ""
 *   insn=0x00000000004972EC string=0x00000000004972F0 ""
 *   insn=0x00000000004972F0 string=0x00000000004972F4 ""
 *   insn=0x0000000000497300 string=0x0000000000497304 "@"
 *   insn=0x0000000000497304 string=0x0000000000497308 ""
 *   insn=0x0000000000497308 string=0x000000000049730C ""
 *   insn=0x0000000000497310 string=0x0000000000497314 ""
 *   insn=0x0000000000497314 string=0x0000000000497318 ""
 *   insn=0x0000000000497324 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000497338 string=0x000000000049733C "@"
 *   insn=0x000000000049733C string=0x0000000000497340 ""
 *   insn=0x0000000000497340 string=0x0000000000497344 ""
 *   insn=0x0000000000497348 string=0x000000000049734C ""
 *   insn=0x000000000049734C string=0x0000000000497350 ""
 *   insn=0x0000000000497364 string=0x0000000000497368 "\t\t@"
 *   insn=0x0000000000497364 string=0x0000000000497374 "`"
 *   insn=0x0000000000497368 string=0x000000000049736C ")"
 *   insn=0x000000000049736C string=0x0000000000497370 "\t\t"
 *   insn=0x0000000000497374 string=0x0000000000497378 "h"
 *   insn=0x000000000049737C string=0x0000000000497380 "@"
 *   insn=0x0000000000497380 string=0x0000000000497384 ""
 *   insn=0x0000000000497384 string=0x0000000000497388 ""
 *   insn=0x0000000000497388 string=0x000000000049738C "`"
 *   insn=0x000000000049738C string=0x00000000004974F8 ""
 *   insn=0x00000000004973A0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004973A4 string=0x00000000004973A8 "*"
 *   insn=0x00000000004973A8 string=0x00000000004973AC "vz@"
 *   insn=0x00000000004973A8 string=0x00000000001FD850 "0'"
 *   insn=0x00000000004973AC string=0x00000000004973B0 "uz"
 *   insn=0x00000000004973BC string=0x00000000004973C0 "@"
 *   insn=0x00000000004973C0 string=0x00000000004973C4 ""
 *   insn=0x00000000004973C4 string=0x00000000004973C8 ""
 *   insn=0x00000000004973CC string=0x00000000004973D0 ""
 *   insn=0x00000000004973D0 string=0x00000000004973D4 ""
 *   insn=0x00000000004973E0 string=0x00000000004973E4 "uz@"
 *   insn=0x00000000004973FC string=0x0000000000497400 "hz@"
 *   insn=0x00000000004973FC string=0x00000000001F6360 "0'"
 *   insn=0x0000000000497400 string=0x0000000000497404 "i"
 *   insn=0x0000000000497404 string=0x0000000000497408 "\t"
 *   insn=0x0000000000497408 string=0x000000000049740C "1"
 *   insn=0x000000000049740C string=0x00000000004974D0 "h"
 *   insn=0x0000000000497410 string=0x0000000000497414 "sx"
 *   insn=0x000000000049741C string=0x0000000000497420 "u~@"
 *   insn=0x0000000000497420 string=0x0000000000497424 "v~"
 *   insn=0x000000000049742C string=0x0000000000497430 "@"
 *   insn=0x0000000000497438 string=0x000000000049743C "@"
 *   insn=0x0000000000497448 string=0x000000000049744C "@"
 *   insn=0x000000000049744C string=0x0000000000497450 ""
 *   insn=0x0000000000497450 string=0x0000000000497454 ""
 *   insn=0x0000000000497458 string=0x000000000049745C ""
 *   insn=0x000000000049745C string=0x0000000000497460 ""
 *   insn=0x000000000049746C string=0x0000000000497470 "@"
 *   insn=0x0000000000497470 string=0x0000000000497474 ""
 *   insn=0x0000000000497474 string=0x0000000000497478 ""
 *   insn=0x000000000049747C string=0x0000000000497480 ""
 *   insn=0x0000000000497480 string=0x0000000000497484 ""
 *   insn=0x0000000000497490 string=0x0000000000497494 "v~@"
 *   insn=0x000000000049749C string=0x00000000004974A0 "\"
 *   insn=0x00000000004974A0 string=0x00000000004974A4 "h"
 *   insn=0x00000000004974A0 string=0x00000000001F9E10 "0'"
 *   insn=0x00000000004974A4 string=0x00000000004974A8 "`~@"
 *   insn=0x00000000004974B0 string=0x00000000004974B4 "h"
 *   insn=0x00000000004974B8 string=0x00000000004974BC "h"
 *   insn=0x00000000004974C0 string=0x00000000004974C4 "h"
 *   insn=0x00000000004974CC string=0x00000000001F64D0 "0'"
 *   insn=0x00000000004974D0 string=0x00000000004974D4 "`"
 *   insn=0x00000000004974D0 string=0x0000000000583734 "o"
 *   insn=0x00000000004974DC string=0x00000000004974E0 "m"
 *   insn=0x00000000004974E0 string=0x00000000004974E4 "h"
 *   insn=0x00000000004974E8 string=0x00000000004974EC "-@"
 *   insn=0x00000000004974F8 string=0x00000000004974FC ""
 *   insn=0x0000000000497518 string=0x0000000000497534 "g{"
 *   insn=0x0000000000497534 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000497544 string=0x0000000000497548 "\t\t@"
 *   insn=0x0000000000497548 string=0x000000000049754C ")"
 *   insn=0x000000000049754C string=0x0000000000497550 "\t\t"
 *   insn=0x0000000000497550 string=0x0000000000497554 "a"
 *   insn=0x0000000000497554 string=0x0000000000497558 "\t"
 *   insn=0x0000000000497558 string=0x000000000049755C ")"
 *   insn=0x0000000000497560 string=0x0000000000497564 " "
 *   insn=0x0000000000497584 string=0x0000000000497588 "\t\t@"
 *   insn=0x0000000000497588 string=0x000000000049758C ")"
 *   insn=0x000000000049758C string=0x0000000000497590 "\t\t"
 *   insn=0x0000000000497594 string=0x0000000000497598 "\t"
 *   insn=0x0000000000497598 string=0x000000000049759C ")"
 *   insn=0x00000000004975A0 string=0x00000000004975A4 " "
 *   insn=0x00000000004975B8 string=0x00000000004975C4 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIFrameView::SetFrameTexture(__int64 a1, __int64 *a2, char a3)
{
  _QWORD *v6; // x22
  void *v7; // x0
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  _QWORD *v13; // x22
  _DWORD *v14; // x0
  int v15; // w8
  __int64 v16; // x8
  _DWORD *v17; // x0
  int v18; // w8
  Caver::GUITexturedRect *v19; // x21
  _QWORD *v20; // x22
  _DWORD *v21; // x0
  int v22; // w8
  Caver::GUIRoundedRect *v23; // x22
  _QWORD *v24; // x21
  void *v25; // x0
  void *v26; // x0
  _DWORD *v27; // x0
  int v28; // w8
  _DWORD *v29; // x0
  int v30; // w8

  _ReadStatusReg(TPIDR_EL0);
  if ( *a2 != *(_QWORD *)(a1 + 256) )
  {
    v6 = *(_QWORD **)(a1 + 248);
    *(_QWORD *)(a1 + 248) = 0;
    if ( v6 )
    {
      v7 = (void *)v6[17];
      if ( v7 )
        operator delete[](v7);
      v8 = (void *)v6[14];
      if ( v8 )
        operator delete[](v8);
      v9 = (_DWORD *)v6[10];
      if ( v9 )
      {
        v10 = v9[2] - 1;
        v9[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      v11 = (_DWORD *)*v6;
      if ( *v6 )
      {
        v12 = v11[2] - 1;
        v11[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      operator delete(v6);
    }
    v13 = *(_QWORD **)(a1 + 240);
    *(_QWORD *)(a1 + 240) = 0;
    if ( v13 )
    {
      v14 = (_DWORD *)*v13;
      if ( *v13 )
      {
        v15 = v14[2] - 1;
        v14[2] = v15;
        if ( !v15 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      operator delete(v13);
    }
    v16 = *a2;
    if ( *a2 )
      ++*(_DWORD *)(v16 + 8);
    v17 = *(_DWORD **)(a1 + 256);
    *(_QWORD *)(a1 + 256) = v16;
    if ( v17 && (v18 = v17[2] - 1, (v17[2] = v18) == 0) )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( !*a2 )
        return;
    }
    else if ( !*a2 )
    {
      return;
    }
    if ( (a3 & 1) != 0 )
    {
      v19 = (Caver::GUITexturedRect *)operator new(0x70u);
      Caver::GUITexturedRect::GUITexturedRect(v19);
      v20 = *(_QWORD **)(a1 + 240);
      *(_QWORD *)(a1 + 240) = v19;
      if ( v20 )
      {
        v21 = (_DWORD *)*v20;
        if ( *v20 )
        {
          v22 = v21[2] - 1;
          v21[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
        }
        operator delete(v20);
      }
      Caver::GUITexturedRect::InitWithTexture();
      *(_DWORD *)(*(_QWORD *)(a1 + 240) + 28LL) = *(_DWORD *)(a1 + 233);
    }
    else
    {
      v23 = (Caver::GUIRoundedRect *)operator new(0xA8u);
      Caver::GUIRoundedRect::GUIRoundedRect(v23);
      v24 = *(_QWORD **)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v23;
      if ( v24 )
      {
        v25 = (void *)v24[17];
        if ( v25 )
          operator delete[](v25);
        v26 = (void *)v24[14];
        if ( v26 )
          operator delete[](v26);
        v27 = (_DWORD *)v24[10];
        if ( v27 )
        {
          v28 = v27[2] - 1;
          v27[2] = v28;
          if ( !v28 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 8LL))(v27);
        }
        v29 = (_DWORD *)*v24;
        if ( *v24 )
        {
          v30 = v29[2] - 1;
          v29[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 8LL))(v29);
        }
        operator delete(v24);
      }
      Caver::GUIRoundedRect::InitWithTexture();
      Caver::GUIRoundedRect::SetColor();
    }
    if ( *(float *)(a1 + 140) > 0.001 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  }
}

