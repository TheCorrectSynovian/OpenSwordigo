/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF270
 * Mangled: _ZN5Caver5Proto3Map5ClearEv
 * Demangled: Caver::Proto::Map::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000002DF27C string=0x00000000002DF280 "h"
 *   insn=0x00000000002DF284 string=0x00000000002DF288 "k"
 *   insn=0x00000000002DF28C string=0x00000000002DF290 "h\n@"
 *   insn=0x00000000002DF294 string=0x00000000002DF298 ""
 *   insn=0x00000000002DF298 string=0x00000000002DF29C ""
 *   insn=0x00000000002DF2A0 string=0x00000000002DF2A4 "h"
 *   insn=0x00000000002DF2AC string=0x00000000002DF2B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::Clear(__int64 this)
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

