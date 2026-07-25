/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048331C
 * Mangled: _ZN5Caver13MusicPlaylist23LoadFromProtobufMessageERKNS_5Proto13MusicPlaylistE
 * Demangled: Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *
 * Callers: 1
 *   0x00000000001F6440  Caver::MusicPlaylist::LoadFromProtobufMessage(Caver::Proto::MusicPlaylist const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC140  std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MusicTrack*,std::vector<Caver::MusicTrack,std::allocator<Caver::MusicTrack>>>,Caver::MusicTrack const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 42
 *   insn=0x0000000000483338 string=0x000000000048333C "W"
 *   insn=0x000000000048334C string=0x0000000000483350 "a\n@"
 *   insn=0x0000000000483354 string=0x0000000000483358 "h"@"
 *   insn=0x0000000000483364 string=0x0000000000483368 "9"
 *   insn=0x000000000048337C string=0x0000000000483380 "<c"
 *   insn=0x000000000048338C string=0x0000000000483390 "\t"
 *   insn=0x000000000048338C string=0x00000000004833A4 "\t"
 *   insn=0x0000000000483390 string=0x0000000000483394 "*"
 *   insn=0x0000000000483394 string=0x0000000000483398 "\n"
 *   insn=0x00000000004833A0 string=0x00000000004833B0 "?"
 *   insn=0x00000000004833A4 string=0x00000000004833A8 "*"
 *   insn=0x00000000004833A8 string=0x00000000004833AC "\n"
 *   insn=0x00000000004833B4 string=0x0000000000483448 "h""
 *   insn=0x00000000004833BC string=0x00000000004833C0 """
 *   insn=0x00000000004833C8 string=0x00000000004833CC "h"
 *   insn=0x00000000004833CC string=0x00000000004833D0 "yz"
 *   insn=0x00000000004833DC string=0x00000000004833E0 "h"
 *   insn=0x00000000004833E0 string=0x00000000004833E4 "yz"
 *   insn=0x00000000004833E4 string=0x00000000004833E8 "\tq@9i"
 *   insn=0x00000000004833E8 string=0x00000000004833EC "i"
 *   insn=0x00000000004833EC string=0x00000000004833F0 ""
 *   insn=0x00000000004833FC string=0x0000000000483400 "@"
 *   insn=0x0000000000483408 string=0x000000000048340C "G"
 *   insn=0x0000000000483418 string=0x000000000048341C "A"
 *   insn=0x0000000000483430 string=0x0000000000483434 "C"
 *   insn=0x0000000000483434 string=0x00000000001FC140 "0'"
 *   insn=0x0000000000483440 string=0x0000000000483444 "!"
 *   insn=0x0000000000483444 string=0x0000000000483388 "!"
 *   insn=0x0000000000483448 string=0x000000000048344C "Z"
 *   insn=0x000000000048344C string=0x0000000000483450 "_"
 *   insn=0x0000000000483460 string=0x0000000000483464 "!"
 *   insn=0x0000000000483488 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000483490 string=0x0000000000483494 "(a"
 *   insn=0x000000000048349C string=0x00000000004834A0 ")!"
 *   insn=0x00000000004834A4 string=0x00000000004834A8 "*"
 *   insn=0x00000000004834A4 string=0x00000000004834D4 "*"
 *   insn=0x00000000004834A8 string=0x00000000004834AC "K"
 *   insn=0x00000000004834AC string=0x00000000004834B0 "+"
 *   insn=0x00000000004834B4 string=0x00000000004834B8 "_"
 *   insn=0x00000000004834D4 string=0x00000000004834D8 "K"
 *   insn=0x00000000004834D8 string=0x00000000004834DC "+"
 *   insn=0x00000000004834DC string=0x00000000004834E0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlaylist::LoadFromProtobufMessage(
        Caver::MusicPlaylist *this,
        const Caver::Proto::MusicPlaylist *a2)
{
  __int64 v4; // x26
  unsigned int *v5; // x8
  int v6; // w9
  __int64 v7; // x8
  __int64 v8; // x22
  char *v9; // x0
  char *v10; // [xsp+8h] [xbp-68h] BYREF
  int v11; // [xsp+10h] [xbp-60h]
  __int64 v12; // [xsp+18h] [xbp-58h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A6A8(this);
  if ( *((int *)a2 + 8) >= 1 )
  {
    v4 = 0;
    do
    {
      v10 = &byte_6FD2F8;
      v11 = 1065353216;
      sub_56A6A8(&v10);
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v4);
      if ( (*(_BYTE *)(v7 + 28) & 2) != 0 )
        v11 = *(_DWORD *)(v7 + 24);
      v8 = *((_QWORD *)this + 3);
      if ( v8 == *((_QWORD *)this + 4) )
      {
        std::vector<Caver::MusicTrack>::_M_insert_aux();
      }
      else
      {
        sub_56A528(*((_QWORD *)this + 3), &v10);
        *(_DWORD *)(v8 + 8) = v11;
        *((_QWORD *)this + 3) += 16LL;
      }
      v9 = v10 - 24;
      if ( v10 - 24 != (char *)&qword_6FD2E0 )
      {
        v5 = (unsigned int *)(v10 - 8);
        if ( &pthread_create )
        {
          do
            v6 = __ldaxr(v5);
          while ( __stlxr(v6 - 1, v5) );
        }
        else
        {
          v6 = (*v5)--;
        }
        if ( v6 <= 0 )
          operator delete(v9);
      }
      ++v4;
    }
    while ( v4 < *((int *)a2 + 8) );
  }
}

