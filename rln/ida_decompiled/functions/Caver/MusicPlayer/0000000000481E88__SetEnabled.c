/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000481E88
 * Mangled: _ZN5Caver11MusicPlayer10SetEnabledEb
 * Demangled: Caver::MusicPlayer::SetEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FF5E0  Caver::MusicPlayer::SetEnabled(bool)
 *
 * Callees: 1
 *   0x00000000002027C0  Caver::MusicPlayer::CreatePlayerForPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *
 * Referenced strings: 16
 *   insn=0x0000000000481E94 string=0x0000000000481E98 "i"
 *   insn=0x0000000000481E98 string=0x0000000000481E9C "("
 *   insn=0x0000000000481EA0 string=0x0000000000481EA4 "`"
 *   insn=0x0000000000481EA4 string=0x0000000000481EA8 "h"
 *   insn=0x0000000000481EAC string=0x0000000000481EB0 "h"
 *   insn=0x0000000000481EBC string=0x0000000000481EC4 "i\n@9"
 *   insn=0x0000000000481ECC string=0x0000000000481EDC "h\n"
 *   insn=0x0000000000481EE0 string=0x0000000000481F14 "`\n@"
 *   insn=0x0000000000481EE4 string=0x0000000000481EE8 "("
 *   insn=0x0000000000481EEC string=0x0000000000481EF0 "`\n@"
 *   insn=0x0000000000481EEC string=0x0000000000481F00 "`\n@"
 *   insn=0x0000000000481EF4 string=0x0000000000481F08 ""
 *   insn=0x0000000000481EF8 string=0x0000000000481EFC "1"
 *   insn=0x0000000000481F00 string=0x0000000000481F04 "`"
 *   insn=0x0000000000481F18 string=0x0000000000481F1C ""
 *   insn=0x0000000000481F28 string=0x0000000000481F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MusicPlayer::SetEnabled(__int64 this, char a2)
{
  __int64 v2; // x19
  int v3; // w8
  __int64 (*v4)(void); // x1

  v2 = this;
  if ( (a2 & 1) != *(_BYTE *)this )
  {
    *(_BYTE *)this = a2 & 1;
    v3 = (a2 & 1) != 0 && *(_BYTE *)(this + 1) == 0;
    if ( v3 != *(unsigned __int8 *)(this + 2) )
    {
      *(_BYTE *)(this + 2) = v3;
      if ( !v3 )
      {
        this = *(_QWORD *)(this + 16);
        if ( !this )
          return this;
        v4 = *(__int64 (**)(void))(*(_QWORD *)this + 40LL);
        return v4();
      }
      if ( *(_QWORD *)(this + 48) )
      {
        this = *(_QWORD *)(this + 16);
        if ( this )
        {
LABEL_12:
          v4 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
          return v4();
        }
        Caver::MusicPlayer::CreatePlayerForPlaylist();
      }
      this = *(_QWORD *)(v2 + 16);
      if ( !this )
        return this;
      goto LABEL_12;
    }
  }
  return this;
}

