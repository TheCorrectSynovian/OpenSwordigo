/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000436A08
 * Mangled: _ZN5Caver16SceneLoadingView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::SceneLoadingView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *
 * Callees: 2
 *   0x00000000001F41E0  Caver::LoadingView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000436A24 string=0x00000000001F41E0 "P'"
 *   insn=0x0000000000436A34 string=0x0000000000436A38 ""
 *   insn=0x0000000000436A50 string=0x00000000001F7210 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneLoadingView::DrawRect(
        Caver::SceneLoadingView *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  Caver::LoadingView::DrawRect(this, a2, a3, a4);
  (*(void (__fastcall **)(Caver::SceneLoadingView *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
    this,
    a2,
    a4);
  return Caver::RenderingContext::SetIdentityMatrix(a2);
}

