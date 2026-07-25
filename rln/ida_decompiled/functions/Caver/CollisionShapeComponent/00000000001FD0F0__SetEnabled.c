/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD0F0
 * Mangled: ._ZN5Caver23CollisionShapeComponent10SetEnabledEb
 * Demangled: Caver::CollisionShapeComponent::SetEnabled(bool)
 *
 * Callers: 13
 *   0x0000000000287B34  Caver::MagicExplosionComponent::SetDamage(Caver::DamageType,Caver::SpecialDamageType,int,float)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x000000000029235C  Caver::AttackComponent::Prepare(void)
 *   0x000000000029274C  Caver::AttackComponent::SetDamageEnabled(bool)
 *   0x0000000000292794  Caver::AttackComponent::Update(float)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *   0x00000000002B31F8  Caver::DoorControllerComponent::SetCollisionEnabled(bool)
 *   0x00000000002B3264  Caver::DoorControllerComponent::Close(void)
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x00000000002C55C4  Caver::SwingableWeaponComponent::SetDamageEnabled(bool)
 *   0x00000000002C5EF8  Caver::SwingableWeaponComponent::StopSwing(void)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD0F8 string=0x00000000001FD0FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CollisionShapeComponent::SetEnabled(Caver::CollisionShapeComponent *this)
{
  JUMPOUT(0x21A810);
}

