/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE40
 * Mangled: ._ZN5Caver9Component25NewProgramStateForProgramERKNS_7ProgramE
 * Demangled: Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *
 * Callers: 12
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000232710  Caver::ProgramComponent::Execute(void)
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x0000000000267774  Caver::EntityActionComponent::Perform(void)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002901C4  Caver::SpellComponent::Cast(void)
 *   0x0000000000292454  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *   0x00000000002B60B8  Caver::PressureTriggerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002437FC  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FEE44 string=0x00000000002437FC "\t"
 *   insn=0x00000000001FEE48 string=0x00000000001FEE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Component::NewProgramStateForProgram(Caver::Component *this, const Caver::Program *a2)
{
  return _ZN5Caver9Component25NewProgramStateForProgramERKNS_7ProgramE(this, a2);
}

