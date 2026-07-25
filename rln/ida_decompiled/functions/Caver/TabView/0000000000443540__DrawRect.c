/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443540
 * Mangled: _ZN5Caver7TabView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::TabView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 7
 *   insn=0x0000000000443560 string=0x0000000000443564 ""
 *   insn=0x0000000000443570 string=0x0000000000443574 "'"
 *   insn=0x0000000000443574 string=0x00000000001F7210 "0'"
 *   insn=0x000000000044357C string=0x0000000000443580 "T"
 *   insn=0x0000000000443580 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000044358C string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000004435AC string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabView::DrawRect(
        Caver::TabView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  (*(void (__fastcall **)(Caver::TabView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::RenderingContext::UseProgram(a2, 3u);
  Caver::Sprite::Draw((Caver::TabView *)((char *)this + 432), a2);
  Caver::GUIView::DrawRect();
}

