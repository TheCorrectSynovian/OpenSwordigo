/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AA1EC
 * Mangled: _ZN5Caver13GUITextBubble7SetTextERKSsRKNS_5ColorEf
 * Demangled: Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callers: 1
 *   0x0000000000200A00  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 19
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89A0  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001F9EB0  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FD740  Caver::Font::DefaultFont(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 117
 *   insn=0x00000000004AA204 string=0x00000000004AA208 "W"
 *   insn=0x00000000004AA210 string=0x00000000004AA214 "`"
 *   insn=0x00000000004AA214 string=0x00000000004AA218 ""
 *   insn=0x00000000004AA224 string=0x00000000004AA228 " "
 *   insn=0x00000000004AA228 string=0x00000000004AA22C "`2@"
 *   insn=0x00000000004AA238 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004AA24C string=0x00000000004AA250 ""
 *   insn=0x00000000004AA2A8 string=0x00000000001F89A0 "0'"
 *   insn=0x00000000004AA2B8 string=0x00000000004AA2BC "hZF"
 *   insn=0x00000000004AA2C8 string=0x00000000004AA2CC "i""
 *   insn=0x00000000004AA2D0 string=0x00000000004AA2D4 "6"
 *   insn=0x00000000004AA2D4 string=0x00000000004AA318 "x2@"
 *   insn=0x00000000004AA2D8 string=0x00000000004AA2DC ""
 *   insn=0x00000000004AA2EC string=0x00000000004AA2F0 "\t@"
 *   insn=0x00000000004AA2F8 string=0x00000000004AA2FC ""
 *   insn=0x00000000004AA30C string=0x00000000004AA310 "@"
 *   insn=0x00000000004AA31C string=0x00000000004AA320 "M"
 *   insn=0x00000000004AA320 string=0x00000000001FD740 "0'"
 *   insn=0x00000000004AA328 string=0x00000000004AA32C "\n"
 *   insn=0x00000000004AA32C string=0x00000000004AA330 "J"
 *   insn=0x00000000004AA330 string=0x00000000004AA334 "\n"
 *   insn=0x00000000004AA338 string=0x00000000004AA33C "\t#"
 *   insn=0x00000000004AA33C string=0x00000000004AA340 "6"
 *   insn=0x00000000004AA344 string=0x00000000004AA348 ""
 *   insn=0x00000000004AA354 string=0x00000000004AA358 "\t@"
 *   insn=0x00000000004AA364 string=0x00000000004AA368 ""
 *   insn=0x00000000004AA374 string=0x00000000004AA378 "@"
 *   insn=0x00000000004AA384 string=0x00000000004AA388 "6"
 *   insn=0x00000000004AA388 string=0x00000000004AA3CC "`2@"
 *   insn=0x00000000004AA38C string=0x00000000004AA390 ""
 *   insn=0x00000000004AA3A0 string=0x00000000004AA3A4 "\t@"
 *   insn=0x00000000004AA3AC string=0x00000000004AA3B0 ""
 *   insn=0x00000000004AA3C0 string=0x00000000004AA3C4 "@"
 *   insn=0x00000000004AA3D0 string=0x00000000004AA3D4 "`2@"
 *   insn=0x00000000004AA3D0 string=0x00000000001F5200 "P'"
 *   insn=0x00000000004AA3D8 string=0x00000000004AA3DC "eV"
 *   insn=0x00000000004AA3E0 string=0x00000000004AA3E4 "h2@"
 *   insn=0x00000000004AA3E4 string=0x00000000004AA3E8 " "
 *   insn=0x00000000004AA3F4 string=0x00000000004AA3F8 "\t"
 *   insn=0x00000000004AA3FC string=0x00000000004AA400 "`2@"
 *   insn=0x00000000004AA410 string=0x00000000004AA414 "/>"
 *   insn=0x00000000004AA414 string=0x00000000004AA418 "`2@"
 *   insn=0x00000000004AA414 string=0x00000000001F9CD0 "0'"
 *   insn=0x00000000004AA420 string=0x00000000004AA424 "u"
 *   insn=0x00000000004AA420 string=0x00000000001F9EB0 "0'"
 *   insn=0x00000000004AA454 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004AA45C string=0x00000000004AA460 "4"
 *   insn=0x00000000004AA464 string=0x00000000004AA468 ""
 *   insn=0x00000000004AA474 string=0x00000000004AA478 "\t@"
 *   insn=0x00000000004AA484 string=0x00000000004AA488 ""
 *   insn=0x00000000004AA494 string=0x00000000004AA498 "@"
 *   insn=0x00000000004AA4A4 string=0x00000000004AA4A8 "]"
 *   insn=0x00000000004AA4C0 string=0x00000000004AA4C4 "U"
 *   insn=0x00000000004AA4D0 string=0x00000000004AA4D4 "iBB9("
 *   insn=0x00000000004AA4D4 string=0x00000000004AA4D8 "("
 *   insn=0x00000000004AA4E0 string=0x00000000004AA4E4 "hB"
 *   insn=0x00000000004AA4E4 string=0x00000000004AA4E8 "a"
 *   insn=0x00000000004AA4E8 string=0x00000000004AA4EC "h*@"
 *   insn=0x00000000004AA4EC string=0x00000000004AA4F0 "H"
 *   insn=0x00000000004AA518 string=0x00000000001FA350 "0'"
 *   insn=0x00000000004AA51C string=0x00000000004AA520 "a"
 *   insn=0x00000000004AA520 string=0x000000000059727C "textbubble_indicator"
 *   insn=0x00000000004AA540 string=0x00000000004AA544 "T"
 *   insn=0x00000000004AA54C string=0x00000000004AA550 ")"
 *   insn=0x00000000004AA594 string=0x00000000004AA598 "^I"
 *   insn=0x00000000004AA598 string=0x00000000001FCB10 "0'"
 *   insn=0x00000000004AA5A8 string=0x00000000004AA5AC "hRE"
 *   insn=0x00000000004AA5B8 string=0x00000000004AA5BC "i""
 *   insn=0x00000000004AA5C0 string=0x00000000004AA5C4 "4"
 *   insn=0x00000000004AA5C8 string=0x00000000004AA5CC ""
 *   insn=0x00000000004AA5D8 string=0x00000000004AA5DC "\t@"
 *   insn=0x00000000004AA5E8 string=0x00000000004AA5EC ""
 *   insn=0x00000000004AA5F8 string=0x00000000004AA5FC "@"
 *   insn=0x00000000004AA608 string=0x00000000004AA60C "`*@"
 *   insn=0x00000000004AA60C string=0x00000000004AA610 "AE"
 *   insn=0x00000000004AA620 string=0x00000000001FD5B0 "0'"
 *   insn=0x00000000004AA624 string=0x00000000004AA628 "h"
 *   insn=0x00000000004AA62C string=0x00000000004AA630 " "
 *   insn=0x00000000004AA630 string=0x00000000004AA634 "@"
 *   insn=0x00000000004AA634 string=0x00000000004AA638 ""
 *   insn=0x00000000004AA638 string=0x00000000004AA63C ""
 *   insn=0x00000000004AA640 string=0x00000000004AA644 ""
 *   insn=0x00000000004AA644 string=0x00000000004AA648 ""
 *   insn=0x00000000004AA654 string=0x00000000004AA658 ")=G"
 *   insn=0x00000000004AA658 string=0x00000000004AA65C "!"
 *   insn=0x00000000004AA660 string=0x00000000004AA664 "\t"
 *   insn=0x00000000004AA660 string=0x00000000004AA678 "\t"
 *   insn=0x00000000004AA664 string=0x00000000004AA668 "*"
 *   insn=0x00000000004AA668 string=0x00000000004AA66C "\n"
 *   insn=0x00000000004AA674 string=0x00000000004AA684 "?"
 *   insn=0x00000000004AA678 string=0x00000000004AA67C "*"
 *   insn=0x00000000004AA67C string=0x00000000004AA680 "\n"
 *   insn=0x00000000004AA68C string=0x00000000004AA690 "E"
 *   insn=0x00000000004AA6A4 string=0x00000000004AA6A8 "J"
 *   insn=0x00000000004AA6AC string=0x00000000004AA6B0 "(a"
 *   insn=0x00000000004AA6B4 string=0x00000000004AA6B8 " "
 *   insn=0x00000000004AA6BC string=0x00000000004AA6C0 "J=G"
 *   insn=0x00000000004AA6C0 string=0x00000000004AA6C4 ")!"
 *   insn=0x00000000004AA6C8 string=0x00000000004AA6CC "*"
 *   insn=0x00000000004AA6C8 string=0x00000000004AA6F8 "*"
 *   insn=0x00000000004AA6CC string=0x00000000004AA6D0 "K"
 *   insn=0x00000000004AA6D0 string=0x00000000004AA6D4 "+"
 *   insn=0x00000000004AA6D8 string=0x00000000004AA6DC "_"
 *   insn=0x00000000004AA6E8 string=0x00000000004AA6EC "."
 *   insn=0x00000000004AA6F0 string=0x00000000004AA6F4 "t\"
 *   insn=0x00000000004AA6F8 string=0x00000000004AA6FC "K"
 *   insn=0x00000000004AA6FC string=0x00000000004AA700 "+"
 *   insn=0x00000000004AA700 string=0x00000000004AA704 "_"
 *   insn=0x00000000004AA71C string=0x00000000004AA720 "@"
 *   insn=0x00000000004AA720 string=0x00000000004AA724 ""
 *   insn=0x00000000004AA724 string=0x00000000004AA728 ""
 *   insn=0x00000000004AA72C string=0x00000000004AA730 ""
 *   insn=0x00000000004AA730 string=0x00000000004AA734 ""
 *   insn=0x00000000004AA73C string=0x00000000004AA740 "a\"
 *   insn=0x00000000004AA744 string=0x00000000004AA748 ""
 *   insn=0x00000000004AA748 string=0x00000000004AA74C ""
 *   insn=0x00000000004AA74C string=0x00000000004AA750 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextBubble::SetText(__int64 a1, __int64 a2, const Caver::Color *a3)
{
  Caver::FontText *v5; // x0
  __int64 v6; // x0
  Caver::Font *v7; // x0
  _QWORD *v8; // x22
  __int64 v9; // x9
  _QWORD *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 *v13; // x24
  _QWORD *v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x22
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 result; // x0
  __int64 v24; // [xsp+60h] [xbp-58h] BYREF
  _QWORD *v25; // [xsp+68h] [xbp-50h]
  __int64 v26; // [xsp+70h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A6A8(a1 + 40);
  v5 = *(Caver::FontText **)(a1 + 96);
  if ( !v5 )
  {
    v6 = operator new(0xF0u);
    *(_DWORD *)(v6 + 16) = -16777216;
    *(_BYTE *)(v6 + 44) = -1;
    *(_DWORD *)(v6 + 232) = -1;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 136) = 0;
    *(_BYTE *)(v6 + 168) = 0;
    *(_QWORD *)(v6 + 160) = 0;
    *(_DWORD *)(v6 + 80) = 0;
    *(_QWORD *)(v6 + 224) = 0;
    v24 = v6;
    *(_OWORD *)v6 = 0u;
    *(_OWORD *)(v6 + 24) = 0u;
    *(_OWORD *)(v6 + 120) = 0u;
    *(_OWORD *)(v6 + 104) = 0u;
    *(_OWORD *)(v6 + 88) = 0u;
    *(_OWORD *)(v6 + 144) = 0u;
    *(_OWORD *)(v6 + 48) = 0u;
    *(_OWORD *)(v6 + 64) = 0u;
    *(_OWORD *)(v6 + 192) = 0u;
    *(_OWORD *)(v6 + 208) = 0u;
    *(_OWORD *)(v6 + 176) = 0u;
    boost::detail::shared_count::shared_count<Caver::FontText>();
    boost::detail::sp_enable_shared_from_this();
    v8 = *(_QWORD **)(a1 + 104);
    v9 = v24;
    v24 = *(_QWORD *)(a1 + 96);
    v10 = v25;
    *(_QWORD *)(a1 + 96) = v9;
    *(_QWORD *)(a1 + 104) = v10;
    v25 = v8;
    if ( v8 )
    {
      v11 = v8[1] - 1LL;
      v8[1] = v11;
      if ( !v11 )
      {
        v7 = (Caver::Font *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v12 = v8[2] - 1LL;
        v8[2] = v12;
        if ( !v12 )
          v7 = (Caver::Font *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    v13 = *(__int64 **)(a1 + 96);
    Caver::Font::DefaultFont(&v24, v7);
    v15 = v24;
    v14 = v25;
    if ( v25 )
      ++v25[1];
    v16 = (_QWORD *)v13[1];
    *v13 = v15;
    v13[1] = (__int64)v14;
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
    v19 = v25;
    if ( v25 )
    {
      v20 = v25[1] - 1LL;
      v25[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    v5 = *(Caver::FontText **)(a1 + 96);
  }
  Caver::FontText::Clear(v5);
  Caver::FontText::SetColor(*(Caver::FontText **)(a1 + 96), a3);
  v22 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(v22 + 40) = 1;
  *(_DWORD *)(v22 + 41) = -16777216;
  *(_QWORD *)(v22 + 48) = 0xBF80000000000000LL;
  v24 = 0;
  Caver::FontText::AddText();
  result = Caver::FontText::AlignHorizontally(*(Caver::FontText **)(a1 + 96));
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}

