/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000480200
 * Mangled: _ZN5Caver11MusicPlayerD2Ev
 * Demangled: Caver::MusicPlayer::~MusicPlayer()
 *
 * Callers: 1
 *   0x00000000001FC370  Caver::MusicPlayer::~MusicPlayer()
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8720  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>*)
 *   0x0000000000202320  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000480210 string=0x0000000000480214 "a6@"
 *   insn=0x0000000000480214 string=0x0000000000480218 "`b"
 *   insn=0x0000000000480218 string=0x000000000048021C "A"
 *   insn=0x000000000048021C string=0x0000000000480220 "t&@"
 *   insn=0x0000000000480220 string=0x0000000000480224 "4"
 *   insn=0x0000000000480224 string=0x0000000000480268 "t"
 *   insn=0x0000000000480228 string=0x000000000048022C ""
 *   insn=0x0000000000480238 string=0x000000000048023C "\t@"
 *   insn=0x0000000000480248 string=0x000000000048024C ""
 *   insn=0x0000000000480258 string=0x000000000048025C "@"
 *   insn=0x0000000000480268 string=0x000000000048026C "4"
 *   insn=0x000000000048026C string=0x00000000004802B0 "s"
 *   insn=0x0000000000480270 string=0x0000000000480274 ""
 *   insn=0x0000000000480280 string=0x0000000000480284 "\t@"
 *   insn=0x0000000000480290 string=0x0000000000480294 ""
 *   insn=0x00000000004802A0 string=0x00000000004802A4 "@"
 *   insn=0x00000000004802B4 string=0x00000000004802B8 "h"
 *   insn=0x00000000004802B8 string=0x00000000004802BC ""
 *   insn=0x00000000004802BC string=0x00000000004802C0 "h"
 *   insn=0x00000000004802C0 string=0x00000000004802C4 "!"
 *   insn=0x00000000004802C4 string=0x00000000004802C8 "h"
 *   insn=0x00000000004802CC string=0x00000000004802D0 "\t@"
 *   insn=0x00000000004802D4 string=0x00000000004802D8 "h\n@"
 *   insn=0x00000000004802D8 string=0x00000000004802DC ""
 *   insn=0x00000000004802DC string=0x00000000004802E0 "h\n"
 *   insn=0x00000000004802E4 string=0x00000000004802F8 "h"
 *   insn=0x000000000048030C string=0x0000000000480310 " "
 *   insn=0x0000000000480314 string=0x0000000000480318 "s"
 *   insn=0x000000000048031C string=0x0000000000480320 "<"
 *   insn=0x000000000048031C string=0x00000000004803D0 "h"
 *   insn=0x0000000000480324 string=0x0000000000480328 "u"
 *   insn=0x000000000048032C string=0x0000000000480330 "&"
 *   insn=0x0000000000480330 string=0x00000000004803C8 "s"
 *   insn=0x0000000000480338 string=0x000000000048033C "5"
 *   insn=0x000000000048033C string=0x0000000000480380 "u"
 *   insn=0x0000000000480340 string=0x0000000000480344 ""
 *   insn=0x0000000000480350 string=0x0000000000480354 "\t@"
 *   insn=0x0000000000480360 string=0x0000000000480364 ""
 *   insn=0x0000000000480370 string=0x0000000000480374 "@"
 *   insn=0x0000000000480380 string=0x0000000000480384 "5"
 *   insn=0x0000000000480388 string=0x000000000048038C ""
 *   insn=0x0000000000480398 string=0x000000000048039C "\t@"
 *   insn=0x00000000004803A8 string=0x00000000004803AC ""
 *   insn=0x00000000004803B8 string=0x00000000004803BC "@"
 *   insn=0x00000000004803C8 string=0x00000000004803CC "3"
 *   insn=0x00000000004803D0 string=0x00000000004803D4 ""
 *   insn=0x00000000004803D4 string=0x00000000004803D8 "h"
 *   insn=0x00000000004803DC string=0x00000000004803E0 "h"
 *   insn=0x00000000004803E0 string=0x00000000004803E4 "\t@"
 *   insn=0x00000000004803EC string=0x00000000004803F0 "h\n@"
 *   insn=0x00000000004803F0 string=0x00000000004803F4 ""
 *   insn=0x00000000004803F4 string=0x00000000004803F8 "h\n"
 *   insn=0x00000000004803FC string=0x0000000000480400 "h"
 *   insn=0x0000000000480400 string=0x0000000000480404 "@"
 *   insn=0x0000000000480410 string=0x0000000000480414 ","
 *   insn=0x000000000048042C string=0x0000000000480430 "U"
 *   insn=0x0000000000480460 string=0x00000000001F8720 "0'"
 *   insn=0x0000000000480468 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000480498 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlayer::~MusicPlayer(Caver::MusicPlayer *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x8

  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_erase();
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 7);
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
  v8 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
}

