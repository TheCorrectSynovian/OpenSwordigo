/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF2B0
 * Mangled: ._ZNK5Caver14CollisionShape17CollidesWithShapeERKS0_fPNS_13CollisionInfoE
 * Demangled: Caver::CollisionShape::CollidesWithShape(Caver::CollisionShape const&,float,Caver::CollisionInfo *)
 *
 * Callers: 3
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x000000000027F73C  Caver::PhysicsObjectComponent::HandleMessage(int,void *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF2B8 string=0x00000000001FF2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CollisionShape::CollidesWithShape()
{
  JUMPOUT(0x216F94);
}

