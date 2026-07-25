/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202030
 * Mangled: ._ZN5Caver14ShapeComponent18ContainsWorldPointERKNS_7Vector2E
 * Demangled: Caver::ShapeComponent::ContainsWorldPoint(Caver::Vector2 const&)
 *
 * Callers: 3
 *   0x0000000000292408  Caver::AttackComponent::WorldPointInsideAttackArea(Caver::Vector2 const&)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x000000000029F8EC  Caver::SnappingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000238BD4  Caver::ShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202038 string=0x000000000020203C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ShapeComponent::ContainsWorldPoint()
{
  JUMPOUT(0x238D7C);
}

