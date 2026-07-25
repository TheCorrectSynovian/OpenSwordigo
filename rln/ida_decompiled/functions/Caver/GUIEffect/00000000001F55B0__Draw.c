/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F55B0
 * Mangled: ._ZN5Caver9GUIEffect4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *
 * Callers: 3
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A7768  Caver::GUIEffectView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A735C  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F55B8 string=0x00000000001F55BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIEffect::Draw(Caver::GUIEffect *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver9GUIEffect4DrawEPNS_16RenderingContextE(this, a2);
}

