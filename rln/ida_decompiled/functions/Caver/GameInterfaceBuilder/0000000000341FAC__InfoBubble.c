/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000341FAC
 * Mangled: _ZN5Caver20GameInterfaceBuilder10InfoBubbleERKSsf
 * Demangled: Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callers: 2
 *   0x00000000001F3AC0  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 20
 *   0x00000000001F3720  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F51E0  Caver::GUITextBubble::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7DE0  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB140  Caver::GUITextBubble::SetShowsIndicatorWhenFinished(bool)
 *   0x00000000001FD180  Caver::GUIBubbleView::GUIBubbleView(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FE700  boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>(Caver::GUIBubbleView *)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200A00  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x0000000000341FC4 string=0x0000000000341FC8 "W"
 *   insn=0x0000000000341FD8 string=0x0000000000341FDC ""
 *   insn=0x0000000000341FE4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000341FE8 string=0x0000000000341FEC "e"
 *   insn=0x0000000000341FEC string=0x00000000001FD180 "0'"
 *   insn=0x0000000000341FF8 string=0x0000000000341FFC "h"
 *   insn=0x0000000000342004 string=0x00000000001FA350 "0'"
 *   insn=0x0000000000342008 string=0x000000000034200C "a"
 *   insn=0x000000000034200C string=0x000000000058E2B6 "ui_frame"
 *   insn=0x000000000034202C string=0x0000000000342030 "`"
 *   insn=0x0000000000342030 string=0x0000000000342034 ""
 *   insn=0x0000000000342044 string=0x0000000000342048 "f"
 *   insn=0x0000000000342048 string=0x00000000001F51E0 "P'"
 *   insn=0x0000000000342050 string=0x0000000000342054 "@"
 *   insn=0x0000000000342054 string=0x0000000000342058 ""
 *   insn=0x0000000000342058 string=0x000000000034205C ""
 *   insn=0x0000000000342060 string=0x0000000000342064 ""
 *   insn=0x0000000000342064 string=0x0000000000342068 ""
 *   insn=0x0000000000342084 string=0x0000000000342088 "h"
 *   insn=0x0000000000342084 string=0x0000000000342178 "\t"
 *   insn=0x0000000000342098 string=0x0000000000584956 "textbubble_peg"
 *   insn=0x00000000003420B8 string=0x00000000003420BC "="
 *   insn=0x00000000003420BC string=0x00000000003420C0 ""
 *   insn=0x00000000003420D0 string=0x00000000003420D4 "C"
 *   insn=0x00000000003420D4 string=0x00000000001F7DE0 "0'"
 *   insn=0x00000000003420DC string=0x00000000003420E0 "@"
 *   insn=0x00000000003420E0 string=0x00000000003420E4 ""
 *   insn=0x00000000003420E4 string=0x00000000003420E8 ""
 *   insn=0x00000000003420EC string=0x00000000003420F0 ""
 *   insn=0x00000000003420F0 string=0x00000000003420F4 ""
 *   insn=0x0000000000342108 string=0x000000000034210C "h"
 *   insn=0x0000000000342108 string=0x000000000034219C "\t"
 *   insn=0x0000000000342128 string=0x000000000034212C "5"
 *   insn=0x000000000034212C string=0x0000000000342130 "h"
 *   insn=0x0000000000342138 string=0x0000000000342140 ""
 *   insn=0x0000000000342148 string=0x00000000001FB140 "0'"
 *   insn=0x0000000000342154 string=0x0000000000342158 "A"
 *   insn=0x0000000000342158 string=0x0000000000342200 "4"
 *   insn=0x0000000000342178 string=0x000000000034217C ")=G"
 *   insn=0x000000000034217C string=0x0000000000342180 "!"
 *   insn=0x0000000000342184 string=0x0000000000342188 "\t"
 *   insn=0x0000000000342184 string=0x00000000003421C0 "\t"
 *   insn=0x0000000000342188 string=0x000000000034218C "*"
 *   insn=0x000000000034218C string=0x0000000000342190 "\n"
 *   insn=0x0000000000342194 string=0x0000000000342198 ""
 *   insn=0x0000000000342198 string=0x00000000003421CC "?"
 *   insn=0x000000000034219C string=0x00000000003421A0 ")=G"
 *   insn=0x00000000003421A0 string=0x00000000003421A4 "!"
 *   insn=0x00000000003421A8 string=0x00000000003421AC "\t"
 *   insn=0x00000000003421A8 string=0x00000000003421E0 "\t"
 *   insn=0x00000000003421AC string=0x00000000003421B0 "*"
 *   insn=0x00000000003421B0 string=0x00000000003421B4 "\n"
 *   insn=0x00000000003421BC string=0x00000000003421EC "?"
 *   insn=0x00000000003421C0 string=0x00000000003421C4 "*"
 *   insn=0x00000000003421C4 string=0x00000000003421C8 "\n"
 *   insn=0x00000000003421D4 string=0x00000000003421D8 "s"
 *   insn=0x00000000003421E0 string=0x00000000003421E4 "*"
 *   insn=0x00000000003421E4 string=0x00000000003421E8 "\n"
 *   insn=0x00000000003421F4 string=0x00000000003421F8 "k"
 *   insn=0x0000000000342200 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000342210 string=0x0000000000342214 "h"
 *   insn=0x0000000000342214 string=0x0000000000342218 "\t\t@"
 *   insn=0x0000000000342218 string=0x000000000034221C ")"
 *   insn=0x000000000034221C string=0x0000000000342220 "\t\t"
 *   insn=0x0000000000342224 string=0x0000000000342228 "\t"
 *   insn=0x0000000000342228 string=0x000000000034222C ")"
 *   insn=0x0000000000342230 string=0x0000000000342234 " "
 *   insn=0x0000000000342248 string=0x000000000034224C "h"
 *   insn=0x000000000034224C string=0x0000000000342250 "\t\t@"
 *   insn=0x0000000000342250 string=0x0000000000342254 ")"
 *   insn=0x0000000000342254 string=0x0000000000342258 "\t\t"
 *   insn=0x000000000034225C string=0x0000000000342260 "\t"
 *   insn=0x0000000000342260 string=0x0000000000342264 ")"
 *   insn=0x0000000000342268 string=0x000000000034226C " "
 *   insn=0x0000000000342278 string=0x000000000034227C "s"
 *   insn=0x000000000034227C string=0x0000000000342280 "S"
 *   insn=0x0000000000342280 string=0x0000000000342284 "9"
 *   insn=0x0000000000342280 string=0x0000000000342328 "h"
 *   insn=0x000000000034228C string=0x0000000000342290 ""
 *   insn=0x0000000000342290 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003422AC string=0x00000000003422B0 "\t"
 *   insn=0x00000000003422AC string=0x0000000000342320 "s"
 *   insn=0x00000000003422B0 string=0x00000000003422B4 ")=G"
 *   insn=0x00000000003422B4 string=0x00000000003422B8 "!"
 *   insn=0x00000000003422BC string=0x00000000003422C0 "\t"
 *   insn=0x00000000003422BC string=0x0000000000342370 "\t"
 *   insn=0x00000000003422C0 string=0x00000000003422C4 "*"
 *   insn=0x00000000003422C4 string=0x00000000003422C8 "\n"
 *   insn=0x00000000003422D0 string=0x0000000000342310 "?"
 *   insn=0x00000000003422D8 string=0x00000000003422DC "\t"
 *   insn=0x00000000003422DC string=0x00000000003422E0 ")"
 *   insn=0x00000000003422EC string=0x00000000003422F0 "\t"
 *   insn=0x00000000003422F0 string=0x00000000003422F4 ")=G"
 *   insn=0x00000000003422F4 string=0x00000000003422F8 "!"
 *   insn=0x00000000003422FC string=0x0000000000342300 "\t"
 *   insn=0x0000000000342300 string=0x0000000000342304 "*"
 *   insn=0x0000000000342304 string=0x0000000000342308 "\n"
 *   insn=0x0000000000342310 string=0x0000000000342314 "l"
 *   insn=0x0000000000342318 string=0x000000000034231C """
 *   insn=0x0000000000342320 string=0x0000000000342324 "3"
 *   insn=0x0000000000342328 string=0x000000000034232C ""
 *   insn=0x000000000034232C string=0x0000000000342330 "h"
 *   insn=0x0000000000342334 string=0x0000000000342338 "h"
 *   insn=0x0000000000342338 string=0x000000000034233C "\t@"
 *   insn=0x0000000000342344 string=0x0000000000342348 "h\n@"
 *   insn=0x0000000000342348 string=0x000000000034234C ""
 *   insn=0x000000000034234C string=0x0000000000342350 "h\n"
 *   insn=0x0000000000342354 string=0x0000000000342358 "h"
 *   insn=0x0000000000342358 string=0x000000000034235C "@"
 *   insn=0x0000000000342368 string=0x000000000034236C "V"
 *   insn=0x0000000000342370 string=0x0000000000342374 "*"
 *   insn=0x0000000000342374 string=0x0000000000342378 "\n"
 *   insn=0x0000000000342378 string=0x000000000034237C "?"
 *   insn=0x00000000003423A8 string=0x00000000003423AC "\t"
 *   insn=0x00000000003423AC string=0x00000000003423B0 ")9E"
 *   insn=0x00000000003423BC string=0x00000000003423C0 "(A"
 *   insn=0x00000000003423C4 string=0x00000000003423C8 ""
 *   insn=0x00000000003423D0 string=0x00000000003423D4 "`""
 *   insn=0x00000000003423E0 string=0x00000000001F3720 "P'"
 *   insn=0x00000000003423F4 string=0x00000000003423F8 "4"
 *   insn=0x00000000003423FC string=0x0000000000342400 ""
 *   insn=0x000000000034240C string=0x0000000000342410 "\t@"
 *   insn=0x000000000034241C string=0x0000000000342420 ""
 *   insn=0x000000000034242C string=0x0000000000342430 "@"
 *   insn=0x000000000034243C string=0x0000000000342440 "!"
 *   insn=0x0000000000342444 string=0x0000000000342448 "f"
 *   insn=0x0000000000342448 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000034244C string=0x0000000000342450 "h"
 *   insn=0x0000000000342450 string=0x0000000000342454 "!@"
 *   insn=0x0000000000342464 string=0x0000000000342468 "J"
 *   insn=0x0000000000342468 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameInterfaceBuilder::InfoBubble(__int64 a1@<X8>)
{
  Caver::GUIBubbleView *v2; // x0
  Caver::TextureLibrary *v3; // x0
  __int64 v4; // x0
  int v5; // w8
  void *v6; // x0
  __int64 v7; // x0
  int v8; // w8
  void *v9; // x0
  Caver::GUITextBubble *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+38h] [xbp-58h] BYREF
  __int64 v16; // [xsp+40h] [xbp-50h]
  __int64 v17; // [xsp+48h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::GUIBubbleView *)operator new(0x118u);
  Caver::GUIBubbleView::GUIBubbleView(v2);
  boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>();
  Caver::TextureLibrary::sharedLibrary(v3);
  sub_566BB8((int)&v15, "ui_frame");
  Caver::TextureLibrary::TextureForName();
  Caver::GUITextBubble::SetFrameTexture();
  v4 = v16;
  if ( v16 )
  {
    v5 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v6);
  }
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v6);
  sub_566BB8((int)&v15, "textbubble_peg");
  Caver::TextureLibrary::TextureForName();
  Caver::GUITextBubble::SetPegTexture();
  v7 = v16;
  if ( v16 )
  {
    v8 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v8;
    if ( !v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (void *)(v15 - 24);
  if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v15 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v9);
  }
  LODWORD(v16) = -7545601;
  Caver::GUITextBubble::SetText();
  v10 = *(Caver::GUITextBubble **)(*(_QWORD *)a1 + 240LL);
  *((_DWORD *)v10 + 35) = 1022739087;
  Caver::GUITextBubble::SetShowsIndicatorWhenFinished(v10);
}

