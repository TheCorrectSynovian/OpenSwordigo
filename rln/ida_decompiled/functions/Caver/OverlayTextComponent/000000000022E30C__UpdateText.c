/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022E30C
 * Mangled: _ZN5Caver20OverlayTextComponent10UpdateTextEv
 * Demangled: Caver::OverlayTextComponent::UpdateText(void)
 *
 * Callers: 1
 *   0x0000000000202080  Caver::OverlayTextComponent::UpdateText(void)
 *
 * Callees: 11
 *   0x00000000001F5540  Caver::FontLibrary::LargeDefaultFont(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000022E320 string=0x000000000022E324 "W"
 *   insn=0x000000000022E334 string=0x000000000022E338 "h"
 *   insn=0x000000000022E33C string=0x000000000022E340 ""
 *   insn=0x000000000022E354 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022E36C string=0x000000000022E370 ""
 *   insn=0x000000000022E3BC string=0x000000000022E3C0 "`"
 *   insn=0x000000000022E3C0 string=0x00000000001F5540 "P'"
 *   insn=0x000000000022E3C8 string=0x000000000022E3CC "\n"
 *   insn=0x000000000022E3CC string=0x000000000022E3D0 "J"
 *   insn=0x000000000022E3D0 string=0x000000000022E3D4 "\n"
 *   insn=0x000000000022E3DC string=0x000000000022E3E0 "6"
 *   insn=0x000000000022E3E4 string=0x000000000022E3E8 ""
 *   insn=0x000000000022E3F4 string=0x000000000022E3F8 "\t@"
 *   insn=0x000000000022E404 string=0x000000000022E408 ""
 *   insn=0x000000000022E414 string=0x000000000022E418 "@"
 *   insn=0x000000000022E424 string=0x000000000022E428 "5"
 *   insn=0x000000000022E42C string=0x000000000022E430 ""
 *   insn=0x000000000022E440 string=0x000000000022E444 "\t@"
 *   insn=0x000000000022E44C string=0x000000000022E450 ""
 *   insn=0x000000000022E460 string=0x000000000022E464 "@"
 *   insn=0x000000000022E470 string=0x000000000022E474 "?F"
 *   insn=0x000000000022E480 string=0x000000000022E484 "+"
 *   insn=0x000000000022E480 string=0x000000000022E490 "U"
 *   insn=0x000000000022E484 string=0x000000000022E488 "k"
 *   insn=0x000000000022E488 string=0x000000000022E48C "+"
 *   insn=0x000000000022E490 string=0x000000000022E494 "H"
 *   insn=0x000000000022E494 string=0x000000000022E498 "5"
 *   insn=0x000000000022E49C string=0x000000000022E4A0 ""
 *   insn=0x000000000022E4B0 string=0x000000000022E4B4 "\t@"
 *   insn=0x000000000022E4BC string=0x000000000022E4C0 ""
 *   insn=0x000000000022E4D0 string=0x000000000022E4D4 "@"
 *   insn=0x000000000022E4E0 string=0x000000000022E4E4 "@"
 *   insn=0x000000000022E4EC string=0x000000000022E4F0 "\t"
 *   insn=0x000000000022E4F0 string=0x000000000022E4F4 "\n"
 *   insn=0x000000000022E510 string=0x000000000022E514 ""
 *   insn=0x000000000022E510 string=0x00000000001F9CD0 "0'"
 *   insn=0x000000000022E528 string=0x00000000001F8990 "0'"
 *   insn=0x000000000022E52C string=0x000000000022E530 "`#"
 *   insn=0x000000000022E530 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022E540 string=0x000000000022E55C "]"
 *   insn=0x000000000022E55C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022E56C string=0x000000000022E570 ""
 *   insn=0x000000000022E574 string=0x000000000022E578 "A"
 *   insn=0x000000000022E57C string=0x000000000022E580 "\t@"
 *   insn=0x000000000022E58C string=0x000000000022E590 ""
 *   insn=0x000000000022E594 string=0x000000000022E598 "A"
 *   insn=0x000000000022E59C string=0x000000000022E5A0 "@"
 *   insn=0x000000000022E5B8 string=0x000000000022E5BC "=#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::UpdateText(Caver::OverlayTextComponent *this)
{
  __int64 v2; // x8
  __int64 v3; // x21
  Caver::FontLibrary *v4; // x0
  _QWORD *v5; // x22
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  Caver::FontText *v17; // x21
  __int64 v18; // [xsp+8h] [xbp-48h]
  _QWORD *v19; // [xsp+10h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((_QWORD *)this + 14);
  *((_BYTE *)this + 128) = 0;
  if ( *(_QWORD *)(v2 - 24) )
  {
    if ( !*((_QWORD *)this + 17) )
    {
      v3 = operator new(0xF0u);
      *(_DWORD *)(v3 + 16) = -16777216;
      *(_BYTE *)(v3 + 44) = -1;
      *(_DWORD *)(v3 + 40) = 0;
      *(_DWORD *)(v3 + 136) = 0;
      *(_BYTE *)(v3 + 168) = 0;
      *(_QWORD *)(v3 + 160) = 0;
      *(_DWORD *)(v3 + 80) = 0;
      *(_QWORD *)(v3 + 224) = 0;
      *(_OWORD *)v3 = 0u;
      *(_OWORD *)(v3 + 24) = 0u;
      *(_OWORD *)(v3 + 120) = 0u;
      *(_OWORD *)(v3 + 104) = 0u;
      *(_OWORD *)(v3 + 88) = 0u;
      *(_OWORD *)(v3 + 144) = 0u;
      *(_OWORD *)(v3 + 48) = 0u;
      *(_OWORD *)(v3 + 64) = 0u;
      *(_OWORD *)(v3 + 192) = 0u;
      *(_OWORD *)(v3 + 208) = 0u;
      *(_OWORD *)(v3 + 176) = 0u;
      *(_DWORD *)(v3 + 232) = -1;
      *((_QWORD *)this + 17) = v3;
      v4 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary((Caver::FontLibrary *)v3);
      Caver::FontLibrary::LargeDefaultFont(v4);
      if ( v19 )
        ++v19[1];
      v5 = *(_QWORD **)(v3 + 8);
      *(_QWORD *)v3 = v18;
      *(_QWORD *)(v3 + 8) = v19;
      if ( v5 )
      {
        v6 = v5[1] - 1LL;
        v5[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
          v7 = v5[2] - 1LL;
          v5[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        }
      }
      if ( v19 )
      {
        v8 = v19[1] - 1LL;
        v19[1] = v8;
        if ( !v8 )
        {
          (*(void (__fastcall **)())(*v19 + 16LL))();
          v9 = v19[2] - 1LL;
          v19[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)())(*v19 + 24LL))();
        }
      }
      Caver::FontText::SetColor(*((Caver::FontText **)this + 17), (Caver::OverlayTextComponent *)((char *)this + 192));
      v10 = *((_QWORD *)this + 25);
      v11 = *((_QWORD *)this + 26);
      v12 = *((_QWORD *)this + 17);
      if ( v11 )
        ++*(_QWORD *)(v11 + 8);
      v13 = *(_QWORD **)(v12 + 32);
      *(_QWORD *)(v12 + 24) = v10;
      *(_QWORD *)(v12 + 32) = v11;
      if ( v13 )
      {
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
      v16 = *((_QWORD *)this + 17);
      *(_BYTE *)(v16 + 40) = 1;
      *(_DWORD *)(v16 + 41) = -16777216;
      *(_QWORD *)(v16 + 48) = 0xBF8000003F800000LL;
    }
    Caver::FontText::AddText();
  }
  else
  {
    v17 = (Caver::FontText *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = 0;
    if ( v17 )
    {
      Caver::FontText::~FontText(v17);
      operator delete(v17);
    }
  }
}

