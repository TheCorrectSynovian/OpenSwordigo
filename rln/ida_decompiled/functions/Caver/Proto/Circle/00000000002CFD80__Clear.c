/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFD80
 * Mangled: _ZN5Caver5Proto6Circle5ClearEv
 * Demangled: Caver::Proto::Circle::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FC540  Caver::Proto::Circle::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000002CFD80 string=0x00000000002CFD84 "("
 *   insn=0x00000000002CFD88 string=0x00000000002CFD8C "@"
 *   insn=0x00000000002CFD90 string=0x00000000002CFD94 "\tQ@9I"
 *   insn=0x00000000002CFD94 string=0x00000000002CFD98 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::Clear(__int64 this)
{
  __int64 v1; // x8

  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      v1 = *(_QWORD *)(this + 16);
      if ( v1 )
      {
        if ( *(_BYTE *)(v1 + 20) )
        {
          *(_DWORD *)(v1 + 12) = 0;
          *(_DWORD *)(v1 + 16) = 0;
        }
        *(_DWORD *)(v1 + 20) = 0;
      }
    }
    *(_DWORD *)(this + 24) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

