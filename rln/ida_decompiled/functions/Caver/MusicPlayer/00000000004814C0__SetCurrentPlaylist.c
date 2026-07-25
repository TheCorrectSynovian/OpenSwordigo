/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004814C0
 * Mangled: _ZN5Caver11MusicPlayer18SetCurrentPlaylistERKN5boost10shared_ptrINS_13MusicPlaylistEEE
 * Demangled: Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callers: 1
 *   0x00000000001F5380  Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Callees: 1
 *   0x00000000002027C0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 22
 *   insn=0x00000000004814CC string=0x00000000004814D0 ") @"
 *   insn=0x00000000004814D8 string=0x00000000004814DC "\n"
 *   insn=0x00000000004814D8 string=0x00000000004814E8 "u"
 *   insn=0x00000000004814DC string=0x00000000004814E0 "J"
 *   insn=0x00000000004814E0 string=0x00000000004814E4 "\n"
 *   insn=0x00000000004814E8 string=0x00000000004814EC "t"
 *   insn=0x00000000004814EC string=0x00000000004814F0 "i""
 *   insn=0x00000000004814F8 string=0x00000000004814FC ""
 *   insn=0x0000000000481500 string=0x0000000000481504 "!"
 *   insn=0x000000000048150C string=0x0000000000481510 "\t@"
 *   insn=0x0000000000481518 string=0x000000000048151C ""
 *   insn=0x000000000048152C string=0x0000000000481530 "h\n@9("
 *   insn=0x000000000048152C string=0x000000000048157C "t"
 *   insn=0x0000000000481530 string=0x0000000000481534 "("
 *   insn=0x0000000000481540 string=0x0000000000481544 "`\n@"
 *   insn=0x0000000000481548 string=0x000000000048154C ""
 *   insn=0x000000000048155C string=0x0000000000481560 " "
 *   insn=0x0000000000481568 string=0x000000000048156C "@"
 *   insn=0x0000000000481588 string=0x000000000048158C ""
 *   insn=0x0000000000481590 string=0x0000000000481594 "!"
 *   insn=0x000000000048159C string=0x00000000004815A0 "\t@"
 *   insn=0x00000000004815A8 string=0x00000000004815AC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::MusicPlayer::SetCurrentPlaylist(_QWORD *result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x19
  _QWORD *v5; // x21
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 (*v9)(void); // x1
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8

  v3 = *a2;
  v2 = a2[1];
  v4 = result;
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = (_QWORD *)result[7];
  v6 = result + 6;
  result[6] = v3;
  result[7] = v2;
  if ( !v5
    || (v7 = v5[1] - 1LL, (v5[1] = v7) != 0)
    || (result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5), v8 = v5[2] - 1LL, (v5[2] = v8) != 0) )
  {
    if ( *v6 )
    {
LABEL_7:
      if ( *((_BYTE *)v4 + 2) )
      {
        Caver::MusicPlayer::CreatePlayerForPlaylist();
        result = (_QWORD *)v4[2];
        if ( result )
        {
          v9 = *(__int64 (**)(void))(*result + 32LL);
          return (_QWORD *)v9();
        }
      }
      return result;
    }
  }
  else
  {
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    if ( *v6 )
      goto LABEL_7;
  }
  v10 = (_QWORD *)v4[3];
  v4[2] = 0;
  v4[3] = 0;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
      {
        v9 = *(__int64 (**)(void))(*v10 + 24LL);
        return (_QWORD *)v9();
      }
    }
  }
  return result;
}

