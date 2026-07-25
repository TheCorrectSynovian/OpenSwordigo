/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041F0FC
 * Mangled: _ZN5Caver11MapMenuPage26ShowTravelToButtonFromNodeEPNS_11MapViewNodeE
 * Demangled: Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *
 * Callers: 0
 *
 * Callees: 22
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8F40  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(Caver::GUIButton *)
 *   0x00000000001F9150  Caver::GUIView::GUIView(void)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x00000000001FCFC0  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEAD0  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000201FB0  Caver::GUIView::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,Caver::Rectangle const&,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 143
 *   insn=0x000000000041F110 string=0x000000000041F114 "W"
 *   insn=0x000000000041F128 string=0x000000000041F12C "-Y"
 *   insn=0x000000000041F12C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000041F134 string=0x000000000041F138 "f~"
 *   insn=0x000000000041F144 string=0x00000000001F8F40 "0'"
 *   insn=0x000000000041F15C string=0x00000000001FB170 "0'"
 *   insn=0x000000000041F160 string=0x000000000041F164 "s^"
 *   insn=0x000000000041F164 string=0x00000000001F6B30 "0'"
 *   insn=0x000000000041F174 string=0x00000000001FD9B0 "0'"
 *   insn=0x000000000041F180 string=0x000000000041F184 "`"
 *   insn=0x000000000041F18C string=0x000000000041F190 "*"
 *   insn=0x000000000041F190 string=0x000000000041F194 "J"
 *   insn=0x000000000041F194 string=0x000000000041F198 "*"
 *   insn=0x000000000041F1A0 string=0x000000000041F1A4 "6"
 *   insn=0x000000000041F1A8 string=0x000000000041F1AC ""
 *   insn=0x000000000041F1B8 string=0x000000000041F1BC "\t@"
 *   insn=0x000000000041F1C8 string=0x000000000041F1CC ""
 *   insn=0x000000000041F1D8 string=0x000000000041F1DC "@"
 *   insn=0x000000000041F1EC string=0x00000000001F8510 "0'"
 *   insn=0x000000000041F1F0 string=0x000000000041F1F4 "5"
 *   insn=0x000000000041F1F8 string=0x000000000041F1FC ""
 *   insn=0x000000000041F208 string=0x000000000041F20C "\t@"
 *   insn=0x000000000041F218 string=0x000000000041F21C ""
 *   insn=0x000000000041F228 string=0x000000000041F22C "@"
 *   insn=0x000000000041F238 string=0x000000000041F23C "=^"
 *   insn=0x000000000041F248 string=0x000000000041F24C "A"
 *   insn=0x000000000041F274 string=0x000000000041F278 ""
 *   insn=0x000000000041F280 string=0x000000000041F284 "6"
 *   insn=0x000000000041F288 string=0x000000000041F28C ""
 *   insn=0x000000000041F298 string=0x000000000041F29C "\t@"
 *   insn=0x000000000041F2A8 string=0x000000000041F2AC ""
 *   insn=0x000000000041F2B8 string=0x000000000041F2BC "@"
 *   insn=0x000000000041F2D4 string=0x000000000059472C "Teleport To"
 *   insn=0x000000000041F2E0 string=0x000000000041F2E4 "5"
 *   insn=0x000000000041F2F0 string=0x00000000001FC220 "0'"
 *   insn=0x000000000041F2F4 string=0x000000000041F2F8 ")"
 *   insn=0x000000000041F2F8 string=0x000000000041F2FC ")"
 *   insn=0x000000000041F308 string=0x000000000041F4A8 ")"
 *   insn=0x000000000041F31C string=0x00000000001F9150 "0'"
 *   insn=0x000000000041F324 string=0x000000000041F328 "&w"
 *   insn=0x000000000041F328 string=0x00000000001FCFC0 "0'"
 *   insn=0x000000000041F340 string=0x000000000041F344 ""
 *   insn=0x000000000041F344 string=0x000000000041F348 "1@"
 *   insn=0x000000000041F350 string=0x000000000041F354 "*"
 *   insn=0x000000000041F354 string=0x000000000041F358 "J"
 *   insn=0x000000000041F358 string=0x000000000041F35C "*"
 *   insn=0x000000000041F368 string=0x000000000041F36C "5"
 *   insn=0x000000000041F370 string=0x000000000041F374 ""
 *   insn=0x000000000041F380 string=0x000000000041F384 "\t@"
 *   insn=0x000000000041F390 string=0x000000000041F394 ""
 *   insn=0x000000000041F3A0 string=0x000000000041F3A4 "@"
 *   insn=0x000000000041F3B4 string=0x000000000041F3B8 "Bd"
 *   insn=0x000000000041F3C4 string=0x000000000041F3C8 "b"
 *   insn=0x000000000041F3F0 string=0x000000000041F3F4 "3"
 *   insn=0x000000000041F3F4 string=0x000000000041F3F8 "h"
 *   insn=0x000000000041F3F8 string=0x000000000041F3FC ""
 *   insn=0x000000000041F3FC string=0x000000000041F400 "h"
 *   insn=0x000000000041F404 string=0x000000000041F408 "h"
 *   insn=0x000000000041F408 string=0x000000000041F40C "\t@"
 *   insn=0x000000000041F414 string=0x000000000041F418 "h\n@"
 *   insn=0x000000000041F418 string=0x000000000041F41C ""
 *   insn=0x000000000041F41C string=0x000000000041F420 "h\n"
 *   insn=0x000000000041F424 string=0x000000000041F428 "h"
 *   insn=0x000000000041F428 string=0x000000000041F42C "@"
 *   insn=0x000000000041F438 string=0x000000000041F43C "3"
 *   insn=0x000000000041F43C string=0x000000000041F440 "h"
 *   insn=0x000000000041F440 string=0x000000000041F444 ""
 *   insn=0x000000000041F444 string=0x000000000041F448 "h"
 *   insn=0x000000000041F44C string=0x000000000041F450 "h"
 *   insn=0x000000000041F454 string=0x000000000041F458 "\t@"
 *   insn=0x000000000041F45C string=0x000000000041F460 "h\n@"
 *   insn=0x000000000041F460 string=0x000000000041F464 ""
 *   insn=0x000000000041F464 string=0x000000000041F468 "h\n"
 *   insn=0x000000000041F46C string=0x000000000041F470 "h"
 *   insn=0x000000000041F474 string=0x000000000041F478 "@"
 *   insn=0x000000000041F48C string=0x000000000041F4EC "y["
 *   insn=0x000000000041F4A8 string=0x000000000041F4AC ")=G"
 *   insn=0x000000000041F4AC string=0x000000000041F4B0 "!"
 *   insn=0x000000000041F4B4 string=0x000000000041F4B8 "\t"
 *   insn=0x000000000041F4B4 string=0x000000000041F4CC "\t"
 *   insn=0x000000000041F4B8 string=0x000000000041F4BC "*"
 *   insn=0x000000000041F4BC string=0x000000000041F4C0 "\n"
 *   insn=0x000000000041F4C8 string=0x000000000041F4D8 "?"
 *   insn=0x000000000041F4CC string=0x000000000041F4D0 "*"
 *   insn=0x000000000041F4D0 string=0x000000000041F4D4 "\n"
 *   insn=0x000000000041F4EC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041F500 string=0x000000000041F504 ""
 *   insn=0x000000000041F510 string=0x000000000041F514 "\t@"
 *   insn=0x000000000041F520 string=0x000000000041F524 ""
 *   insn=0x000000000041F530 string=0x000000000041F534 "@"
 *   insn=0x000000000041F53C string=0x000000000041F540 "["
 *   insn=0x000000000041F550 string=0x000000000041F554 "t"
 *   insn=0x000000000041F558 string=0x000000000041F55C ""
 *   insn=0x000000000041F568 string=0x000000000041F56C "\t@"
 *   insn=0x000000000041F578 string=0x000000000041F57C ""
 *   insn=0x000000000041F588 string=0x000000000041F58C "@"
 *   insn=0x000000000041F5A0 string=0x000000000041F5A4 "T"
 *   insn=0x000000000041F5A8 string=0x000000000041F5AC ""
 *   insn=0x000000000041F5B8 string=0x000000000041F5BC "\t@"
 *   insn=0x000000000041F5C8 string=0x000000000041F5CC ""
 *   insn=0x000000000041F5D8 string=0x000000000041F5DC "@"
 *   insn=0x000000000041F5E4 string=0x000000000041F5E8 "1"
 *   insn=0x000000000041F5F0 string=0x000000000041F5F4 "/_"
 *   insn=0x000000000041F5F4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041F5FC string=0x000000000041F600 "="
 *   insn=0x000000000041F604 string=0x000000000041F608 "*"
 *   insn=0x000000000041F608 string=0x000000000041F60C "J"
 *   insn=0x000000000041F610 string=0x000000000041F614 "(a"
 *   insn=0x000000000041F61C string=0x000000000041F620 "*"
 *   insn=0x000000000041F620 string=0x000000000041F624 "J=G"
 *   insn=0x000000000041F624 string=0x000000000041F628 ")!"
 *   insn=0x000000000041F62C string=0x000000000041F630 "*"
 *   insn=0x000000000041F62C string=0x000000000041F660 "*"
 *   insn=0x000000000041F630 string=0x000000000041F634 "K"
 *   insn=0x000000000041F634 string=0x000000000041F638 "+"
 *   insn=0x000000000041F63C string=0x000000000041F640 "_"
 *   insn=0x000000000041F640 string=0x000000000041F644 "L"
 *   insn=0x000000000041F64C string=0x000000000041F650 "U+"
 *   insn=0x000000000041F658 string=0x000000000041F65C "&"
 *   insn=0x000000000041F660 string=0x000000000041F664 "K"
 *   insn=0x000000000041F664 string=0x000000000041F668 "+"
 *   insn=0x000000000041F668 string=0x000000000041F66C "_"
 *   insn=0x000000000041F684 string=0x000000000041F688 "\n_"
 *   insn=0x000000000041F6AC string=0x000000000041F6B0 "4"
 *   insn=0x000000000041F6B4 string=0x000000000041F6B8 ""
 *   insn=0x000000000041F6C4 string=0x000000000041F6C8 "\t@"
 *   insn=0x000000000041F6D4 string=0x000000000041F6D8 ""
 *   insn=0x000000000041F6E4 string=0x000000000041F6E8 "@"
 *   insn=0x000000000041F6F4 string=0x000000000041F6F8 "s"
 *   insn=0x000000000041F710 string=0x000000000041F714 "V"
 *   insn=0x000000000041F718 string=0x000000000041F71C "I"
 *   insn=0x000000000041F71C string=0x000000000041F720 " "
 *   insn=0x000000000041F728 string=0x000000000041F72C "("
 *   insn=0x000000000041F72C string=0x000000000041F730 ""yC"
 *   insn=0x000000000041F73C string=0x000000000041F740 "@"
 *   insn=0x000000000041F748 string=0x000000000041F74C " ( "
 *   insn=0x000000000041F754 string=0x000000000041F758 "t"
 *   insn=0x000000000041F758 string=0x000000000041F75C "i"
 *   insn=0x000000000041F76C string=0x000000000041F770 "h"
 *   insn=0x000000000041F788 string=0x000000000041F78C "!@!"
 *   insn=0x000000000041F790 string=0x000000000041F794 "3i"
 *   insn=0x000000000041F794 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000041F7A4 string=0x00000000001F6F20 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::GUIView **this, float32x2_t **a2)
{
  Caver::FontLibrary *v4; // x0
  Caver::FontLibrary *v5; // x21
  Caver::FontLibrary *v6; // x0
  Caver::GUIView *v7; // x8
  Caver::GUIView *v8; // x9
  _QWORD *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x8
  Caver::GUIView *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x0
  Caver::GUILabel *v16; // x21
  _QWORD *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x8
  Caver::GUIButton *v20; // x21
  char *v21; // x0
  Caver::GUIView *v22; // x0
  void (*v23)(void); // x8
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  Caver::GUIView *v32; // x19
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x19
  __int64 v36; // x8
  __int64 v37; // x8
  unsigned int *v38; // x8
  int v39; // w9
  _QWORD v40[2]; // [xsp+70h] [xbp-80h] BYREF
  Caver::GUIButton *v41; // [xsp+80h] [xbp-70h] BYREF
  _QWORD *v42; // [xsp+88h] [xbp-68h]
  Caver::GUIView *v43[2]; // [xsp+90h] [xbp-60h] BYREF
  Caver::GUIButton *v44; // [xsp+A8h] [xbp-48h]
  _QWORD *v45; // [xsp+B0h] [xbp-40h]
  __int64 v46; // [xsp+B8h] [xbp-38h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  operator new(0x1D0u);
  Caver::GUIButton::GUIButton();
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>();
  *(_OWORD *)v43 = xmmword_594700;
  Caver::GUIView::SetFrame(v44, (const Caver::Rectangle *)v43);
  Caver::GUIButton::titleLabel(v44);
  v5 = v4;
  v6 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(v4);
  Caver::FontLibrary::DefaultFont(v6);
  v7 = v43[0];
  if ( v43[0] != *((Caver::GUIView **)v5 + 30) )
  {
    v8 = v43[1];
    if ( v43[1] )
      ++*((_QWORD *)v43[1] + 1);
    v9 = (_QWORD *)*((_QWORD *)v5 + 31);
    *((_QWORD *)v5 + 30) = v7;
    *((_QWORD *)v5 + 31) = v8;
    if ( v9 )
    {
      v10 = v9[1] - 1LL;
      v9[1] = v10;
      if ( !v10 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v11 = v9[2] - 1LL;
        v9[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
    Caver::GUILabel::UpdateText(v5);
  }
  v12 = v43[1];
  if ( v43[1] )
  {
    v13 = *((_QWORD *)v43[1] + 1) - 1LL;
    *((_QWORD *)v43[1] + 1) = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v12 + 16LL))(v12);
      v14 = *((_QWORD *)v12 + 2) - 1LL;
      *((_QWORD *)v12 + 2) = v14;
      if ( !v14 )
        (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v12 + 24LL))(v12);
    }
  }
  Caver::GUIButton::titleLabel(v44);
  v16 = (Caver::GUILabel *)v15;
  if ( *(unsigned __int8 *)(v15 + 264) != 255
    || *(unsigned __int8 *)(v15 + 265) != 255
    || *(unsigned __int8 *)(v15 + 266) != 255
    || *(unsigned __int8 *)(v15 + 267) != 255 )
  {
    v17 = *(_QWORD **)(v15 + 280);
    *(_DWORD *)(v15 + 264) = -1;
    *(_QWORD *)(v15 + 272) = 0;
    *(_QWORD *)(v15 + 280) = 0;
    if ( v17 )
    {
      v18 = v17[1] - 1LL;
      v17[1] = v18;
      if ( !v18 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
        v19 = v17[2] - 1LL;
        v17[2] = v19;
        if ( !v19 )
          (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
      }
    }
    Caver::GUILabel::UpdateText(v16);
  }
  v20 = v44;
  sub_566BB8((int)v43, "Teleport To");
  Caver::GUIButton::SetTitle(v20);
  v21 = (char *)v43[0] - 24;
  if ( (__int64 *)v43[0] - 3 != &qword_6FD2E0 )
  {
    v38 = (unsigned int *)((char *)v43[0] - 8);
    if ( &pthread_create )
    {
      do
        v39 = __ldaxr(v38);
      while ( __stlxr(v39 - 1, v38) );
    }
    else
    {
      v39 = (*v38)--;
    }
    if ( v39 <= 0 )
      operator delete(v21);
  }
  v22 = (Caver::GUIView *)operator new(0xF0u);
  Caver::GUIView::GUIView(v22);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>();
  Caver::GUIView::SetFrame(v43[0], (Caver::GUIButton *)((char *)v44 + 116));
  v23 = *(void (**)(void))(*(_QWORD *)v43[0] + 96LL);
  v41 = v44;
  v42 = v45;
  if ( v45 )
    ++v45[1];
  v23();
  v24 = v42;
  if ( v42 )
  {
    v25 = v42[1] - 1LL;
    v42[1] = v25;
    if ( !v25 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
      v26 = v24[2] - 1LL;
      v24[2] = v26;
      if ( !v26 )
        (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
    }
  }
  __asm { FMOV            V1.2S, #-16.0 }
  v40[0] = vadd_f32((*a2)[1], _D1).n64_u64[0];
  v40[1] = 0x4200000042000000LL;
  Caver::GUIView::ConvertRectFromView((__int64 *)&v41, (Caver::GUIView *)this, (const Caver::Rectangle *)v40, this[57]);
  Caver::GUIView::PresentPopoverViewFromRectangle();
  v32 = v43[1];
  if ( v43[1] )
  {
    v33 = *((_QWORD *)v43[1] + 1) - 1LL;
    *((_QWORD *)v43[1] + 1) = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v32 + 16LL))(v32);
      v34 = *((_QWORD *)v32 + 2) - 1LL;
      *((_QWORD *)v32 + 2) = v34;
      if ( !v34 )
        (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v32 + 24LL))(v32);
    }
  }
  v35 = v45;
  if ( v45 )
  {
    v36 = v45[1] - 1LL;
    v45[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
}

