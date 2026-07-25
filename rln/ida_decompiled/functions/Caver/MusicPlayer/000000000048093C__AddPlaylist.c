/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048093C
 * Mangled: _ZN5Caver11MusicPlayer11AddPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 1
 *   0x00000000001F7AF0  Caver::MusicPlayer::AddPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE850  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 49
 *   insn=0x000000000048094C string=0x0000000000480950 "U"
 *   insn=0x0000000000480964 string=0x0000000000480968 "a"
 *   insn=0x0000000000480978 string=0x000000000048097C "i"@"
 *   insn=0x0000000000480980 string=0x0000000000480984 "\n"
 *   insn=0x0000000000480984 string=0x0000000000480988 "J"
 *   insn=0x0000000000480988 string=0x000000000048098C "\n"
 *   insn=0x0000000000480990 string=0x0000000000480994 "\t "
 *   insn=0x0000000000480994 string=0x0000000000480998 "3"
 *   insn=0x0000000000480998 string=0x000000000048099C "h"
 *   insn=0x000000000048099C string=0x00000000004809A0 ""
 *   insn=0x00000000004809A0 string=0x00000000004809A4 "h"
 *   insn=0x00000000004809A8 string=0x00000000004809AC "h"
 *   insn=0x00000000004809AC string=0x00000000004809B0 "\t@"
 *   insn=0x00000000004809B8 string=0x00000000004809BC "h\n@"
 *   insn=0x00000000004809BC string=0x00000000004809C0 ""
 *   insn=0x00000000004809C0 string=0x00000000004809C4 "h\n"
 *   insn=0x00000000004809C8 string=0x00000000004809CC "h"
 *   insn=0x00000000004809CC string=0x00000000004809D0 "@"
 *   insn=0x00000000004809DC string=0x00000000004809E0 ")"
 *   insn=0x00000000004809E0 string=0x00000000004809E4 ")"
 *   insn=0x00000000004809EC string=0x00000000004809F0 "A"
 *   insn=0x00000000004809F0 string=0x0000000000480A18 ")"
 *   insn=0x0000000000480A18 string=0x0000000000480A1C ")=G"
 *   insn=0x0000000000480A1C string=0x0000000000480A20 "!"
 *   insn=0x0000000000480A24 string=0x0000000000480A28 "\t"
 *   insn=0x0000000000480A24 string=0x0000000000480A3C "\t"
 *   insn=0x0000000000480A28 string=0x0000000000480A2C "*"
 *   insn=0x0000000000480A2C string=0x0000000000480A30 "\n"
 *   insn=0x0000000000480A38 string=0x0000000000480A48 "?"
 *   insn=0x0000000000480A3C string=0x0000000000480A40 "*"
 *   insn=0x0000000000480A40 string=0x0000000000480A44 "\n"
 *   insn=0x0000000000480A48 string=0x0000000000480A4C "L"
 *   insn=0x0000000000480A50 string=0x0000000000480A54 "T"
 *   insn=0x0000000000480A5C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000480A60 string=0x0000000000480A64 "*"
 *   insn=0x0000000000480A64 string=0x0000000000480A68 "J"
 *   insn=0x0000000000480A6C string=0x0000000000480A70 "(a"
 *   insn=0x0000000000480A78 string=0x0000000000480A7C "*"
 *   insn=0x0000000000480A7C string=0x0000000000480A80 "J=G"
 *   insn=0x0000000000480A80 string=0x0000000000480A84 ")!"
 *   insn=0x0000000000480A88 string=0x0000000000480A8C "*"
 *   insn=0x0000000000480A88 string=0x0000000000480AB8 "*"
 *   insn=0x0000000000480A8C string=0x0000000000480A90 "K"
 *   insn=0x0000000000480A90 string=0x0000000000480A94 "+"
 *   insn=0x0000000000480A98 string=0x0000000000480A9C "_"
 *   insn=0x0000000000480AA8 string=0x0000000000480AAC ">"
 *   insn=0x0000000000480AB8 string=0x0000000000480ABC "K"
 *   insn=0x0000000000480ABC string=0x0000000000480AC0 "+"
 *   insn=0x0000000000480AC0 string=0x0000000000480AC4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlayer::AddPlaylist(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+8h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v12, *a2);
  v3 = (_QWORD *)std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>>::operator[]();
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)v3[1];
  *v3 = v5;
  v3[1] = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v12[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v9);
  }
}

