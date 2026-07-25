/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C85BC
 * Mangled: _ZNK5Caver6Sprite13DrawTrianglesEPNS_16RenderingContextEii
 * Demangled: Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Callers: 1
 *   0x00000000001F5580  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Callees: 4
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 6
 *   insn=0x00000000004C860C string=0x00000000004C8610 ""
 *   insn=0x00000000004C8620 string=0x00000000004C8624 "#"
 *   insn=0x00000000004C866C string=0x00000000004C8670 "c"
 *   insn=0x00000000004C8674 string=0x00000000004C8678 ">"
 *   insn=0x00000000004C86A4 string=0x00000000004C86A8 """
 *   insn=0x00000000004C86A8 string=0x00000000001F3B30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Texture **__fastcall Caver::Sprite::DrawTriangles(
        Caver::Texture **this,
        Caver::RenderingContext *a2,
        int a3,
        int a4)
{
  Caver::Texture **v4; // x22

  v4 = this;
  if ( *this )
  {
    Caver::RenderingContext::BindTexture(a2, *this);
    Caver::RenderingContext::SetVertexAttribPointer();
    if ( *((_BYTE *)v4 + 80) )
      Caver::RenderingContext::SetVertexAttribPointer();
    Caver::RenderingContext::SetVertexAttribPointer();
    if ( v4[4] )
      return (Caver::Texture **)Caver::RenderingContext::DrawElements();
    else
      return (Caver::Texture **)Caver::RenderingContext::DrawArrays(a2, 4, 3 * a3, 3 * a4);
  }
  return this;
}

