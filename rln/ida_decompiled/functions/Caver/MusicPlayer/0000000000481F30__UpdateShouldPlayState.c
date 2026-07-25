/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000481F30
 * Mangled: _ZN5Caver11MusicPlayer21UpdateShouldPlayStateEv
 * Demangled: Caver::MusicPlayer::UpdateShouldPlayState(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002027C0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 13
 *   insn=0x0000000000481F3C string=0x0000000000481F40 "h"
 *   insn=0x0000000000481F44 string=0x0000000000481F48 "h"
 *   insn=0x0000000000481F44 string=0x0000000000481F54 "i\n@9"
 *   insn=0x0000000000481F5C string=0x0000000000481F6C "h\n"
 *   insn=0x0000000000481F70 string=0x0000000000481FA4 "`\n@"
 *   insn=0x0000000000481F74 string=0x0000000000481F78 "("
 *   insn=0x0000000000481F7C string=0x0000000000481F80 "`\n@"
 *   insn=0x0000000000481F7C string=0x0000000000481F90 "`\n@"
 *   insn=0x0000000000481F84 string=0x0000000000481F98 ""
 *   insn=0x0000000000481F88 string=0x0000000000481F8C ""
 *   insn=0x0000000000481F90 string=0x0000000000481F94 "`"
 *   insn=0x0000000000481FA8 string=0x0000000000481FAC ""
 *   insn=0x0000000000481FB8 string=0x0000000000481FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int8 *__fastcall Caver::MusicPlayer::UpdateShouldPlayState(unsigned __int8 *this)
{
  unsigned __int8 *v1; // x19
  int v2; // w8
  __int64 (*v3)(void); // x1

  v1 = this;
  v2 = *this;
  if ( *this )
    v2 = this[1] == 0;
  if ( v2 != this[2] )
  {
    this[2] = v2;
    if ( !v2 )
    {
      this = (unsigned __int8 *)*((_QWORD *)this + 2);
      if ( !this )
        return this;
      v3 = *(__int64 (**)(void))(*(_QWORD *)this + 40LL);
      return (unsigned __int8 *)v3();
    }
    if ( *((_QWORD *)this + 6) )
    {
      this = (unsigned __int8 *)*((_QWORD *)this + 2);
      if ( this )
      {
LABEL_10:
        v3 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
        return (unsigned __int8 *)v3();
      }
      Caver::MusicPlayer::CreatePlayerForPlaylist();
    }
    this = (unsigned __int8 *)*((_QWORD *)v1 + 2);
    if ( !this )
      return this;
    goto LABEL_10;
  }
  return this;
}

