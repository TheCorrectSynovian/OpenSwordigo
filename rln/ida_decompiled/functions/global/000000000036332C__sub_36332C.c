/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036332C
 * Mangled: sub_36332C
 * Demangled: sub_36332C
 *
 * Callers: 0
 *
 * Callees: 16
 *   0x00000000001F3A00  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FDD80  Caver::GameViewController::LoadGameState(void)
 *   0x00000000001FF150  Caver::SceneLoadingView::SceneLoadingView(void)
 *   0x00000000002004D0  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000200980  Caver::ProgramTable::PointerForKey(std::string const&)
 *   0x0000000000200CD0  Caver::SceneLoadingView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,boost::shared_ptr<Caver::MapNode> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003635BC  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x0000000000363338 string=0x000000000036333C "T"
 *   insn=0x0000000000363344 string=0x0000000000363348 "&`"
 *   insn=0x0000000000363348 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000036334C string=0x0000000000363350 "a"
 *   insn=0x0000000000363350 string=0x000000000058F176 "gameController"
 *   insn=0x0000000000363360 string=0x0000000000363364 "`"
 *   insn=0x0000000000363374 string=0x0000000000363378 "\t"
 *   insn=0x0000000000363378 string=0x000000000036337C ")"
 *   insn=0x0000000000363388 string=0x00000000003633B8 "\t"
 *   insn=0x000000000036338C string=0x0000000000363390 "Pt"
 *   insn=0x00000000003633B8 string=0x00000000003633BC ")=G"
 *   insn=0x00000000003633BC string=0x00000000003633C0 "!"
 *   insn=0x00000000003633C4 string=0x00000000003633C8 "\t"
 *   insn=0x00000000003633C4 string=0x00000000003633DC "\t"
 *   insn=0x00000000003633C8 string=0x00000000003633CC "*"
 *   insn=0x00000000003633CC string=0x00000000003633D0 "\n"
 *   insn=0x00000000003633D8 string=0x00000000003633E8 "?"
 *   insn=0x00000000003633DC string=0x00000000003633E0 "*"
 *   insn=0x00000000003633E0 string=0x00000000003633E4 "\n"
 *   insn=0x00000000003633FC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000363400 string=0x0000000000363404 "\n"
 *   insn=0x0000000000363404 string=0x0000000000363408 "J"
 *   insn=0x000000000036340C string=0x0000000000363410 "(a"
 *   insn=0x0000000000363418 string=0x000000000036341C "\n"
 *   insn=0x000000000036341C string=0x0000000000363420 "J=G"
 *   insn=0x0000000000363420 string=0x0000000000363424 ")!"
 *   insn=0x0000000000363428 string=0x000000000036342C "*"
 *   insn=0x0000000000363428 string=0x0000000000363458 "*"
 *   insn=0x000000000036342C string=0x0000000000363430 "K"
 *   insn=0x0000000000363430 string=0x0000000000363434 "+"
 *   insn=0x0000000000363438 string=0x000000000036343C "_"
 *   insn=0x0000000000363458 string=0x000000000036345C "K"
 *   insn=0x000000000036345C string=0x0000000000363460 "+"
 *   insn=0x0000000000363460 string=0x0000000000363464 "_"
 *   insn=0x0000000000363488 string=0x000000000036348C "W"
 *   insn=0x00000000003634A4 string=0x00000000003634A8 "i"
 *   insn=0x00000000003634AC string=0x00000000003634B0 "4j"
 *   insn=0x00000000003634B0 string=0x00000000001FDD80 "0'"
 *   insn=0x00000000003634B4 string=0x00000000003634B8 "JH"
 *   insn=0x00000000003634B8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003634BC string=0x00000000003634C0 "$o"
 *   insn=0x00000000003634C8 string=0x00000000003634CC "MA"
 *   insn=0x00000000003634CC string=0x00000000001F3A00 "P'"
 *   insn=0x00000000003634E0 string=0x00000000003634E4 "hR"
 *   insn=0x00000000003634F8 string=0x00000000003634FC "\t@"
 *   insn=0x0000000000363504 string=0x0000000000363508 ""
 *   insn=0x0000000000363518 string=0x000000000036351C "@"
 *   insn=0x0000000000363530 string=0x000000000036354C "aK"
 *   insn=0x0000000000363554 string=0x0000000000363558 "4"
 *   insn=0x000000000036355C string=0x0000000000363560 ""
 *   insn=0x000000000036356C string=0x0000000000363570 "\t@"
 *   insn=0x000000000036357C string=0x0000000000363580 ""
 *   insn=0x000000000036358C string=0x0000000000363590 "@"
 *   insn=0x00000000003635A0 string=0x00000000003635A4 "j"
 *   insn=0x00000000003635AC string=0x00000000003635B0 "@O"
 *   insn=0x00000000003635B0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_36332C(void *a1)
{
  Caver::GameViewController *v1; // x19
  void *v2; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+60h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::ProgramState::FromLuaState(a1);
  sub_566BB8((int)v6, "gameController");
  v1 = (Caver::GameViewController *)Caver::ProgramTable::PointerForKey();
  v2 = (void *)(v6[0] - 24LL);
  if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v2);
  }
  Caver::GameViewController::GotoCredits(v1);
  return 0;
}

