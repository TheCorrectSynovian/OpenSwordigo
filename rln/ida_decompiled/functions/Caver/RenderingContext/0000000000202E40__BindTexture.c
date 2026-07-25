/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E40
 * Mangled: ._ZN5Caver16RenderingContext11BindTextureEPNS_7TextureE
 * Demangled: Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Callers: 11
 *   0x00000000002AE884  Caver::PortalEffectComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002B8C20  Caver::GroundMeshComponent::DrawMesh(Caver::RenderingContext *,Caver::MeshInstance *)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002CC73C  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000004AB308  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *   0x00000000004C85BC  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x000000000048BFA4  Caver::RenderingContext::BindTexture(Caver::Texture *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E48 string=0x0000000000202E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::BindTexture(Caver::RenderingContext *this, Caver::Texture *a2)
{
  return _ZN5Caver16RenderingContext11BindTextureEPNS_7TextureE(this, a2);
}

