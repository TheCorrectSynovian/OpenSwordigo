/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DFD28
 * Mangled: _ZN5Caver7ManaBarC2Ev
 * Demangled: Caver::ManaBar::ManaBar(void)
 *
 * Callers: 1
 *   0x00000000001FA1A0  Caver::ManaBar::ManaBar(void)
 *
 * Callees: 17
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FEA80  Caver::GUISlider::GUISlider(void)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200E20  Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000201880  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>(Caver::GUISlider *)
 *   0x0000000000202CD0  Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 135
 *   insn=0x00000000003DFD3C string=0x00000000003DFD40 "V"
 *   insn=0x00000000003DFD4C string=0x00000000003DFD50 "|"
 *   insn=0x00000000003DFD50 string=0x00000000003DFD54 "("
 *   insn=0x00000000003DFD54 string=0x00000000003DFD58 ""
 *   insn=0x00000000003DFD5C string=0x00000000003DFD60 "A"
 *   insn=0x00000000003DFD60 string=0x00000000003DFD64 "h"
 *   insn=0x00000000003DFD70 string=0x00000000003DFD74 "wi"
 *   insn=0x00000000003DFD74 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003DFD7C string=0x0000000000592A66 "ui_manabar_background"
 *   insn=0x00000000003DFDA4 string=0x00000000003DFDA8 "5"
 *   insn=0x00000000003DFDB8 string=0x00000000003DFDBC "ei"
 *   insn=0x00000000003DFDB8 string=0x00000000003DFF98 ")"
 *   insn=0x00000000003DFDC4 string=0x0000000000592A7C "ui_manabar"
 *   insn=0x00000000003DFDD0 string=0x00000000003DFDD4 "y"
 *   insn=0x00000000003DFDF4 string=0x00000000003DFDF8 "!"
 *   insn=0x00000000003DFDF8 string=0x00000000003DFFBC ")"
 *   insn=0x00000000003DFE00 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003DFE18 string=0x00000000003DFE1C "hRO"
 *   insn=0x00000000003DFE28 string=0x00000000003DFE2C "i""
 *   insn=0x00000000003DFE30 string=0x00000000003DFE34 "4"
 *   insn=0x00000000003DFE38 string=0x00000000003DFE3C ""
 *   insn=0x00000000003DFE48 string=0x00000000003DFE4C "\t@"
 *   insn=0x00000000003DFE58 string=0x00000000003DFE5C ""
 *   insn=0x00000000003DFE68 string=0x00000000003DFE6C "@"
 *   insn=0x00000000003DFE90 string=0x00000000003DFE94 "h"
 *   insn=0x00000000003DFE94 string=0x00000000003DFE98 "iz@"
 *   insn=0x00000000003DFE98 string=0x00000000003DFE9C "1@"
 *   insn=0x00000000003DFEA0 string=0x00000000003DFEA4 "i~@"
 *   insn=0x00000000003DFEAC string=0x00000000003DFEB0 "*"
 *   insn=0x00000000003DFEB0 string=0x00000000003DFEB4 "J"
 *   insn=0x00000000003DFEB4 string=0x00000000003DFEB8 "*"
 *   insn=0x00000000003DFEC8 string=0x00000000003DFECC "4"
 *   insn=0x00000000003DFED0 string=0x00000000003DFED4 ""
 *   insn=0x00000000003DFEE0 string=0x00000000003DFEE4 "\t@"
 *   insn=0x00000000003DFEF0 string=0x00000000003DFEF4 ""
 *   insn=0x00000000003DFF00 string=0x00000000003DFF04 "@"
 *   insn=0x00000000003DFF10 string=0x00000000003DFF14 "AE"
 *   insn=0x00000000003DFF24 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003DFF2C string=0x00000000003DFF30 "@"
 *   insn=0x00000000003DFF30 string=0x00000000003DFF34 ""
 *   insn=0x00000000003DFF34 string=0x00000000003DFF38 ""
 *   insn=0x00000000003DFF3C string=0x00000000003DFF40 ""
 *   insn=0x00000000003DFF40 string=0x00000000003DFF44 ""
 *   insn=0x00000000003DFF50 string=0x00000000003DFF54 "@"
 *   insn=0x00000000003DFF54 string=0x00000000003DFF58 ""
 *   insn=0x00000000003DFF58 string=0x00000000003DFF5C ""
 *   insn=0x00000000003DFF60 string=0x00000000003DFF64 ""
 *   insn=0x00000000003DFF64 string=0x00000000003DFF68 ""
 *   insn=0x00000000003DFF78 string=0x00000000003DFF7C "!"
 *   insn=0x00000000003DFF98 string=0x00000000003DFF9C ")=G"
 *   insn=0x00000000003DFF9C string=0x00000000003DFFA0 "!"
 *   insn=0x00000000003DFFA4 string=0x00000000003DFFA8 "\t"
 *   insn=0x00000000003DFFA4 string=0x00000000003DFFE0 "\t"
 *   insn=0x00000000003DFFA8 string=0x00000000003DFFAC "*"
 *   insn=0x00000000003DFFAC string=0x00000000003DFFB0 "\n"
 *   insn=0x00000000003DFFB4 string=0x00000000003DFFB8 ""
 *   insn=0x00000000003DFFB8 string=0x00000000003DFFEC "?"
 *   insn=0x00000000003DFFBC string=0x00000000003DFFC0 ")=G"
 *   insn=0x00000000003DFFC0 string=0x00000000003DFFC4 "!"
 *   insn=0x00000000003DFFC8 string=0x00000000003DFFCC "\t"
 *   insn=0x00000000003DFFC8 string=0x00000000003E0000 "\t"
 *   insn=0x00000000003DFFCC string=0x00000000003DFFD0 "*"
 *   insn=0x00000000003DFFD0 string=0x00000000003DFFD4 "\n"
 *   insn=0x00000000003DFFDC string=0x00000000003E000C "?"
 *   insn=0x00000000003DFFE0 string=0x00000000003DFFE4 "*"
 *   insn=0x00000000003DFFE4 string=0x00000000003DFFE8 "\n"
 *   insn=0x00000000003DFFEC string=0x00000000003DFFF0 "l"
 *   insn=0x00000000003DFFF8 string=0x00000000003DFFFC "p"
 *   insn=0x00000000003E0000 string=0x00000000003E0004 "*"
 *   insn=0x00000000003E0004 string=0x00000000003E0008 "\n"
 *   insn=0x00000000003E000C string=0x00000000003E0010 "l"
 *   insn=0x00000000003E0018 string=0x00000000003E001C "x"
 *   insn=0x00000000003E0020 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E0030 string=0x00000000003E0034 "u"
 *   insn=0x00000000003E0038 string=0x00000000003E003C ""
 *   insn=0x00000000003E0048 string=0x00000000003E004C "\t@"
 *   insn=0x00000000003E0058 string=0x00000000003E005C ""
 *   insn=0x00000000003E0068 string=0x00000000003E006C "@"
 *   insn=0x00000000003E0074 string=0x00000000003E0078 "J"
 *   insn=0x00000000003E0084 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E008C string=0x00000000003E0090 "M"
 *   insn=0x00000000003E008C string=0x00000000003E01A8 "@"
 *   insn=0x00000000003E0098 string=0x00000000003E009C "(a"
 *   insn=0x00000000003E00A4 string=0x00000000003E00A8 "*"
 *   insn=0x00000000003E00A8 string=0x00000000003E00AC "J=G"
 *   insn=0x00000000003E00AC string=0x00000000003E00B0 ")!"
 *   insn=0x00000000003E00B4 string=0x00000000003E00B8 "*"
 *   insn=0x00000000003E00B4 string=0x00000000003E00E8 "*"
 *   insn=0x00000000003E00B8 string=0x00000000003E00BC "K"
 *   insn=0x00000000003E00BC string=0x00000000003E00C0 "+"
 *   insn=0x00000000003E00C4 string=0x00000000003E00C8 "_"
 *   insn=0x00000000003E00DC string=0x00000000003E00E0 "`"
 *   insn=0x00000000003E00E0 string=0x00000000003E00E4 "A"
 *   insn=0x00000000003E00E0 string=0x00000000003E01CC "@"
 *   insn=0x00000000003E00E4 string=0x00000000003E01E8 "u~@"
 *   insn=0x00000000003E00E8 string=0x00000000003E00EC "K"
 *   insn=0x00000000003E00EC string=0x00000000003E00F0 "+"
 *   insn=0x00000000003E00F0 string=0x00000000003E00F4 "_"
 *   insn=0x00000000003E00F8 string=0x00000000003E00FC "2"
 *   insn=0x00000000003E0104 string=0x00000000003E0108 "*"
 *   insn=0x00000000003E0108 string=0x00000000003E010C "J"
 *   insn=0x00000000003E0110 string=0x00000000003E0114 "(a"
 *   insn=0x00000000003E0118 string=0x00000000003E011C "`"
 *   insn=0x00000000003E011C string=0x00000000003E0120 "*"
 *   insn=0x00000000003E0120 string=0x00000000003E0124 "J=G"
 *   insn=0x00000000003E0124 string=0x00000000003E0128 ")!"
 *   insn=0x00000000003E012C string=0x00000000003E0130 "*"
 *   insn=0x00000000003E012C string=0x00000000003E0160 "*"
 *   insn=0x00000000003E0130 string=0x00000000003E0134 "K"
 *   insn=0x00000000003E0134 string=0x00000000003E0138 "+"
 *   insn=0x00000000003E013C string=0x00000000003E0140 "_"
 *   insn=0x00000000003E0140 string=0x00000000003E0144 ","
 *   insn=0x00000000003E0150 string=0x00000000003E0154 "u~@"
 *   insn=0x00000000003E0158 string=0x00000000003E015C "5"
 *   insn=0x00000000003E0160 string=0x00000000003E0164 "K"
 *   insn=0x00000000003E0164 string=0x00000000003E0168 "+"
 *   insn=0x00000000003E0168 string=0x00000000003E016C "_"
 *   insn=0x00000000003E0180 string=0x00000000003E0184 "@"
 *   insn=0x00000000003E018C string=0x00000000003E0190 "u~@"
 *   insn=0x00000000003E0194 string=0x00000000003E0198 "&"
 *   insn=0x00000000003E01A8 string=0x00000000003E01AC ""
 *   insn=0x00000000003E01AC string=0x00000000003E01B0 ""
 *   insn=0x00000000003E01B4 string=0x00000000003E01B8 ""
 *   insn=0x00000000003E01B8 string=0x00000000003E01BC ""
 *   insn=0x00000000003E01CC string=0x00000000003E01D0 ""
 *   insn=0x00000000003E01D0 string=0x00000000003E01D4 ""
 *   insn=0x00000000003E01D8 string=0x00000000003E01DC ""
 *   insn=0x00000000003E01DC string=0x00000000003E01E0 ""
 *   insn=0x00000000003E01E8 string=0x00000000003E01EC "5"
 *   insn=0x00000000003E01F0 string=0x00000000003E01F4 ""
 *   insn=0x00000000003E0200 string=0x00000000003E0204 "\t@"
 *   insn=0x00000000003E0210 string=0x00000000003E0214 ""
 *   insn=0x00000000003E0220 string=0x00000000003E0224 "@"
 *   insn=0x00000000003E023C string=0x00000000003E0240 "C"
 *   insn=0x00000000003E0240 string=0x00000000003E0244 "x@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaBar::ManaBar(Caver::ManaBar *this)
{
  Caver::TextureLibrary *v2; // x0
  void *v3; // x0
  void *v4; // x0
  Caver::GUISlider *v5; // x0
  _QWORD *v6; // x20
  __int64 v7; // x9
  _QWORD *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  void (__fastcall *v11)(Caver::ManaBar *, __int64 *); // x8
  _QWORD *v12; // x9
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x8
  int v17; // w8
  __int64 result; // x0
  int v19; // w8
  unsigned int *v20; // x8
  int v21; // w9
  unsigned int *v22; // x8
  int v23; // w9
  _DWORD *v24; // [xsp+10h] [xbp-60h]
  __int64 v25; // [xsp+18h] [xbp-58h]
  __int64 v26; // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v27; // [xsp+28h] [xbp-48h]
  __int64 v28; // [xsp+38h] [xbp-38h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::TextureLibrary *)Caver::GUIView::GUIView(this);
  *(_QWORD *)this = off_6D02F0;
  *((_QWORD *)this + 30) = 0;
  *((_BYTE *)this + 229) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  Caver::TextureLibrary::sharedLibrary(v2);
  sub_566BB8((int)&v26, "ui_manabar_background");
  Caver::TextureLibrary::TextureForName();
  v3 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
      operator delete(v3);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v3);
  sub_566BB8((int)&v26, "ui_manabar");
  Caver::TextureLibrary::TextureForName();
  v4 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v23 = __ldaxr(v22);
      while ( __stlxr(v23 - 1, v22) );
    }
    else
    {
      v23 = (*v22)--;
    }
    if ( v23 <= 0 )
      operator delete(v4);
  }
  v5 = (Caver::GUISlider *)operator new(0x170u);
  Caver::GUISlider::GUISlider(v5);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>();
  v6 = (_QWORD *)*((_QWORD *)this + 31);
  v7 = v26;
  v26 = *((_QWORD *)this + 30);
  v8 = v27;
  *((_QWORD *)this + 30) = v7;
  *((_QWORD *)this + 31) = v8;
  v27 = v6;
  if ( v6 )
  {
    v9 = v6[1] - 1LL;
    v6[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v10 = v6[2] - 1LL;
      v6[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 30) + 229LL) = 0;
  Caver::GUISlider::SetFrameTexture();
  Caver::GUISlider::SetBarTexture();
  v11 = *(void (__fastcall **)(Caver::ManaBar *, __int64 *))(*(_QWORD *)this + 96LL);
  v26 = *((_QWORD *)this + 30);
  v12 = (_QWORD *)*((_QWORD *)this + 31);
  v27 = v12;
  if ( v12 )
    ++v12[1];
  v11(this, &v26);
  v13 = v27;
  if ( v27 )
  {
    v14 = v27[1] - 1LL;
    v27[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v16 = *(_QWORD **)(v25 + 84);
  v26 = 0;
  v27 = v16;
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v26);
  if ( v24 )
  {
    v17 = v24[2] - 1;
    v24[2] = v17;
    if ( !v17 )
      (*(void (__fastcall **)())(*(_QWORD *)v24 + 8LL))();
  }
  result = v25;
  if ( v25 )
  {
    v19 = *(_DWORD *)(v25 + 8) - 1;
    *(_DWORD *)(v25 + 8) = v19;
    if ( !v19 )
      return (*(__int64 (__fastcall **)())(*(_QWORD *)v25 + 8LL))();
  }
  return result;
}

