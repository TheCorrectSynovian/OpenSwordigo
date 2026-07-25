/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0C4C
 * Mangled: _ZN5Caver17OverlayMenuButton10SetMenuTabERKSs
 * Demangled: Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F5790  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x00000000003E0A34  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x00000000003E0C5C string=0x00000000003E0C60 "V"
 *   insn=0x00000000003E0C68 string=0x00000000003E0C6C "t"
 *   insn=0x00000000003E0C7C string=0x00000000001FA350 "0'"
 *   insn=0x00000000003E0C84 string=0x0000000000592AE8 "ui_tab_"
 *   insn=0x00000000003E0CA4 string=0x00000000003E0CA8 "Bz"
 *   insn=0x00000000003E0CAC string=0x00000000003E0CB0 ")"
 *   insn=0x00000000003E0CB0 string=0x00000000003E0CB4 ")"
 *   insn=0x00000000003E0CC0 string=0x00000000003E0D18 ")"
 *   insn=0x00000000003E0CCC string=0x00000000001FC750 "0'"
 *   insn=0x00000000003E0CD4 string=0x00000000003E0CD8 "@"
 *   insn=0x00000000003E0CD8 string=0x00000000003E0CDC ""
 *   insn=0x00000000003E0CDC string=0x00000000003E0CE0 ""
 *   insn=0x00000000003E0CE4 string=0x00000000003E0CE8 ""
 *   insn=0x00000000003E0CE8 string=0x00000000003E0CEC ""
 *   insn=0x00000000003E0D00 string=0x00000000003E0D5C "]U"
 *   insn=0x00000000003E0D18 string=0x00000000003E0D1C ")=G"
 *   insn=0x00000000003E0D1C string=0x00000000003E0D20 "!"
 *   insn=0x00000000003E0D24 string=0x00000000003E0D28 "\t"
 *   insn=0x00000000003E0D24 string=0x00000000003E0D3C "\t"
 *   insn=0x00000000003E0D28 string=0x00000000003E0D2C "*"
 *   insn=0x00000000003E0D2C string=0x00000000003E0D30 "\n"
 *   insn=0x00000000003E0D38 string=0x00000000003E0D48 "?"
 *   insn=0x00000000003E0D3C string=0x00000000003E0D40 "*"
 *   insn=0x00000000003E0D40 string=0x00000000003E0D44 "\n"
 *   insn=0x00000000003E0D5C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E0D68 string=0x00000000003E0D6C "\t\t@"
 *   insn=0x00000000003E0D6C string=0x00000000003E0D70 ")"
 *   insn=0x00000000003E0D70 string=0x00000000003E0D74 "\t\t"
 *   insn=0x00000000003E0D74 string=0x00000000003E0D78 "A"
 *   insn=0x00000000003E0D78 string=0x00000000003E0D7C "\t"
 *   insn=0x00000000003E0D7C string=0x00000000003E0D80 ")"
 *   insn=0x00000000003E0D84 string=0x00000000003E0D88 " "
 *   insn=0x00000000003E0D94 string=0x00000000003E0D98 "*"
 *   insn=0x00000000003E0D98 string=0x00000000003E0D9C "J"
 *   insn=0x00000000003E0DA0 string=0x00000000003E0DA4 "(a"
 *   insn=0x00000000003E0DAC string=0x00000000003E0DB0 "*"
 *   insn=0x00000000003E0DB0 string=0x00000000003E0DB4 "J=G"
 *   insn=0x00000000003E0DB4 string=0x00000000003E0DB8 ")!"
 *   insn=0x00000000003E0DBC string=0x00000000003E0DC0 "*"
 *   insn=0x00000000003E0DBC string=0x00000000003E0DEC "*"
 *   insn=0x00000000003E0DC0 string=0x00000000003E0DC4 "K"
 *   insn=0x00000000003E0DC4 string=0x00000000003E0DC8 "+"
 *   insn=0x00000000003E0DCC string=0x00000000003E0DD0 "_"
 *   insn=0x00000000003E0DD0 string=0x00000000003E0DD4 "l"
 *   insn=0x00000000003E0DDC string=0x00000000003E0DE0 "q%"
 *   insn=0x00000000003E0DEC string=0x00000000003E0DF0 "K"
 *   insn=0x00000000003E0DF0 string=0x00000000003E0DF4 "+"
 *   insn=0x00000000003E0DF4 string=0x00000000003E0DF8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::SetMenuTab(__int64 a1)
{
  __int64 v1; // x20
  Caver::TextureLibrary *v2; // x0
  void *v3; // x0
  __int64 result; // x0
  int v5; // w8
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // [xsp+0h] [xbp-40h] BYREF
  __int64 v9; // [xsp+8h] [xbp-38h]
  __int64 v10; // [xsp+18h] [xbp-28h]

  v1 = a1 + 496;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::TextureLibrary *)sub_56A6A8(a1 + 496);
  Caver::TextureLibrary::sharedLibrary(v2);
  ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64))loc_25A030)(&v8, "ui_tab_", v1);
  Caver::TextureLibrary::TextureForName();
  v3 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v3);
  }
  Caver::GUIButton::SetImage();
  result = v9;
  if ( v9 )
  {
    v5 = *(_DWORD *)(v9 + 8) - 1;
    *(_DWORD *)(v9 + 8) = v5;
    if ( !v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

