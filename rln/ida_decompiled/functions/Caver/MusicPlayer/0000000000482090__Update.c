/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000482090
 * Mangled: _ZN5Caver11MusicPlayer6UpdateEf
 * Demangled: Caver::MusicPlayer::Update(float)
 *
 * Callers: 1
 *   0x00000000001F5460  Caver::MusicPlayer::Update(float)
 *
 * Callees: 2
 *   0x00000000001F5380  Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x00000000001FBE80  Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Referenced strings: 33
 *   insn=0x00000000004820A0 string=0x00000000004820A4 "h"@"
 *   insn=0x00000000004820A4 string=0x00000000004820A8 ""
 *   insn=0x00000000004820AC string=0x00000000004820B0 "("
 *   insn=0x00000000004820AC string=0x00000000004820E0 "`"
 *   insn=0x00000000004820B0 string=0x00000000004820B4 "`"
 *   insn=0x00000000004820B0 string=0x0000000000482194 "`\n@"
 *   insn=0x00000000004820B8 string=0x00000000004820BC " ( "
 *   insn=0x00000000004820C4 string=0x00000000004820C8 "`*"
 *   insn=0x00000000004820C8 string=0x00000000004820CC ""
 *   insn=0x00000000004820D0 string=0x00000000004820D4 "h*"
 *   insn=0x00000000004820D8 string=0x00000000004820DC ","
 *   insn=0x00000000004820E4 string=0x00000000004820E8 " 8 "
 *   insn=0x00000000004820E8 string=0x00000000004820EC "  "
 *   insn=0x00000000004820EC string=0x00000000004820F0 "`*"
 *   insn=0x00000000004820F8 string=0x00000000004820FC "("
 *   insn=0x00000000004820FC string=0x0000000000482100 "?"
 *   insn=0x0000000000482100 string=0x0000000000482104 "("
 *   insn=0x0000000000482104 string=0x0000000000482108 "hBA9("
 *   insn=0x0000000000482108 string=0x000000000048210C "("
 *   insn=0x0000000000482118 string=0x000000000048211C "h""
 *   insn=0x000000000048211C string=0x0000000000482120 "`B"
 *   insn=0x0000000000482130 string=0x0000000000482134 "h*"
 *   insn=0x000000000048213C string=0x0000000000482140 "t&@"
 *   insn=0x000000000048213C string=0x00000000001F5380 "P'"
 *   insn=0x0000000000482144 string=0x0000000000482148 "4"
 *   insn=0x000000000048214C string=0x0000000000482150 ""
 *   insn=0x0000000000482160 string=0x0000000000482164 "\t@"
 *   insn=0x000000000048216C string=0x0000000000482170 ""
 *   insn=0x0000000000482180 string=0x0000000000482184 "@"
 *   insn=0x000000000048218C string=0x0000000000482190 "<"
 *   insn=0x0000000000482190 string=0x00000000001FBE80 "0'"
 *   insn=0x0000000000482198 string=0x000000000048219C ""
 *   insn=0x00000000004821B0 string=0x00000000004821B4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MusicPlayer::Update(Caver::MusicPlayer *this, long double a2)
{
  int v3; // w8
  float v5; // s0
  float v6; // s0
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 result; // x0

  v3 = *((_DWORD *)this + 8);
  if ( v3 < 0 )
  {
    v6 = *((float *)this + 10) - (float)(*((float *)this + 9) * *(float *)&a2);
    *((float *)this + 10) = v6;
    if ( v6 < 0.0 )
    {
      v7 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 8) = 0;
      if ( v7 )
      {
        if ( *((_BYTE *)this + 80) )
        {
          *((_DWORD *)this + 8) = 1;
          *(_QWORD *)((char *)this + 36) = 1059760811;
        }
        else
        {
          *((_DWORD *)this + 10) = 1065353216;
        }
        Caver::MusicPlayer::SetCurrentPlaylist();
        v8 = (_QWORD *)*((_QWORD *)this + 9);
        *((_QWORD *)this + 8) = 0;
        *((_QWORD *)this + 9) = 0;
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
      else
      {
        *((_DWORD *)this + 10) = 0;
      }
    }
  }
  else
  {
    if ( !v3 )
      goto LABEL_16;
    v5 = *((float *)this + 10) + (float)(*((float *)this + 9) * *(float *)&a2);
    *((float *)this + 10) = v5;
    if ( v5 > 1.0 )
    {
      *((_DWORD *)this + 10) = 1065353216;
      *((_DWORD *)this + 8) = 0;
    }
  }
  Caver::MusicPlayer::UpdatePlayerVolume(this);
LABEL_16:
  result = *((_QWORD *)this + 2);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 24LL))(result, a2);
  return result;
}

