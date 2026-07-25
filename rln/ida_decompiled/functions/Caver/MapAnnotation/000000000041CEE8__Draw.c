/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CEE8
 * Mangled: _ZN5Caver13MapAnnotation4DrawEPNS_16RenderingContextE
 * Demangled: Caver::MapAnnotation::Draw(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 8
 *   insn=0x000000000041CF00 string=0x000000000041CF04 "S}"
 *   insn=0x000000000041CF04 string=0x00000000001FC450 "0'"
 *   insn=0x000000000041CF08 string=0x000000000041CF0C "EZ"
 *   insn=0x000000000041CF0C string=0x00000000001F3820 "P'"
 *   insn=0x000000000041CF18 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000041CF20 string=0x00000000001F7210 "0'"
 *   insn=0x000000000041CF2C string=0x00000000001FCDA0 "0'"
 *   insn=0x000000000041CF40 string=0x00000000001FC610 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapAnnotation::Draw(Caver::MapAnnotation *this, Caver::RenderingContext *a2)
{
  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  Caver::RenderingContext::UseProgram(a2, 3u);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::Sprite::Draw((Caver::MapAnnotation *)((char *)this + 240), a2);
  return Caver::FontText::Draw(this, a2);
}

