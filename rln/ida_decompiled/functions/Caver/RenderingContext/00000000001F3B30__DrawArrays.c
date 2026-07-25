/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B30
 * Mangled: ._ZN5Caver16RenderingContext10DrawArraysEiii
 * Demangled: Caver::RenderingContext::DrawArrays(int,int,int)
 *
 * Callers: 11
 *   0x0000000000236964  Caver::ShadowVolumeComponent::Draw(Caver::RenderingContext *,boost::intrusive_ptr<Caver::LightComponent> const&,Caver::Matrix4 const&)
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x00000000002CC73C  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000461E60  Caver::PointLightManager::DrawDebugShapes(Caver::RenderingContext *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000004A735C  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000004AB308  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000004C85BC  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Callees: 1
 *   0x000000000048C330  Caver::RenderingContext::DrawArrays(int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B38 string=0x00000000001F3B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::DrawArrays(Caver::RenderingContext *this, int a2, int a3, int a4)
{
  return _ZN5Caver16RenderingContext10DrawArraysEiii(this, a2, a3, a4);
}

