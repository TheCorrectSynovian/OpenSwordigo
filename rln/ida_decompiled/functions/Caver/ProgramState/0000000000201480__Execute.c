/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201480
 * Mangled: ._ZN5Caver12ProgramState7ExecuteEi
 * Demangled: Caver::ProgramState::Execute(int)
 *
 * Callers: 16
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
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *   0x00000000004C18B4  Caver::ProgramState::ExecuteProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x00000000004C182C  Caver::ProgramState::Execute(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201488 string=0x000000000020148C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramState::Execute(Caver::ProgramState *this, int a2)
{
  return _ZN5Caver12ProgramState7ExecuteEi(this, a2);
}

