/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201770
 * Mangled: ._ZN5Caver16RenderingContext12DrawElementsEiiNS_8DataTypeEPKv
 * Demangled: Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Callers: 8
 *   0x00000000002835E4  Caver::HookshotTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x0000000000371EE4  Caver::SceneEdgeFade::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *   0x00000000004C85BC  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *
 * Callees: 1
 *   0x000000000048C3B8  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201778 string=0x000000000020177C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingContext::DrawElements()
{
  return _ZN5Caver16RenderingContext12DrawElementsEiiNS_8DataTypeEPKv();
}

