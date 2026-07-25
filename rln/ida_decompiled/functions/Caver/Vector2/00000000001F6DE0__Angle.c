/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6DE0
 * Mangled: ._ZNK5Caver7Vector25AngleEv
 * Demangled: Caver::Vector2::Angle(void)
 *
 * Callers: 14
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028CC3C  Caver::ProjectileControllerComponent::Update(float)
 *   0x000000000028CCE8  `non-virtual thunk to'Caver::ProjectileControllerComponent::Update(float)
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000002C1758  Caver::IsConvexVertex(Caver::VertexList_ *,Caver::VertexListNode_ *)
 *   0x00000000002C1960  Caver::BuildConcaveList(Caver::Vector2 *,int,Caver::VertexList_ *)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000427A3C  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *   0x00000000004D53B0  sub_4D53B0
 *
 * Callees: 1
 *   0x00000000004B2B04  Caver::Vector2::Angle(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6DE8 string=0x00000000001F6DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Angle(Caver::Vector2 *this)
{
  return _ZNK5Caver7Vector25AngleEv(this);
}

