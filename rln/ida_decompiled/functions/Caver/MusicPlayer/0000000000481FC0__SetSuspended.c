/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000481FC0
 * Mangled: _ZN5Caver11MusicPlayer12SetSuspendedEb
 * Demangled: Caver::MusicPlayer::SetSuspended(bool)
 *
 * Callers: 1
 *   0x00000000001FF8E0  Caver::MusicPlayer::SetSuspended(bool)
 *
 * Callees: 1
 *   0x00000000002027C0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 19
 *   insn=0x0000000000481FCC string=0x0000000000481FD0 "i"
 *   insn=0x0000000000481FD0 string=0x0000000000481FD4 "("
 *   insn=0x0000000000481FD8 string=0x0000000000481FDC "@"
 *   insn=0x0000000000481FDC string=0x0000000000481FE0 "i"
 *   insn=0x0000000000481FE0 string=0x0000000000481FE4 "j\n@9+"
 *   insn=0x0000000000481FE4 string=0x0000000000481FE8 "+"
 *   insn=0x0000000000481FE8 string=0x0000000000481FEC "h"
 *   insn=0x0000000000481FEC string=0x0000000000481FF0 "?"
 *   insn=0x0000000000481FF4 string=0x0000000000481FF8 ")"
 *   insn=0x0000000000481FF8 string=0x0000000000481FFC "?"
 *   insn=0x0000000000482000 string=0x0000000000482010 "i\n"
 *   insn=0x0000000000482014 string=0x0000000000482048 "`\n@"
 *   insn=0x0000000000482018 string=0x000000000048201C "("
 *   insn=0x0000000000482020 string=0x0000000000482024 "`\n@"
 *   insn=0x0000000000482020 string=0x0000000000482034 "`\n@"
 *   insn=0x0000000000482028 string=0x000000000048203C ""
 *   insn=0x0000000000482034 string=0x0000000000482038 "`"
 *   insn=0x000000000048204C string=0x0000000000482050 ""
 *   insn=0x000000000048205C string=0x0000000000482060 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int8 *__fastcall Caver::MusicPlayer::SetSuspended(unsigned __int8 *this, int a2)
{
  unsigned __int8 *v2; // x19
  int v3; // w9
  int v4; // w10
  int v5; // w9
  __int64 (*v6)(void); // x1

  v2 = this;
  if ( (a2 & 1) != this[1] )
  {
    v3 = *this;
    v4 = this[2];
    this[1] = a2 & 1;
    v5 = (v3 != 0) & (a2 ^ 1);
    if ( v5 != v4 )
    {
      this[2] = v5;
      if ( !v5 )
      {
        this = (unsigned __int8 *)*((_QWORD *)this + 2);
        if ( !this )
          return this;
        v6 = *(__int64 (**)(void))(*(_QWORD *)this + 40LL);
        return (unsigned __int8 *)v6();
      }
      if ( *((_QWORD *)this + 6) )
      {
        this = (unsigned __int8 *)*((_QWORD *)this + 2);
        if ( this )
        {
LABEL_9:
          v6 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
          return (unsigned __int8 *)v6();
        }
        Caver::MusicPlayer::CreatePlayerForPlaylist();
      }
      this = (unsigned __int8 *)*((_QWORD *)v2 + 2);
      if ( !this )
        return this;
      goto LABEL_9;
    }
  }
  return this;
}

