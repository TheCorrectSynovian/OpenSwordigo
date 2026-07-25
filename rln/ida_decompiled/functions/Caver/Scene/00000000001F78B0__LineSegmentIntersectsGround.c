/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F78B0
 * Mangled: ._ZN5Caver5Scene27LineSegmentIntersectsGroundERKNS_11LineSegmentEffPNS_7Vector2E
 * Demangled: Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callers: 2
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 1
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F78B8 string=0x00000000001F78BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::LineSegmentIntersectsGround(
        Caver::Scene *this,
        const Caver::LineSegment *a2,
        float a3,
        float a4,
        Caver::Vector2 *a5)
{
  return _ZN5Caver5Scene27LineSegmentIntersectsGroundERKNS_11LineSegmentEffPNS_7Vector2E(this, a2, a3, a4, a5);
}

