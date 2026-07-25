/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441D3C
 * Mangled: _ZN5Caver14TabbedMenuView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::TabbedMenuView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000441D5C string=0x0000000000441D60 ""
 *   insn=0x0000000000441D6C string=0x0000000000441D70 "("
 *   insn=0x0000000000441D70 string=0x00000000001F7210 "0'"
 *   insn=0x0000000000441D90 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabbedMenuView::DrawRect(
        Caver::TabbedMenuView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  (*(void (__fastcall **)(Caver::TabbedMenuView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::GUIView::DrawRect();
}

