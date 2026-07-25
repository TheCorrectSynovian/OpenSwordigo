/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8340
 * Mangled: _ZN5Caver5Proto12SoundLibrary5ClearEv
 * Demangled: Caver::Proto::SoundLibrary::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000002D834C string=0x00000000002D8350 "h"
 *   insn=0x00000000002D8354 string=0x00000000002D8358 "k"
 *   insn=0x00000000002D835C string=0x00000000002D8360 "h\n@"
 *   insn=0x00000000002D8364 string=0x00000000002D8368 ""
 *   insn=0x00000000002D8368 string=0x00000000002D836C ""
 *   insn=0x00000000002D8370 string=0x00000000002D8374 "h"
 *   insn=0x00000000002D837C string=0x00000000002D8380 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundLibrary::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0

  v1 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8 * v2);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 24) );
  }
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  return this;
}

