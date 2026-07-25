/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9E30
 * Mangled: ._ZN5Caver9Rectangle20ExpandToIncludePointERKNS_7Vector2E
 * Demangled: Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Callers: 9
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x00000000002B41F0  Caver::ElevatorControllerComponent::Prepare(void)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *   0x0000000000456EF8  Caver::Camera::ScreenAABBFromWorldAABB(Caver::Rectangle const&,float,Caver::Rectangle const&)
 *   0x0000000000457244  Caver::Camera::AABBOnZPlane(float)
 *   0x00000000004573A0  Caver::Camera::AABBForZRange(float,float)
 *   0x00000000004B07A0  Caver::Polygon::Bounds(void)
 *   0x00000000004C7614  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *   0x00000000004C7E68  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004B2368  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9E34 string=0x00000000004B2368 " "
 *   insn=0x00000000001F9E38 string=0x00000000001F9E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::ExpandToIncludePoint(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver9Rectangle20ExpandToIncludePointERKNS_7Vector2E(this, a2);
}

