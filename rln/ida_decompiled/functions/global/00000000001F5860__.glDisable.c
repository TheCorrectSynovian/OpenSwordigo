/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5860
 * Mangled: .glDisable
 * Demangled: .glDisable
 *
 * Callers: 15
 *   0x00000000002231A0  Caver::LightComponent::Disable(Caver::RenderingContext *)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *   0x000000000048B8D8  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x000000000048B900  Caver::RenderingContext::SetTexturingEnabled(bool)
 *   0x000000000048B934  Caver::RenderingContext::SetLightingEnabled(bool)
 *   0x000000000048B968  Caver::RenderingContext::SetCullFaceEnabled(bool)
 *   0x000000000048B990  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000048C6A0  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000048C848  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const*,float)
 *   0x000000000048C9F8  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x00000000006FE678  glDisable
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5868 string=0x00000000001F586C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glDisable()
{
  return glDisable();
}

