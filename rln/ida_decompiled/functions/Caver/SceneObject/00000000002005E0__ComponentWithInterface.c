/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002005E0
 * Mangled: ._ZNK5Caver11SceneObject22ComponentWithInterfaceEl
 * Demangled: Caver::SceneObject::ComponentWithInterface(long)
 *
 * Callers: 161
 *   0x000000000021A864  Caver::CollisionShapeComponent::Prepare(void)
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *   0x00000000002283D8  sub_2283D8
 *   0x000000000022A440  Caver::ObjectLinkControllerComponent::Prepare(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022B048  sub_22B048
 *   0x000000000022B0B0  sub_22B0B0
 *   0x000000000022B11C  sub_22B11C
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x0000000000230324  Caver::PortalComponent::Prepare(void)
 *   0x0000000000230E34  sub_230E34
 *   0x0000000000230E74  sub_230E74
 *   0x0000000000232C7C  sub_232C7C
 *   0x0000000000232D04  sub_232D04
 *   0x0000000000233EC0  sub_233EC0
 *   0x0000000000234110  sub_234110
 *   0x00000000002354E4  Caver::ShadowComponent::Prepare(void)
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x000000000023D990  sub_23D990
 *   0x000000000023DA20  sub_23DA20
 *   0x000000000023FDA0  Caver::TouchableComponent::Trigger(void)
 *   0x0000000000241318  sub_241318
 *   0x0000000000241434  sub_241434
 *   0x0000000000241574  sub_241574
 *   0x00000000002416CC  sub_2416CC
 *   0x0000000000241814  sub_241814
 *   0x0000000000241950  sub_241950
 *   0x0000000000241AA4  sub_241AA4
 *   0x0000000000242228  Caver::Component::AutoConnectOutlets(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *   0x0000000000260514  sub_260514
 *   0x00000000002605C0  sub_2605C0
 *   0x000000000026064C  sub_26064C
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x0000000000263354  sub_263354
 *   0x00000000002634A8  sub_2634A8
 *   0x000000000026360C  sub_26360C
 *   0x00000000002639E8  sub_2639E8
 *   0x0000000000266170  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x0000000000266668  sub_266668
 *   0x0000000000268FF0  Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&)
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x00000000002696F0  sub_2696F0
 *   0x000000000026974C  sub_26974C
 *   0x00000000002697D4  sub_2697D4
 *   0x0000000000269858  sub_269858
 *   0x00000000002698F4  sub_2698F4
 *   0x000000000026CDE4  sub_26CDE4
 *   0x000000000026CE60  sub_26CE60
 *   0x000000000026CEBC  sub_26CEBC
 *   0x000000000026CFD0  sub_26CFD0
 *   0x000000000026D0EC  sub_26D0EC
 *   0x000000000026D1D8  sub_26D1D8
 *   0x000000000026D280  sub_26D280
 *   0x000000000026D2E4  sub_26D2E4
 *   0x000000000026D348  sub_26D348
 *   0x000000000026D3AC  sub_26D3AC
 *   0x000000000026D418  sub_26D418
 *   0x000000000026D47C  sub_26D47C
 *   0x000000000026D5E0  sub_26D5E0
 *   0x000000000026D634  sub_26D634
 *   0x000000000026D7A0  sub_26D7A0
 *   0x000000000026D804  sub_26D804
 *   0x000000000026D894  sub_26D894
 *   0x000000000026DA14  sub_26DA14
 *   0x000000000026DBC4  sub_26DBC4
 *   0x000000000026DC24  sub_26DC24
 *   0x000000000026DE08  sub_26DE08
 *   0x000000000026DE84  sub_26DE84
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *   0x000000000026F3E4  Caver::EntityInfoComponent::ApplyToChildObject(Caver::SceneObject *)
 *   0x000000000026F4DC  Caver::EntityInfoComponent::HandleMessage(int,void *)
 *   0x0000000000270800  Caver::HealthComponent::Prepare(void)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000271810  sub_271810
 *   0x000000000027186C  sub_27186C
 *   0x00000000002718F0  sub_2718F0
 *   0x000000000027194C  sub_27194C
 *   0x00000000002719C8  sub_2719C8
 *   0x0000000000271A1C  sub_271A1C
 *   0x0000000000271A94  sub_271A94
 *   0x0000000000271B10  sub_271B10
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000279D28  sub_279D28
 *   0x0000000000279D94  sub_279D94
 *   0x0000000000279E68  sub_279E68
 *   0x0000000000279EBC  sub_279EBC
 *   0x0000000000279F40  sub_279F40
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027F440  Caver::PhysicsObjectComponent::Prepare(void)
 *   0x000000000027F8F0  sub_27F8F0
 *   0x000000000027F954  sub_27F954
 *   0x000000000027F9E0  sub_27F9E0
 *   0x000000000027FA94  sub_27FA94
 *   0x000000000027FB18  sub_27FB18
 *   0x000000000027FB90  sub_27FB90
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000285DC0  Caver::MagicBombComponent::Prepare(void)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028C0B0  Caver::ObjectModifierComponent::Prepare(void)
 *   0x000000000028C260  Caver::ObjectModifierComponent::ApplyModifier(Caver::ObjectModifierType,float,float)
 *   0x000000000028CBCC  Caver::ProjectileControllerComponent::Prepare(void)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000028E580  Caver::SkillComponent::CreateSpellObject(void)
 *   0x000000000028F0B4  sub_28F0B4
 *   0x000000000028F32C  sub_28F32C
 *   0x000000000028F36C  sub_28F36C
 *   0x000000000028F40C  sub_28F40C
 *   0x0000000000290364  sub_290364
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x000000000029FC10  sub_29FC10
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002AB2D8  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B34A4  sub_2B34A4
 *   0x00000000002B34E4  sub_2B34E4
 *   0x00000000002B49D4  Caver::ElevatorControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B4B6C  sub_2B4B6C
 *   0x00000000002B4CF0  sub_2B4CF0
 *   0x00000000002C528C  Caver::SwingableWeaponComponent::Prepare(void)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x00000000002CB384  Caver::WeaponGlowComponent::Prepare(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034A6BC  Caver::GameSceneController::UpdateTarget(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *   0x0000000000368DE8  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036963C  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A318  Caver::HeroEquipmentManager::ApplyCharacterStatsToSpell(Caver::SceneObject *)
 *   0x000000000036A378  Caver::HeroEquipmentManager::ApplyTrinketToSpells(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000036A510  Caver::HeroEquipmentManager::ApplyTrinketToSpell(Caver::SceneObject *,boost::shared_ptr<Caver::Item> const&)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x0000000000458C10  Caver::CameraController::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x000000000047462C  Caver::SceneObject::ComponentWithInterface(long)
 *
 * Referenced strings: 1
 *   insn=0x00000000002005E8 string=0x00000000002005EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::ComponentWithInterface(Caver::SceneObject *this, __int64 a2)
{
  return _ZNK5Caver11SceneObject22ComponentWithInterfaceEl(this, a2);
}

