/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB308
 * Mangled: _ZNK5Caver15GUITexturedRect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000001F8B80  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Callees: 7
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x0000000000202E40  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004AB32C string=0x00000000004AB330 "HD"
 *   insn=0x00000000004AB330 string=0x00000000001FC450 "0'"
 *   insn=0x00000000004AB334 string=0x00000000004AB338 ":!"
 *   insn=0x00000000004AB338 string=0x00000000001F3820 "P'"
 *   insn=0x00000000004AB344 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004AB360 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000004AB378 string=0x00000000004AB37C "iM"
 *   insn=0x00000000004AB394 string=0x00000000004AB398 "bM"
 *   insn=0x00000000004AB3B8 string=0x00000000001F3B30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Texture **__fastcall Caver::GUITexturedRect::Draw(Caver::Texture **this, Caver::RenderingContext *a2)
{
  Caver::Texture **v2; // x20

  v2 = this;
  if ( *this )
  {
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    Caver::RenderingContext::SetDefaultBlendFunc(a2);
    Caver::RenderingContext::UseProgram(a2, 1u);
    Caver::RenderingContext::BindTexture(a2, *v2);
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)((char *)v2 + 28));
    Caver::RenderingContext::SetVertexAttribPointer();
    Caver::RenderingContext::SetVertexAttribPointer();
    return (Caver::Texture **)Caver::RenderingContext::DrawArrays(a2, 5, 0, 4);
  }
  return this;
}

