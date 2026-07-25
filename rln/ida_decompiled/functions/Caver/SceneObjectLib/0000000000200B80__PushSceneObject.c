/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B80
 * Mangled: ._ZN5Caver14SceneObjectLib15PushSceneObjectEPNS_12ProgramStateEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Callers: 21
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x0000000000232710  Caver::ProgramComponent::Execute(void)
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x0000000000267774  Caver::EntityActionComponent::Perform(void)
 *   0x000000000026DBC4  sub_26DBC4
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000028F0B4  sub_28F0B4
 *   0x00000000002901C4  Caver::SpellComponent::Cast(void)
 *   0x0000000000290364  sub_290364
 *   0x0000000000292454  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *   0x00000000002B60B8  Caver::PressureTriggerComponent::Update(float)
 *   0x0000000000468FF8  sub_468FF8
 *   0x0000000000469290  sub_469290
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x000000000047736C  sub_47736C
 *
 * Callees: 1
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B88 string=0x0000000000200B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectLib::PushSceneObject(
        Caver::SceneObjectLib *this,
        Caver::ProgramState *a2,
        Caver::SceneObject *a3)
{
  return _ZN5Caver14SceneObjectLib15PushSceneObjectEPNS_12ProgramStateEPNS_11SceneObjectE(this, a2, a3);
}

