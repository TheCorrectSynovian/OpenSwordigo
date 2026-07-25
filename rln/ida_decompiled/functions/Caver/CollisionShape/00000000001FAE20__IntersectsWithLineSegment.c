/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE20
 * Mangled: ._ZNK5Caver14CollisionShape25IntersectsWithLineSegmentERKNS_11LineSegmentEPNS_7Vector2ES5_Pi
 * Demangled: Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Callers: 4
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callees: 1
 *   0x000000000021742C  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE28 string=0x00000000001FAE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShape::IntersectsWithLineSegment(
        Caver::CollisionShape *this,
        const Caver::LineSegment *a2,
        Caver::Vector2 *a3,
        Caver::Vector2 *a4,
        Caver::Vector2 *a5)
{
  return _ZNK5Caver14CollisionShape25IntersectsWithLineSegmentERKNS_11LineSegmentEPNS_7Vector2ES5_Pi(
           this,
           a2,
           a3,
           a4,
           a5);
}

