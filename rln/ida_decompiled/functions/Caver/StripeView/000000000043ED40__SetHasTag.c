/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043ED40
 * Mangled: _ZN5Caver10StripeView9SetHasTagEbf
 * Demangled: Caver::StripeView::SetHasTag(bool,float)
 *
 * Callers: 1
 *   0x00000000001FC2E0  Caver::StripeView::SetHasTag(bool,float)
 *
 * Callees: 15
 *   0x00000000001F5420  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043F15C  Caver::StripeView::SetTitle(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x000000000043ED54 string=0x000000000043ED58 "V"
 *   insn=0x000000000043ED5C string=0x000000000043ED60 ""
 *   insn=0x000000000043ED6C string=0x000000000043ED70 "h"
 *   insn=0x000000000043ED6C string=0x000000000043EDA4 "t"
 *   insn=0x000000000043ED70 string=0x000000000043ED74 "H"
 *   insn=0x000000000043ED74 string=0x000000000043ED78 "(\n"
 *   insn=0x000000000043ED78 string=0x000000000043ED7C "`"
 *   insn=0x000000000043ED78 string=0x0000000000583944 "\n"
 *   insn=0x000000000043ED80 string=0x000000000043ED84 "h2"
 *   insn=0x000000000043ED88 string=0x000000000043ED8C "M"
 *   insn=0x000000000043ED8C string=0x000000000043ED90 "h"
 *   insn=0x000000000043ED94 string=0x000000000043ED98 "-@"
 *   insn=0x000000000043EDA8 string=0x000000000043EDAC "4"
 *   insn=0x000000000043EDAC string=0x000000000043EDF0 "h2"
 *   insn=0x000000000043EDB0 string=0x000000000043EDB4 ""
 *   insn=0x000000000043EDC4 string=0x000000000043EDC8 "\t@"
 *   insn=0x000000000043EDD0 string=0x000000000043EDD4 ""
 *   insn=0x000000000043EDE4 string=0x000000000043EDE8 "@"
 *   insn=0x000000000043EDFC string=0x000000000043EE00 "!"
 *   insn=0x000000000043EE20 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000043EE28 string=0x00000000001F7430 "0'"
 *   insn=0x000000000043EE30 string=0x000000000043EE34 "{"
 *   insn=0x000000000043EE34 string=0x000000000043EE38 "hRQ"
 *   insn=0x000000000043EE34 string=0x00000000001F5420 "P'"
 *   insn=0x000000000043EE44 string=0x000000000043EE48 "i""
 *   insn=0x000000000043EE4C string=0x000000000043EE50 "4"
 *   insn=0x000000000043EE50 string=0x000000000043EE94 "t"
 *   insn=0x000000000043EE54 string=0x000000000043EE58 ""
 *   insn=0x000000000043EE68 string=0x000000000043EE6C "\t@"
 *   insn=0x000000000043EE74 string=0x000000000043EE78 ""
 *   insn=0x000000000043EE88 string=0x000000000043EE8C "@"
 *   insn=0x000000000043EE94 string=0x000000000043EE98 "."
 *   insn=0x000000000043EE98 string=0x00000000001FA350 "0'"
 *   insn=0x000000000043EEA0 string=0x0000000000594E2A "ui_menu_stripe_tag"
 *   insn=0x000000000043EEAC string=0x000000000043EEB0 "B"
 *   insn=0x000000000043EED0 string=0x000000000043EED4 "'"
 *   insn=0x000000000043EEDC string=0x000000000043EEE0 "@"
 *   insn=0x000000000043EEE0 string=0x000000000043EEE4 ""
 *   insn=0x000000000043EEE4 string=0x000000000043EEE8 ""
 *   insn=0x000000000043EEEC string=0x000000000043EEF0 ""
 *   insn=0x000000000043EEF0 string=0x000000000043EEF4 ""
 *   insn=0x000000000043EEFC string=0x000000000043EF00 ")"
 *   insn=0x000000000043EF00 string=0x000000000043EF04 ")"
 *   insn=0x000000000043EF10 string=0x000000000043EF14 "`"
 *   insn=0x000000000043EF10 string=0x000000000043EFE0 ")"
 *   insn=0x000000000043EF1C string=0x000000000043EF2C "@G"
 *   insn=0x000000000043EF20 string=0x000000000043EF24 ""
 *   insn=0x000000000043EF3C string=0x00000000001FB170 "0'"
 *   insn=0x000000000043EF40 string=0x000000000043EF44 ""
 *   insn=0x000000000043EF4C string=0x000000000043EF60 "h"
 *   insn=0x000000000043EF54 string=0x000000000043EF58 ""
 *   insn=0x000000000043EF60 string=0x000000000043EF64 "i"
 *   insn=0x000000000043EF64 string=0x000000000043EF68 "1@"
 *   insn=0x000000000043EF6C string=0x000000000043EF70 "i"
 *   insn=0x000000000043EF78 string=0x000000000043EF7C "*"
 *   insn=0x000000000043EF7C string=0x000000000043EF80 "J"
 *   insn=0x000000000043EF80 string=0x000000000043EF84 "*"
 *   insn=0x000000000043EF9C string=0x000000000043EFA0 ""
 *   insn=0x000000000043EFB0 string=0x000000000043EFB4 "\t@"
 *   insn=0x000000000043EFBC string=0x000000000043EFC0 ""
 *   insn=0x000000000043EFD0 string=0x000000000043EFD4 "@"
 *   insn=0x000000000043EFD8 string=0x000000000043EFDC "g"
 *   insn=0x000000000043EFE0 string=0x000000000043EFE4 ")=G"
 *   insn=0x000000000043EFE4 string=0x000000000043EFE8 "!"
 *   insn=0x000000000043EFEC string=0x000000000043EFF0 "\t"
 *   insn=0x000000000043EFEC string=0x000000000043F004 "\t"
 *   insn=0x000000000043EFF0 string=0x000000000043EFF4 "*"
 *   insn=0x000000000043EFF4 string=0x000000000043EFF8 "\n"
 *   insn=0x000000000043F000 string=0x000000000043F010 "?"
 *   insn=0x000000000043F004 string=0x000000000043F008 "*"
 *   insn=0x000000000043F008 string=0x000000000043F00C "\n"
 *   insn=0x000000000043F024 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043F02C string=0x000000000043F030 "4\t"
 *   insn=0x000000000043F034 string=0x000000000043F038 ""
 *   insn=0x000000000043F044 string=0x000000000043F048 "\t@"
 *   insn=0x000000000043F054 string=0x000000000043F058 ""
 *   insn=0x000000000043F064 string=0x000000000043F068 "@"
 *   insn=0x000000000043F070 string=0x000000000043F074 "8"
 *   insn=0x000000000043F07C string=0x000000000043F080 ""
 *   insn=0x000000000043F084 string=0x000000000043F088 "a"
 *   insn=0x000000000043F08C string=0x000000000043F090 ""
 *   insn=0x000000000043F098 string=0x000000000043F09C "."
 *   insn=0x000000000043F0A4 string=0x000000000043F0A8 "H"
 *   insn=0x000000000043F0A8 string=0x000000000043F0AC "\t\t@"
 *   insn=0x000000000043F0AC string=0x000000000043F0B0 ")"
 *   insn=0x000000000043F0B0 string=0x000000000043F0B4 "\t\t"
 *   insn=0x000000000043F0B8 string=0x000000000043F0BC "\t"
 *   insn=0x000000000043F0BC string=0x000000000043F0C0 ")"
 *   insn=0x000000000043F0C4 string=0x000000000043F0C8 " "
 *   insn=0x000000000043F0C8 string=0x000000000043F0CC "\t"
 *   insn=0x000000000043F0DC string=0x000000000043F0E0 "t"
 *   insn=0x000000000043F0E0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043F0F0 string=0x000000000043F0F4 ")"
 *   insn=0x000000000043F0F4 string=0x000000000043F0F8 ")"
 *   insn=0x000000000043F104 string=0x000000000043F108 ")"
 *   insn=0x000000000043F108 string=0x000000000043F10C ")=G"
 *   insn=0x000000000043F10C string=0x000000000043F110 "!"
 *   insn=0x000000000043F110 string=0x000000000043F114 "i"
 *   insn=0x000000000043F114 string=0x000000000043F118 "\t"
 *   insn=0x000000000043F114 string=0x000000000043F140 "\t"
 *   insn=0x000000000043F118 string=0x000000000043F11C "*"
 *   insn=0x000000000043F11C string=0x000000000043F120 "\n"
 *   insn=0x000000000043F124 string=0x000000000043F128 "?"
 *   insn=0x000000000043F128 string=0x000000000043F12C "L"
 *   insn=0x000000000043F140 string=0x000000000043F144 "*"
 *   insn=0x000000000043F144 string=0x000000000043F148 "\n"
 *   insn=0x000000000043F148 string=0x000000000043F14C "?"
 *   insn=0x000000000043F14C string=0x000000000043F150 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StripeView::SetHasTag(__int64 this, char a2, float a3)
{
  float *v4; // x19
  float v5; // s0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  Caver::GUIFrameView *v9; // x0
  Caver::TextureLibrary *v10; // x0
  _QWORD *v11; // x20
  __int64 v12; // x9
  _QWORD *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x0
  int v17; // w8
  void *v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x20
  _QWORD *v21; // x9
  int v22; // w8
  __int64 (__fastcall *v23)(float *, __int64 *); // x8
  _QWORD *v24; // x9
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  unsigned int *v28; // x8
  int v29; // w9
  __int64 v30; // [xsp+8h] [xbp-58h] BYREF
  __int64 v31; // [xsp+18h] [xbp-48h] BYREF
  _QWORD *v32; // [xsp+20h] [xbp-40h]
  __int64 v33; // [xsp+28h] [xbp-38h]

  v4 = (float *)this;
  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a2 & 1) != 0 )
  {
    if ( !*(_QWORD *)(this + 272) )
    {
      v9 = (Caver::GUIFrameView *)operator new(0x110u);
      Caver::GUIFrameView::GUIFrameView(v9);
      boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>();
      v11 = (_QWORD *)*((_QWORD *)v4 + 35);
      v12 = v31;
      v31 = *((_QWORD *)v4 + 34);
      v13 = v32;
      *((_QWORD *)v4 + 34) = v12;
      *((_QWORD *)v4 + 35) = v13;
      v32 = v11;
      if ( v11 )
      {
        v14 = v11[1] - 1LL;
        v11[1] = v14;
        if ( !v14 )
        {
          v10 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v15 = v11[2] - 1LL;
          v11[2] = v15;
          if ( !v15 )
            v10 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      Caver::TextureLibrary::sharedLibrary(v10);
      sub_566BB8((int)&v30, "ui_menu_stripe_tag");
      Caver::TextureLibrary::TextureForName();
      Caver::GUIFrameView::SetFrameTexture();
      v16 = v31;
      if ( v31 )
      {
        v17 = *(_DWORD *)(v31 + 8) - 1;
        *(_DWORD *)(v31 + 8) = v17;
        if ( !v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      v18 = (void *)(v30 - 24);
      if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
      {
        v28 = (unsigned int *)(v30 - 8);
        if ( &pthread_create )
        {
          do
            v29 = __ldaxr(v28);
          while ( __stlxr(v29 - 1, v28) );
        }
        else
        {
          v29 = (*v28)--;
        }
        if ( v29 <= 0 )
          operator delete(v18);
      }
      v19 = (_QWORD *)*((_QWORD *)v4 + 34);
      v20 = v19[32];
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v21 = *(_QWORD **)(v20 + 84);
      v31 = *(_QWORD *)((char *)v19 + 116);
      v32 = v21;
      Caver::GUIView::SetFrame((Caver::GUIView *)v19, (const Caver::Rectangle *)&v31);
      v22 = *(_DWORD *)(v20 + 8) - 1;
      *(_DWORD *)(v20 + 8) = v22;
      if ( !v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      v23 = *(__int64 (__fastcall **)(float *, __int64 *))(*(_QWORD *)v4 + 96LL);
      v31 = *((_QWORD *)v4 + 34);
      v24 = (_QWORD *)*((_QWORD *)v4 + 35);
      v32 = v24;
      if ( v24 )
        ++v24[1];
      this = v23(v4, &v31);
      v25 = v32;
      if ( v32 )
      {
        v26 = v32[1] - 1LL;
        v32[1] = v26;
        if ( !v26 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
          v27 = v25[2] - 1LL;
          v25[2] = v27;
          if ( !v27 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
        }
      }
    }
    v5 = v4[35];
    v4[76] = a3;
    if ( v5 > 0.01 )
      return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v4 + 88LL))(v4);
  }
  else
  {
    v6 = *(_QWORD **)(this + 280);
    *(_QWORD *)(this + 272) = 0;
    *(_QWORD *)(this + 280) = 0;
    if ( v6 )
    {
      v7 = v6[1] - 1LL;
      v6[1] = v7;
      if ( !v7 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
    v4[76] = a3;
  }
  return this;
}

