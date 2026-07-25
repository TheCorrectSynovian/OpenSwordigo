/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9C2C
 * Mangled: _ZNK5Caver14GUIRoundedRect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Callers: 1
 *   0x00000000002023B0  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *
 * Callees: 4
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A9C48 string=0x00000000001FC450 "0'"
 *   insn=0x00000000004A9C50 string=0x00000000001F3820 "P'"
 *   insn=0x00000000004A9C5C string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004A9C6C string=0x00000000004A9C70 "LL"
 *   insn=0x00000000004A9C70 string=0x00000000001FCDA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIRoundedRect::Draw(Caver::GUIRoundedRect *this, Caver::RenderingContext *a2)
{
  Caver::RenderingContext::SetBlendingEnabled(a2, 1);
  Caver::RenderingContext::SetDefaultBlendFunc(a2);
  Caver::RenderingContext::UseProgram(a2, 3u);
  return Caver::Sprite::Draw((Caver::GUIRoundedRect *)((char *)this + 80), a2);
}

