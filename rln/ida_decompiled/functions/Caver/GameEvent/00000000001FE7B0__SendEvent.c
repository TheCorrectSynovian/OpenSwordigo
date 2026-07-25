/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE7B0
 * Mangled: ._ZN5Caver9GameEvent9SendEventEPS0_
 * Demangled: Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *
 * Callers: 18
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x000000000027AC34  Caver::ManaComponent::Update(float)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *   0x0000000000345148  Caver::GameMenuViewController::InventoryViewTrinketDidChange(Caver::InventoryView *,Caver::InventoryViewItemType)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034D490  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000357A14  Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003601E8  sub_3601E8
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *   0x000000000041F8C4  Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callees: 1
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE7B8 string=0x00000000001FE7BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameEvent::SendEvent(Caver::GameEvent *this, Caver::GameEvent *a2)
{
  JUMPOUT(0x3B3900);
}

