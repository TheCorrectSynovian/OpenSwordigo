/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048206C
 * Mangled: _ZN5Caver11MusicPlayer10SetLoopingEb
 * Demangled: Caver::MusicPlayer::SetLooping(bool)
 *
 * Callers: 1
 *   0x00000000001FD860  Caver::MusicPlayer::SetLooping(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000482070 string=0x0000000000482074 "!"
 *   insn=0x000000000048207C string=0x0000000000482080 ""
 *   insn=0x0000000000482084 string=0x0000000000482088 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MusicPlayer::SetLooping(Caver::MusicPlayer *this, char a2)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 2);
  *((_BYTE *)this + 8) = a2 & 1;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 72LL))(result);
  return result;
}

