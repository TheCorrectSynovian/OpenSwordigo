/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468FDC
 * Mangled: _ZN5Caver5Scene9SetPausedEb
 * Demangled: Caver::Scene::SetPaused(bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000468FDC string=0x0000000000468FE0 "?"
 *   insn=0x0000000000468FE4 string=0x0000000000468FE8 ")"
 *   insn=0x0000000000468FE8 string=0x0000000000468FEC ""
 *   insn=0x0000000000468FEC string=0x0000000000468FF0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::SetPaused(__int64 this, char a2)
{
  int v2; // w9

  if ( (a2 & 1) != 0 )
    v2 = 1;
  else
    v2 = -1;
  *(_DWORD *)(this + 32) += v2;
  return this;
}

