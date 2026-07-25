/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5990
 * Mangled: ._ZN5Caver11SceneObject24WorldPointFromLocalPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *
 * Callers: 11
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000028EB48  Caver::SkillComponent::UpdateCastObjectPosition(void)
 *   0x000000000028EC2C  Caver::SkillComponent::FinishCasting(void)
 *   0x000000000028EF00  Caver::SkillComponent::Update(float)
 *   0x000000000028F40C  sub_28F40C
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x00000000002A2C88  Caver::FireEmitterComponent::Update(float)
 *   0x00000000002B0E90  Caver::SimpleGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x0000000000473B08  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5998 string=0x00000000001F599C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneObject::WorldPointFromLocalPoint()
{
  JUMPOUT(0x473BC8);
}

