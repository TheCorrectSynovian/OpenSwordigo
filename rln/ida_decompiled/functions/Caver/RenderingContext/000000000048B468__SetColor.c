/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B468
 * Mangled: _ZN5Caver16RenderingContext8SetColorERKNS_5ColorE
 * Demangled: Caver::RenderingContext::SetColor(Caver::Color const&)
 *
 * Callers: 1
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000048B468 string=0x000000000048B46C "\t"
 *   insn=0x000000000048B474 string=0x000000000048B478 "("
 *   insn=0x000000000048B474 string=0x000000000048B4A8 "("
 *   insn=0x000000000048B478 string=0x000000000048B47C "\t"
 *   insn=0x000000000048B480 string=0x000000000048B484 "!"
 *   insn=0x000000000048B484 string=0x000000000048B488 "(@9\t"
 *   insn=0x000000000048B488 string=0x000000000048B48C "\t"
 *   insn=0x000000000048B494 string=0x000000000048B498 "("
 *   insn=0x000000000048B498 string=0x000000000048B49C "\t"
 *   insn=0x000000000048B4AC string=0x000000000048B4B0 "\t"
 *   insn=0x000000000048B4B0 string=0x000000000048B4B4 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetColor(__int64 this, const Caver::Color *a2)
{
  int v2; // w8

  if ( *(unsigned __int8 *)a2 != *(unsigned __int8 *)(this + 119)
    || *((unsigned __int8 *)a2 + 1) != *(unsigned __int8 *)(this + 120)
    || *((unsigned __int8 *)a2 + 2) != *(unsigned __int8 *)(this + 121)
    || *((unsigned __int8 *)a2 + 3) != *(unsigned __int8 *)(this + 122) )
  {
    v2 = *(_DWORD *)a2;
    *(_BYTE *)(this + 118) = 1;
    *(_DWORD *)(this + 119) = v2;
  }
  return this;
}

