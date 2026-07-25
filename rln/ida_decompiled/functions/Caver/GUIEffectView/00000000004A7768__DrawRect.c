/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A7768
 * Mangled: _ZN5Caver13GUIEffectView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIEffectView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F55B0  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000004A7790 string=0x00000000004A7794 ""
 *   insn=0x00000000004A77A4 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004A77B0 string=0x00000000001F55B0 "P'"
 *   insn=0x00000000004A77D4 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIEffectView::DrawRect(
        Caver::GUIEffectView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::GUIEffect *v4; // x22

  v4 = (Caver::GUIEffectView *)((char *)this + 240);
  (*(void (__fastcall **)(Caver::GUIEffectView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  Caver::RenderingContext::SetIdentityMatrix(a2);
  Caver::GUIEffect::Draw(v4, a2);
  Caver::GUIView::DrawRect();
}

