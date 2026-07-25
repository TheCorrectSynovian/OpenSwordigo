/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D022C
 * Mangled: _ZN5Caver13ExperienceBar8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::ExperienceBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *
 * Callees: 3
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 4
 *   insn=0x00000000003D0248 string=0x00000000001F9850 "0'"
 *   insn=0x00000000003D0258 string=0x00000000003D025C ""
 *   insn=0x00000000003D0268 string=0x00000000001F7210 "0'"
 *   insn=0x00000000003D0274 string=0x00000000001FC610 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::DrawRect(
        Caver::ExperienceBar *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUIView::DrawRect();
  (*(void (__fastcall **)(Caver::ExperienceBar *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::FontText::Draw((Caver::ExperienceBar *)((char *)this + 296), a2);
  Caver::FontText::Draw((Caver::ExperienceBar *)((char *)this + 536), a2);
  return Caver::FontText::Draw((Caver::ExperienceBar *)((char *)this + 776), a2);
}

