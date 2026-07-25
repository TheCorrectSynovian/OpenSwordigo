/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D72E4
 * Mangled: _ZN5Caver15GameOverlayView16SetSubviewLayoutEPNS_7GUIViewERKN5boost10shared_ptrINS_13GUIViewLayoutEEE
 * Demangled: Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 1
 *   0x0000000000202500  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 12
 *   0x00000000001F3580  Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *   0x00000000001F4E60  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *   0x00000000001F4FB0  Caver::GUIViewLayout::GUIViewLayout(Caver::GUIViewLayout const&)
 *   0x00000000001F6130  Caver::GUIViewLayout::~GUIViewLayout()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FFE80  std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 46
 *   insn=0x00000000003D72F4 string=0x00000000003D72F8 "V"
 *   insn=0x00000000003D7310 string=0x00000000003D7314 "a"
 *   insn=0x00000000003D7318 string=0x00000000003D731C "%w"
 *   insn=0x00000000003D731C string=0x00000000003D7320 "h"
 *   insn=0x00000000003D731C string=0x00000000001F4FB0 "P'"
 *   insn=0x00000000003D732C string=0x00000000003D7330 "~L"
 *   insn=0x00000000003D7340 string=0x00000000001F4E60 "P'"
 *   insn=0x00000000003D7350 string=0x00000000001F3580 "P'"
 *   insn=0x00000000003D735C string=0x00000000001FB170 "0'"
 *   insn=0x00000000003D7360 string=0x00000000003D7364 "i"
 *   insn=0x00000000003D7364 string=0x00000000003D7368 ")"
 *   insn=0x00000000003D7374 string=0x00000000003D73A4 "i"
 *   insn=0x00000000003D7378 string=0x00000000003D737C "m{"
 *   insn=0x00000000003D737C string=0x00000000001F6130 "0'"
 *   insn=0x00000000003D73A4 string=0x00000000003D73A8 ")=G"
 *   insn=0x00000000003D73A8 string=0x00000000003D73AC "!"
 *   insn=0x00000000003D73B0 string=0x00000000003D73B4 "\t"
 *   insn=0x00000000003D73B0 string=0x00000000003D73C8 "\t"
 *   insn=0x00000000003D73B4 string=0x00000000003D73B8 "*"
 *   insn=0x00000000003D73B8 string=0x00000000003D73BC "\n"
 *   insn=0x00000000003D73C4 string=0x00000000003D73D4 "?"
 *   insn=0x00000000003D73C8 string=0x00000000003D73CC "*"
 *   insn=0x00000000003D73CC string=0x00000000003D73D0 "\n"
 *   insn=0x00000000003D73E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D73F4 string=0x00000000003D73F8 "j"
 *   insn=0x00000000003D73F8 string=0x00000000003D73FC "J"
 *   insn=0x00000000003D7400 string=0x00000000003D7404 "(a"
 *   insn=0x00000000003D740C string=0x00000000003D7410 "j"
 *   insn=0x00000000003D7410 string=0x00000000003D7414 "J=G"
 *   insn=0x00000000003D7414 string=0x00000000003D7418 ")!"
 *   insn=0x00000000003D741C string=0x00000000003D7420 "*"
 *   insn=0x00000000003D741C string=0x00000000003D7454 "*"
 *   insn=0x00000000003D7420 string=0x00000000003D7424 "K"
 *   insn=0x00000000003D7424 string=0x00000000003D7428 "+"
 *   insn=0x00000000003D742C string=0x00000000003D7430 "_"
 *   insn=0x00000000003D7444 string=0x00000000003D7448 ":{"
 *   insn=0x00000000003D7454 string=0x00000000003D7458 "K"
 *   insn=0x00000000003D7458 string=0x00000000003D745C "+"
 *   insn=0x00000000003D745C string=0x00000000003D7460 "_"
 *   insn=0x00000000003D7484 string=0x00000000003D7488 ""
 *   insn=0x00000000003D7488 string=0x00000000003D748C "h"
 *   insn=0x00000000003D748C string=0x00000000003D7490 ""
 *   insn=0x00000000003D7490 string=0x00000000003D7494 "h"
 *   insn=0x00000000003D7498 string=0x00000000003D749C "\t"
 *   insn=0x00000000003D749C string=0x00000000003D74A0 ")"
 *   insn=0x00000000003D74A0 string=0x00000000003D74A4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverlayView::SetSubviewLayout(int a1, __int64 a2, _QWORD *a3)
{
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v9; // [xsp+28h] [xbp-C8h] BYREF
  __int64 v10[2]; // [xsp+30h] [xbp-C0h] BYREF
  __int64 v11[2]; // [xsp+40h] [xbp-B0h] BYREF
  _BYTE v12[100]; // [xsp+50h] [xbp-A0h] BYREF
  __int64 v13; // [xsp+B4h] [xbp-3Ch]
  __int64 v14; // [xsp+C8h] [xbp-28h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a3 )
  {
    Caver::GUIViewLayout::GUIViewLayout();
    v13 = *(_QWORD *)(a2 + 124);
    sub_56A528(&v9, *a3);
    Caver::GameOverlayView::LayoutBoundsForSubview(v10, a1, (int)&v9);
    Caver::GUIViewLayout::FrameForViewInBounds(v11, (Caver::GUIViewLayout *)v12, (const Caver::Rectangle *)v10);
    Caver::GUIView::SetFrame((Caver::GUIView *)a2, (const Caver::Rectangle *)v11);
    v6 = (void *)(v9 - 24);
    if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
    {
      v7 = (unsigned int *)(v9 - 8);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
        v8 = (*v7)--;
      }
      if ( v8 <= 0 )
        operator delete(v6);
    }
    Caver::GUIViewLayout::~GUIViewLayout((Caver::GUIViewLayout *)v12);
  }
}

