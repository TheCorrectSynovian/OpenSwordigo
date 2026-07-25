/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000480F14
 * Mangled: _ZN5Caver11MusicPlayer15PlaylistForNameERKSs
 * Demangled: Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FCB60  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *
 * Callees: 16
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F5380  Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB570  Caver::MusicPlaylist::MusicPlaylist(void)
 *   0x00000000001FC140  std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MusicTrack*,std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>>,Caver::MusicTrack const&)
 *   0x00000000001FCB60  Caver::MusicPlayer::PlaylistForName(std::string const&)
 *   0x00000000001FE810  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x00000000001FE850  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 120
 *   insn=0x0000000000480F2C string=0x0000000000480F30 "W"
 *   insn=0x0000000000480F44 string=0x0000000000480F48 "B"
 *   insn=0x0000000000480F4C string=0x0000000000480F50 "yR"
 *   insn=0x0000000000480F58 string=0x0000000000480F5C ""
 *   insn=0x0000000000480F70 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000480F78 string=0x0000000000480F7C "}"
 *   insn=0x0000000000480F7C string=0x00000000001FB570 "0'"
 *   insn=0x0000000000480F88 string=0x0000000000480F8C "!"
 *   insn=0x0000000000480F94 string=0x0000000000480F98 "vb"
 *   insn=0x0000000000480F98 string=0x0000000000480F9C "4"
 *   insn=0x0000000000480F9C string=0x0000000000480FE0 "8"
 *   insn=0x0000000000480FA0 string=0x0000000000480FA4 ""
 *   insn=0x0000000000480FB0 string=0x0000000000480FB4 "\t@"
 *   insn=0x0000000000480FC0 string=0x0000000000480FC4 ""
 *   insn=0x0000000000480FD0 string=0x0000000000480FD4 "@"
 *   insn=0x0000000000480FEC string=0x0000000000480FF0 "\tc"
 *   insn=0x0000000000481008 string=0x000000000048100C "@"
 *   insn=0x0000000000481014 string=0x0000000000481018 "D"
 *   insn=0x0000000000481024 string=0x0000000000481028 "A"
 *   insn=0x000000000048103C string=0x0000000000481040 "@"
 *   insn=0x0000000000481040 string=0x00000000001FC140 "0'"
 *   insn=0x0000000000481050 string=0x0000000000481080 "\t"
 *   insn=0x000000000048105C string=0x0000000000481060 "!"
 *   insn=0x0000000000481080 string=0x0000000000481084 ")=G"
 *   insn=0x0000000000481084 string=0x0000000000481088 "!"
 *   insn=0x000000000048108C string=0x0000000000481090 "\t"
 *   insn=0x000000000048108C string=0x00000000004810A4 "\t"
 *   insn=0x0000000000481090 string=0x0000000000481094 "*"
 *   insn=0x0000000000481094 string=0x0000000000481098 "\n"
 *   insn=0x00000000004810A0 string=0x00000000004810B0 "?"
 *   insn=0x00000000004810A4 string=0x00000000004810A8 "*"
 *   insn=0x00000000004810A8 string=0x00000000004810AC "\n"
 *   insn=0x00000000004810C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004810CC string=0x00000000004810D0 "x"
 *   insn=0x00000000004810D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004810D4 string=0x00000000004810D8 "/"
 *   insn=0x00000000004810E0 string=0x00000000004810E4 "(a"
 *   insn=0x00000000004810EC string=0x00000000004810F0 "\n"
 *   insn=0x00000000004810EC string=0x0000000000481124 "t"
 *   insn=0x00000000004810F0 string=0x00000000004810F4 "J=G"
 *   insn=0x00000000004810F4 string=0x00000000004810F8 ")!"
 *   insn=0x00000000004810FC string=0x0000000000481100 "*"
 *   insn=0x00000000004810FC string=0x0000000000481130 "*"
 *   insn=0x0000000000481100 string=0x0000000000481104 "K"
 *   insn=0x0000000000481104 string=0x0000000000481108 "+"
 *   insn=0x000000000048110C string=0x0000000000481110 "_"
 *   insn=0x0000000000481124 string=0x0000000000481128 "t"
 *   insn=0x0000000000481130 string=0x0000000000481134 "K"
 *   insn=0x0000000000481134 string=0x0000000000481138 "+"
 *   insn=0x0000000000481138 string=0x000000000048113C "_"
 *   insn=0x000000000048114C string=0x0000000000481150 "4"
 *   insn=0x0000000000481154 string=0x0000000000481158 ""
 *   insn=0x0000000000481164 string=0x0000000000481168 "\t@"
 *   insn=0x0000000000481174 string=0x0000000000481178 ""
 *   insn=0x0000000000481184 string=0x0000000000481188 "@"
 *   insn=0x0000000000481198 string=0x000000000048119C "l4"
 *   insn=0x00000000004811B4 string=0x00000000004811B8 "X"
 *   insn=0x00000000004811B8 string=0x00000000004811BC ""
 *   insn=0x00000000004811CC string=0x00000000004811D0 "h"
 *   insn=0x00000000004811F4 string=0x00000000004811F8 "_"
 *   insn=0x0000000000481204 string=0x0000000000481208 "@"
 *   insn=0x0000000000481204 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000481208 string=0x00000000004813D0 "h"@"
 *   insn=0x000000000048120C string=0x0000000000481210 ")"
 *   insn=0x0000000000481210 string=0x0000000000481214 ")"
 *   insn=0x000000000048121C string=0x0000000000481220 "H"
 *   insn=0x000000000048121C string=0x00000000004813F0 "\n"
 *   insn=0x0000000000481220 string=0x00000000004813A8 ""
 *   insn=0x0000000000481228 string=0x000000000048122C ""
 *   insn=0x0000000000481240 string=0x0000000000481244 "G"
 *   insn=0x0000000000481244 string=0x00000000001FCB60 "0'"
 *   insn=0x0000000000481248 string=0x000000000048124C "U"
 *   insn=0x0000000000481250 string=0x0000000000481254 ""
 *   insn=0x0000000000481260 string=0x0000000000481264 ""
 *   insn=0x000000000048126C string=0x00000000004812AC "h"
 *   insn=0x0000000000481270 string=0x0000000000481274 "\t@"
 *   insn=0x0000000000481280 string=0x0000000000481284 ""
 *   insn=0x0000000000481290 string=0x0000000000481294 "@"
 *   insn=0x00000000004812B4 string=0x00000000004812C4 "v&@"
 *   insn=0x00000000004812B8 string=0x00000000004812BC ""
 *   insn=0x00000000004812C4 string=0x00000000004812C8 "wV"
 *   insn=0x00000000004812C8 string=0x00000000004812CC "6"
 *   insn=0x00000000004812CC string=0x0000000000481310 "h"@"
 *   insn=0x00000000004812D0 string=0x00000000004812D4 ""
 *   insn=0x00000000004812E0 string=0x00000000004812E4 "\t@"
 *   insn=0x00000000004812F0 string=0x00000000004812F4 ""
 *   insn=0x0000000000481300 string=0x0000000000481304 "@"
 *   insn=0x0000000000481314 string=0x0000000000481318 "iB"
 *   insn=0x0000000000481318 string=0x000000000048131C "H"
 *   insn=0x000000000048131C string=0x0000000000481364 "5"
 *   insn=0x0000000000481320 string=0x0000000000481328 "h"
 *   insn=0x0000000000481334 string=0x0000000000481338 "h"
 *   insn=0x000000000048134C string=0x0000000000481350 "h""
 *   insn=0x0000000000481350 string=0x0000000000481354 "`B"
 *   insn=0x000000000048135C string=0x0000000000481360 ""
 *   insn=0x0000000000481360 string=0x00000000001F5380 "P'"
 *   insn=0x0000000000481368 string=0x000000000048136C ""
 *   insn=0x000000000048137C string=0x0000000000481380 "\t@"
 *   insn=0x0000000000481388 string=0x000000000048138C ""
 *   insn=0x000000000048139C string=0x00000000004813A0 "@"
 *   insn=0x00000000004813D4 string=0x00000000004813D8 ""
 *   insn=0x00000000004813D8 string=0x00000000004813DC "`*@"
 *   insn=0x00000000004813D8 string=0x0000000000583944 "\n"
 *   insn=0x00000000004813F0 string=0x00000000004813F4 "J=G"
 *   insn=0x00000000004813FC string=0x0000000000481400 "*"
 *   insn=0x00000000004813FC string=0x0000000000481414 "*"
 *   insn=0x0000000000481400 string=0x0000000000481404 "K"
 *   insn=0x0000000000481404 string=0x0000000000481408 "+"
 *   insn=0x0000000000481410 string=0x0000000000481420 "_"
 *   insn=0x0000000000481414 string=0x0000000000481418 "K"
 *   insn=0x0000000000481418 string=0x000000000048141C "+"
 *   insn=0x0000000000481438 string=0x000000000048143C "H"
 *   insn=0x0000000000481454 string=0x0000000000481458 "5"
 *   insn=0x000000000048145C string=0x0000000000481460 ""
 *   insn=0x000000000048146C string=0x0000000000481470 "\t@"
 *   insn=0x000000000048147C string=0x0000000000481480 ""
 *   insn=0x000000000048148C string=0x0000000000481490 "@"
 *   insn=0x000000000048149C string=0x00000000004814A0 "\t"
 *   insn=0x00000000004814AC string=0x00000000004814B0 " "
 *   insn=0x00000000004814B0 string=0x00000000004814B4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::MusicPlayer::PlaylistForName(char **a1@<X8>)
{
  char **v2; // x0
  char *v3; // x20
  char *v4; // x25
  Caver::MusicPlaylist *v5; // x0
  char *v6; // x22
  char *v7; // x24
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x20
  char *v11; // x0
  unsigned int *v12; // x8
  int v13; // w9
  char *v14; // [xsp+70h] [xbp-58h] BYREF
  char *v15; // [xsp+78h] [xbp-50h]
  __int64 v16; // [xsp+80h] [xbp-48h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (char **)std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>>::operator[]();
  v4 = *v2;
  v3 = v2[1];
  *a1 = *v2;
  a1[1] = v3;
  if ( v3 )
    ++*((_QWORD *)v3 + 1);
  if ( !v4 )
  {
    v5 = (Caver::MusicPlaylist *)operator new(0x28u);
    Caver::MusicPlaylist::MusicPlaylist(v5);
    boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>();
    v6 = v14;
    v7 = v15;
    v14 = 0;
    v15 = v3;
    *a1 = v6;
    a1[1] = v7;
    if ( v3 )
    {
      v8 = *((_QWORD *)v3 + 1) - 1LL;
      *((_QWORD *)v3 + 1) = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
        v9 = *((_QWORD *)v3 + 2) - 1LL;
        *((_QWORD *)v3 + 2) = v9;
        if ( !v9 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 24LL))(v3);
      }
    }
    LODWORD(v15) = 1065353216;
    v14 = &byte_6FD2F8;
    sub_56A6A8(&v14);
    v10 = *((_QWORD *)v6 + 3);
    if ( v10 == *((_QWORD *)v6 + 4) )
    {
      std::vector<Caver::MusicTrack>::_M_insert_aux();
    }
    else
    {
      sub_56A528(*((_QWORD *)v6 + 3), &v14);
      *(_DWORD *)(v10 + 8) = (_DWORD)v15;
      *((_QWORD *)v6 + 3) += 16LL;
    }
    v11 = v14 - 24;
    if ( v14 - 24 != (char *)&qword_6FD2E0 )
    {
      v12 = (unsigned int *)(v14 - 8);
      if ( &pthread_create )
      {
        do
          v13 = __ldaxr(v12);
        while ( __stlxr(v13 - 1, v12) );
      }
      else
      {
        v13 = (*v12)--;
      }
      if ( v13 <= 0 )
        operator delete(v11);
    }
  }
}

