/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8584
 * Mangled: _ZNK5Caver6Sprite4DrawEPNS_16RenderingContextE
 * Demangled: Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000001F5580  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Referenced strings: 5
 *   insn=0x00000000004C8588 string=0x00000000004C8598 ","
 *   insn=0x00000000004C8594 string=0x00000000001F5580 "P'"
 *   insn=0x00000000004C85A4 string=0x00000000004C85A8 "}\t"
 *   insn=0x00000000004C85A8 string=0x00000000004C85AC "\t"
 *   insn=0x00000000004C85AC string=0x00000000004C85B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::Draw(Caver::Sprite *this, Caver::RenderingContext *a2)
{
  int v2; // w3

  if ( *((_QWORD *)this + 4) )
    v2 = *((_DWORD *)this + 7);
  else
    v2 = *((_DWORD *)this + 11) / 3;
  return Caver::Sprite::DrawTriangles(this, a2, 0, v2);
}

