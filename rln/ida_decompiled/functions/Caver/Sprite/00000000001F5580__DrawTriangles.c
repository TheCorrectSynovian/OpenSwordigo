/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5580
 * Mangled: ._ZNK5Caver6Sprite13DrawTrianglesEPNS_16RenderingContextEii
 * Demangled: Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Callers: 2
 *   0x00000000004C6704  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *   0x00000000004C8584  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x00000000004C85BC  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5588 string=0x00000000001F558C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::DrawTriangles(Caver::Sprite *this, Caver::RenderingContext *a2, int a3, int a4)
{
  return _ZNK5Caver6Sprite13DrawTrianglesEPNS_16RenderingContextEii(this, a2, a3, a4);
}

