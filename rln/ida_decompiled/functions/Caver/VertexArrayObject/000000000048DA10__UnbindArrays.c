/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048DA10
 * Mangled: _ZN5Caver17VertexArrayObject12UnbindArraysEPNS_16RenderingContextE
 * Demangled: Caver::VertexArrayObject::UnbindArrays(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200850  .glBindBuffer
 *
 * Referenced strings: 8
 *   insn=0x000000000048DA1C string=0x000000000048DA20 "h&"
 *   insn=0x000000000048DA20 string=0x000000000048DA24 "h\n"
 *   insn=0x000000000048DA24 string=0x000000000048DA28 "\tA@"
 *   insn=0x000000000048DA2C string=0x000000000048DA3C ")@"
 *   insn=0x000000000048DA40 string=0x000000000048DA44 "@"
 *   insn=0x000000000048DA40 string=0x000000000048DA50 "h2@"
 *   insn=0x000000000048DA58 string=0x000000000048DA5C "`"
 *   insn=0x000000000048DA64 string=0x000000000048DA68 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::VertexArrayObject::UnbindArrays(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x19
  __int64 v3; // x8

  v2 = this;
  v3 = this + 4LL * *(int *)(this + 36);
  if ( !*(_DWORD *)(v3 + 64) )
  {
    if ( *(_DWORD *)(v3 + 40) )
      this = glBindBuffer();
    if ( *(_DWORD *)(v2 + 48) )
      return glBindBuffer();
  }
  return this;
}

