/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB70
 * Mangled: ._ZN5Caver7ProgramD2Ev
 * Demangled: Caver::Program::~Program()
 *
 * Callers: 42
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x000000000021A3FC  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002324EC  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000232DB0  Caver::ProgramComponent::~ProgramComponent()
 *   0x00000000002335DC  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000234428  Caver::PropertiesComponent::~PropertiesComponent()
 *   0x000000000023FADC  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000240060  Caver::TouchableComponent::~TouchableComponent()
 *   0x0000000000255538  Caver::BreakableObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000255EA4  Caver::BreakableObjectComponent::~BreakableObjectComponent()
 *   0x0000000000262B50  Caver::CollectableItemComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000263A3C  Caver::CollectableItemComponent::~CollectableItemComponent()
 *   0x00000000002673D4  Caver::EntityActionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000267908  Caver::EntityActionComponent::~EntityActionComponent()
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x0000000000272510  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027D978  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *   0x0000000000281F14  Caver::SpellComponent::~SpellComponent()
 *   0x0000000000282208  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x0000000000282D70  Caver::FireBreathComponent::~FireBreathComponent()
 *   0x00000000002839E0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x000000000028543C  Caver::MagicBoltComponent::~MagicBoltComponent()
 *   0x0000000000286538  Caver::MagicBombComponent::~MagicBombComponent()
 *   0x0000000000288D9C  Caver::MagicExplosionComponent::className(void)
 *   0x000000000028AFD4  Caver::MagicHookshotComponent::~MagicHookshotComponent()
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002904F8  Caver::SpellComponent::~SpellComponent()
 *   0x0000000000290618  Caver::SpellComponent::className(void)
 *   0x000000000029215C  Caver::AttackComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000292B5C  Caver::AttackComponent::~AttackComponent()
 *   0x00000000002B5E1C  Caver::PressureTriggerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B63F0  Caver::PressureTriggerComponent::~PressureTriggerComponent()
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002C0520  Caver::GroundPolygonComponent::~GroundPolygonComponent()
 *   0x000000000045ED50  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x000000000045EDE4  boost::detail::sp_counted_impl_p<Caver::Program>::dispose(void)
 *   0x00000000004608A4  Caver::ObjectTemplate::ValueForBindedProperty(int)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000475F6C  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *
 * Callees: 1
 *   0x00000000004C0068  Caver::Program::~Program()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB78 string=0x00000000001FFB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Program::~Program(Caver::Program *this)
{
  _ZN5Caver7ProgramD2Ev(this);
}

