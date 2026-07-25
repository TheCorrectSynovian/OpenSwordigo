/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047FA9C
 * Mangled: _ZN5Caver11AudioSystem30CancelDelayedSoundEffectSourceERKN5boost13intrusive_ptrINS_17SoundEffectSourceEEE
 * Demangled: Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 1
 *   0x00000000001FEDA0  Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x000000000047FAAC string=0x000000000047FAB0 "t"A"
 *   insn=0x000000000047FAB8 string=0x000000000047FABC "*"
 *   insn=0x000000000047FABC string=0x000000000047FAC0 "\t!"
 *   insn=0x000000000047FAC4 string=0x000000000047FAC8 "l"
 *   insn=0x000000000047FAD0 string=0x000000000047FAE4 "?"
 *   insn=0x000000000047FAD8 string=0x000000000047FADC "a"
 *   insn=0x000000000047FADC string=0x000000000047FAE0 "%"
 *   insn=0x000000000047FAE4 string=0x000000000047FAE8 "`"
 *   insn=0x000000000047FAE8 string=0x000000000047FB54 "\t!"
 *   insn=0x000000000047FAEC string=0x000000000047FAF0 "\t"
 *   insn=0x000000000047FAF0 string=0x000000000047FAF4 "?"
 *   insn=0x000000000047FAF8 string=0x000000000047FAFC "("
 *   insn=0x000000000047FB08 string=0x000000000047FB0C "\t\t@"
 *   insn=0x000000000047FB0C string=0x000000000047FB10 ")"
 *   insn=0x000000000047FB10 string=0x000000000047FB14 "\t\t"
 *   insn=0x000000000047FB20 string=0x000000000047FB24 "@"
 *   insn=0x000000000047FB24 string=0x000000000047FB28 ""
 *   insn=0x000000000047FB28 string=0x000000000047FB2C ""
 *   insn=0x000000000047FB30 string=0x000000000047FB34 ""
 *   insn=0x000000000047FB34 string=0x000000000047FB38 ""
 *   insn=0x000000000047FB4C string=0x000000000047FB50 "h"
 *   insn=0x000000000047FB54 string=0x000000000047FB58 "i"
 *   insn=0x000000000047FB60 string=0x000000000047FB64 "@"
 *   insn=0x000000000047FB64 string=0x000000000047FB68 ""
 *   insn=0x000000000047FB68 string=0x000000000047FB6C ""
 *   insn=0x000000000047FB70 string=0x000000000047FB84 ""
 *   insn=0x000000000047FB94 string=0x000000000047FB98 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::CancelDelayedSoundEffectSource(__int64 result, _QWORD *a2)
{
  __int64 v2; // x19
  char *v3; // x8
  char *v4; // x20
  char *v5; // x11
  __int64 v6; // t1
  __int64 v7; // x9
  __int64 v8; // x21
  __int64 v9; // x8
  _DWORD *v10; // x0
  int v11; // w8
  int v12; // w8

  v2 = result;
  v4 = *(char **)(result + 16);
  v3 = *(char **)(result + 24);
  if ( v4 != v3 )
  {
    v5 = *(char **)(result + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      v5 += 8;
      if ( v6 == *a2 )
        break;
      v4 = v5;
      if ( v3 == v5 )
        return result;
    }
    if ( v3 - 8 != v4 )
    {
      v7 = v3 - (v4 + 8);
      if ( v7 >= 1 )
      {
        v8 = ((unsigned __int64)v7 >> 3) + 1;
        do
        {
          v9 = *((_QWORD *)v4 + 1);
          if ( v9 )
            ++*(_DWORD *)(v9 + 8);
          v10 = *(_DWORD **)v4;
          *(_QWORD *)v4 = v9;
          if ( v10 )
          {
            v11 = v10[2] - 1;
            v10[2] = v11;
            if ( !v11 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
          }
          --v8;
          v4 += 8;
        }
        while ( v8 > 1 );
        v3 = *(char **)(v2 + 24);
      }
    }
    *(_QWORD *)(v2 + 24) = v3 - 8;
    result = *((_QWORD *)v3 - 1);
    if ( result )
    {
      v12 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v12;
      if ( !v12 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
  }
  return result;
}

