/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202770
 * Mangled: ._ZN5Caver16RenderingContext19SetDepthTestEnabledEb
 * Demangled: Caver::RenderingContext::SetDepthTestEnabled(bool)
 *
 * Callers: 4
 *   0x000000000037226C  Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000478CE8  Java_com_touchfoo_swordigo_Native_drawApplication
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B990  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202774 string=0x000000000048B990 "\t"
 *   insn=0x0000000000202778 string=0x000000000020277C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetDepthTestEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext19SetDepthTestEnabledEb(this, a2);
}

