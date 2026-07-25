/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4C44
 * Mangled: _ZN5Caver11TargetFrame8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::TargetFrame::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 4
 *   insn=0x00000000003E4C58 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003E4C60 string=0x00000000003E4C64 "k^"
 *   insn=0x00000000003E4C64 string=0x00000000001FC610 "0'"
 *   insn=0x00000000003E4C74 string=0x00000000003E4C78 "f^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::DrawRect(
        Caver::TargetFrame *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUIView::DrawRect();
  Caver::FontText::Draw((Caver::TargetFrame *)((char *)this + 288), a2);
  return Caver::FontText::Draw((Caver::TargetFrame *)((char *)this + 528), a2);
}

