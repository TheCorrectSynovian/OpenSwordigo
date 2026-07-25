/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4590
 * Mangled: ._Z15AngleDifferenceff
 * Demangled: AngleDifference(float,float)
 *
 * Callers: 4
 *   0x000000000027BF1C  Caver::MonsterEntityComponent::Update(float)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x0000000000427A3C  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004AC14C  AngleDifference(float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4598 string=0x00000000001F459C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall AngleDifference(float a1, float a2)
{
  return _Z15AngleDifferenceff(a1, a2);
}

