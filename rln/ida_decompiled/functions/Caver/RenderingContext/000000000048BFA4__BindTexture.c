/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048BFA4
 * Mangled: _ZN5Caver16RenderingContext11BindTextureEPNS_7TextureE
 * Demangled: Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Callers: 1
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Callees: 1
 *   0x00000000001FB000  .glBindTexture
 *
 * Referenced strings: 9
 *   insn=0x000000000048BFB4 string=0x000000000048BFB8 "T"
 *   insn=0x000000000048BFB8 string=0x000000000048BFE0 "h"
 *   insn=0x000000000048BFBC string=0x000000000048BFC0 "h"
 *   insn=0x000000000048BFC0 string=0x000000000048BFC4 "?"
 *   insn=0x000000000048BFC8 string=0x000000000048BFCC " "
 *   insn=0x000000000048BFD0 string=0x00000000001FB000 "0'"
 *   insn=0x000000000048BFD4 string=0x000000000048BFD8 "h"
 *   insn=0x000000000048BFD8 string=0x000000000048BFDC ""
 *   insn=0x000000000048BFE4 string=0x000000000048BFE8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::BindTexture(__int64 this, Caver::Texture *a2)
{
  __int64 v3; // x19

  v3 = this;
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 14) != *(_DWORD *)(this + 260) )
    {
      this = glBindTexture();
      *(_DWORD *)(v3 + 260) = *((_DWORD *)a2 + 14);
    }
  }
  else if ( *(_DWORD *)(this + 260) )
  {
    this = glBindTexture();
    *(_DWORD *)(v3 + 260) = 0;
  }
  return this;
}

