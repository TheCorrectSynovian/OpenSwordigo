/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC1F0
 * Mangled: ._ZN5Caver23CollisionShapeComponentC2Ev_0
 * Demangled: Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Callers: 3
 *   0x000000000024FB78  Caver::CollisionShapeComponent::Create(void)
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 1
 *   0x000000000021779C  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC1F8 string=0x00000000001FC1FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollisionShapeComponent::CollisionShapeComponent(Caver::CollisionShapeComponent *this)
{
  return _ZN5Caver23CollisionShapeComponentC2Ev(this);
}

