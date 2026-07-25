/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD590
 * Mangled: .__cxa_end_catch
 * Demangled: .__cxa_end_catch
 *
 * Callers: 310
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000211894  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *   0x0000000000211B1C  boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *   0x0000000000211D70  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(boost::shared_ptr<Caver::MainMenuViewController> const*,Caver::MainMenuViewController *)
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x00000000002158A0  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x0000000000215AA8  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x0000000000215F14  std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding *,Caver::Binding *>(Caver::Binding *,Caver::Binding *,Caver::Binding *)
 *   0x000000000021A054  Caver::BindingValue::ValueWithBool(bool)
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *   0x000000000021BC88  Caver::BindingValue::ValueWithInt(int)
 *   0x000000000021E33C  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x0000000000234A18  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(std::pair<std::string const,std::string> const&)
 *   0x0000000000239728  boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *   0x000000000023DD54  boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *   0x0000000000243ADC  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_create_node(std::pair<int const,Caver::Component::OutletBinding> const&)
 *   0x0000000000244F18  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *   0x00000000002455F0  std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x0000000000274B68  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_create_node(std::pair<std::string const,int> const&)
 *   0x0000000000274E18  std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map(ulong)
 *   0x000000000027DD40  boost::detail::shared_count::shared_count<Caver::GradientColor>(Caver::GradientColor *)
 *   0x000000000029B708  Caver::MonsterDeathControllerComponent::className(void)
 *   0x00000000002AC460  boost::detail::shared_count::shared_count<Caver::ParticleSystem>(Caver::ParticleSystem *)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B8EAC  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x00000000002C0F30  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *   0x00000000002C1554  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *   0x000000000033E5CC  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *   0x000000000033E6D8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x0000000000345AD4  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *   0x0000000000345E44  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *   0x0000000000346184  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000346C64  boost::shared_ptr<Caver::TabbedMenuView>::shared_ptr<Caver::TabbedMenuView>(Caver::TabbedMenuView *)
 *   0x0000000000346EB4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *   0x000000000034845C  boost::shared_ptr<Caver::GameOverView>::shared_ptr<Caver::GameOverView>(Caver::GameOverView *)
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000003506A8  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *   0x00000000003508A0  boost::shared_ptr<Caver::GameOverlayView>::shared_ptr<Caver::GameOverlayView>(Caver::GameOverlayView *)
 *   0x0000000000350BB0  boost::shared_ptr<Caver::ItemInfoPopupView>::shared_ptr<Caver::ItemInfoPopupView>(Caver::ItemInfoPopupView *)
 *   0x0000000000350CBC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoPopupView,Caver::ItemInfoPopupView>(boost::shared_ptr<Caver::ItemInfoPopupView> const*,Caver::ItemInfoPopupView *)
 *   0x000000000035119C  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357024  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035A5E4  boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *   0x000000000035AB64  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *   0x00000000003637F4  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *   0x0000000000363AEC  std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::QuestText>*,std::vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>>,boost::shared_ptr<Caver::QuestText> const&)
 *   0x00000000003641FC  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *   0x000000000036444C  boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *   0x0000000000364A54  boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *   0x0000000000368034  boost::shared_ptr<Caver::GuidePurchaseView>::shared_ptr<Caver::GuidePurchaseView>(Caver::GuidePurchaseView *)
 *   0x000000000036E5EC  boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *   0x000000000036FA90  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *   0x000000000036FD98  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *   0x00000000003704B8  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *   0x0000000000371AF0  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000037F314  std::_Deque_base<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_initialize_map(ulong)
 *   0x000000000037F650  boost::detail::shared_count::shared_count<Caver::Achievement>(Caver::Achievement *)
 *   0x000000000037FE8C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
 *   0x0000000000380168  boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *   0x00000000003805F0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *   0x00000000003809C4  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_create_node(std::pair<std::string const,double> const&)
 *   0x00000000003839C8  boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *   0x0000000000384E5C  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *   0x00000000003860E0  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *   0x0000000000388D70  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000003892AC  boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038D294  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *   0x000000000038DC3C  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *   0x00000000003957A4  boost::shared_ptr<Caver::BadgeCountView>::shared_ptr<Caver::BadgeCountView>(Caver::BadgeCountView *)
 *   0x00000000003958B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003A114C  boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *   0x00000000003A3B44  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x00000000003A4454  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *   0x00000000003A4CDC  boost::shared_ptr<Caver::ProfileSelectionView>::shared_ptr<Caver::ProfileSelectionView>(Caver::ProfileSelectionView *)
 *   0x00000000003A7934  boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager *)
 *   0x00000000003A7D94  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>> const&)
 *   0x00000000003A9304  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *   0x00000000003AB06C  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *   0x00000000003AED44  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *   0x00000000003B171C  std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *   0x00000000003B1E10  boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *   0x00000000003B209C  boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
 *   0x00000000003B230C  boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *   0x00000000003B2A88  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Item>> const&)
 *   0x00000000003B2F98  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Quest>> const&)
 *   0x00000000003B3884  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>> const&)
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *   0x00000000003B4D88  boost::detail::shared_count::shared_count<Caver::GameOptions>(Caver::GameOptions *)
 *   0x00000000003B4FC0  std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MusicPlaylist>*,std::vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>>,boost::shared_ptr<Caver::MusicPlaylist> const&)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B9AB4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>> const&)
 *   0x00000000003BA070  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>> const&)
 *   0x00000000003BD23C  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *   0x00000000003BDD08  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *   0x00000000003BE3BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *   0x00000000003BE8B8  boost::detail::shared_count::shared_count<Caver::MapPath>(Caver::MapPath *)
 *   0x00000000003BF274  Caver::MapNode::MusicName(void)
 *   0x00000000003BF76C  std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *   0x00000000003C239C  boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *   0x00000000003C29F8  boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *   0x00000000003C2EB0  boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState *)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D86E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *   0x00000000003D8954  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *   0x00000000003D8D54  boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *   0x00000000003D8E60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *   0x00000000003D908C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *   0x00000000003D92B8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *   0x00000000003D94E4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TargetFrame,Caver::TargetFrame>(boost::shared_ptr<Caver::TargetFrame> const*,Caver::TargetFrame *)
 *   0x00000000003D9710  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *   0x00000000003D993C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003DF898  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_create_node(std::pair<std::string const,ulong> const&)
 *   0x00000000003E29AC  boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x00000000003EBB20  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *   0x00000000003EBEB4  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *)
 *   0x00000000003EEC7C  Caver::StoreView::SetProductCount(int)
 *   0x00000000003EFDA4  boost::shared_ptr<Caver::StripeView>::shared_ptr<Caver::StripeView>(Caver::StripeView *)
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *   0x00000000003F5220  boost::shared_ptr<Caver::StoreView>::shared_ptr<Caver::StoreView>(Caver::StoreView *)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000400144  boost::shared_ptr<Caver::AttributePointsView>::shared_ptr<Caver::AttributePointsView>(Caver::AttributePointsView *)
 *   0x000000000040D1F4  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x000000000040D314  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>(Caver::InventoryTrinketSlot *)
 *   0x000000000040E7E0  boost::shared_ptr<Caver::DraggableMenuItem>::shared_ptr<Caver::DraggableMenuItem>(Caver::DraggableMenuItem *)
 *   0x00000000004127BC  boost::checked_array_delete<boost::shared_ptr<Caver::InventoryItemPanel>>(boost::shared_ptr<Caver::InventoryItemPanel> *)
 *   0x0000000000415118  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *   0x00000000004200C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *   0x0000000000429048  std::vector<std::string,std::allocator<std::string>>::_M_allocate_and_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>>(ulong,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>)
 *   0x0000000000433D1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *   0x0000000000434110  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *   0x0000000000434510  std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup const&)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x0000000000442868  boost::shared_ptr<Caver::TabView>::shared_ptr<Caver::TabView>(Caver::TabView *)
 *   0x00000000004492CC  boost::detail::shared_count::shared_count<Caver::MeshInstance>(Caver::MeshInstance *)
 *   0x0000000000449DF8  Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(void)
 *   0x000000000044B2CC  boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *   0x000000000044D0C0  boost::detail::shared_count::shared_count<Caver::PODLoader>(Caver::PODLoader *)
 *   0x000000000044D6C4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *   0x000000000044DDF0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>> const&)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x00000000004504E8  boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *   0x00000000004507EC  boost::detail::shared_count::shared_count<Caver::Skeleton>(Caver::Skeleton *)
 *   0x0000000000450A38  boost::detail::shared_count::shared_count<Caver::KeyframeAnimation>(Caver::KeyframeAnimation *)
 *   0x00000000004536D4  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
 *   0x0000000000453784  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *   0x0000000000453834  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
 *   0x00000000004538E4  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
 *   0x0000000000453994  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *   0x000000000045E6EC  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>> const&)
 *   0x000000000045ED50  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *   0x000000000045EE38  std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>>,boost::shared_ptr<Caver::Program> const&)
 *   0x000000000045F63C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *   0x00000000004621C4  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x000000000046A968  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>> const&)
 *   0x000000000046BE88  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>> const&)
 *   0x000000000046D05C  boost::detail::shared_count::shared_count<Caver::SceneGridLayer>(Caver::SceneGridLayer *)
 *   0x000000000047B670  boost::shared_ptr<Caver::OnlineController_Android>::shared_ptr<Caver::OnlineController_Android>(Caver::OnlineController_Android *)
 *   0x000000000047B720  boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *   0x000000000047B808  boost::shared_ptr<Caver::StoreController_Android>::shared_ptr<Caver::StoreController_Android>(Caver::StoreController_Android *)
 *   0x000000000047B8B8  boost::shared_ptr<Caver::CaverShell>::shared_ptr<Caver::CaverShell>(Caver::CaverShell *)
 *   0x000000000047B968  boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *   0x000000000047BBE8  boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *   0x0000000000480118  boost::detail::shared_count::shared_count<Caver::MusicPlayer>(Caver::MusicPlayer *)
 *   0x00000000004821C8  Caver::MusicPlayer::RegisterProgramLibrary(Caver::ProgramState *)
 *   0x0000000000482D24  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *   0x00000000004831CC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>> const&)
 *   0x00000000004872D4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *   0x00000000004876C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>> const&)
 *   0x0000000000487A78  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x0000000000487C58  Caver::BindingValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x0000000000487E38  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *   0x0000000000488028  Caver::BindingValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *   0x000000000048EEE0  boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *   0x0000000000493834  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *   0x0000000000496990  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x0000000000496C74  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *   0x00000000004AAC0C  boost::detail::shared_count::shared_count<Caver::GUIRoundedRect>(Caver::GUIRoundedRect *)
 *   0x00000000004B7160  boost::detail::shared_count::shared_count<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *)
 *   0x00000000004BB600  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *   0x00000000004BBB00  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *   0x00000000004BCE3C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *   0x00000000004BF768  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *   0x00000000004BFC88  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>> const&)
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *   0x00000000004C177C  Caver::ProgramState::Resume(int)
 *   0x00000000004C17C4  Caver::ProgramState::ExecuteString(std::string const&)
 *   0x00000000004C182C  Caver::ProgramState::Execute(int)
 *   0x00000000004C1F08  boost::detail::shared_count::shared_count<Caver::ProgramState>(Caver::ProgramState *)
 *   0x00000000004C4AF0  boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *   0x00000000004C50A8  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *   0x00000000004CE54C  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>> const&)
 *   0x00000000004D3458  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *   0x00000000004E0538  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *   0x00000000004EB998  sub_4EB998
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *   0x00000000004EC9BC  sub_4EC9BC
 *   0x000000000051DEF0  __cxa_call_unexpected
 *   0x000000000051DFE0  __cxxabiv1::__terminate(void (*)(void))
 *   0x0000000000521F50  sub_521F50
 *   0x00000000005220F0  sub_5220F0
 *   0x000000000052296C  sub_52296C
 *   0x00000000005230E4  sub_5230E4
 *   0x0000000000523408  sub_523408
 *   0x00000000005236B8  sub_5236B8
 *   0x0000000000523F08  sub_523F08
 *   0x0000000000524C20  sub_524C20
 *   0x0000000000525138  sub_525138
 *   0x0000000000525888  sub_525888
 *   0x0000000000525FE4  sub_525FE4
 *   0x0000000000526D40  sub_526D40
 *   0x0000000000527A84  sub_527A84
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052B780  sub_52B780
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *   0x0000000000532504  sub_532504
 *   0x0000000000532614  sub_532614
 *   0x0000000000532724  sub_532724
 *   0x000000000053BE88  sub_53BE88
 *   0x000000000053C134  sub_53C134
 *   0x000000000053C520  sub_53C520
 *   0x000000000053E27C  sub_53E27C
 *   0x000000000053F778  sub_53F778
 *   0x000000000053FD7C  sub_53FD7C
 *   0x000000000053FF24  sub_53FF24
 *   0x00000000005400E4  sub_5400E4
 *   0x0000000000540490  sub_540490
 *   0x0000000000540A88  sub_540A88
 *   0x0000000000540D40  sub_540D40
 *   0x0000000000540F84  sub_540F84
 *   0x00000000005411B8  sub_5411B8
 *   0x00000000005413EC  sub_5413EC
 *   0x0000000000541620  sub_541620
 *   0x0000000000541868  sub_541868
 *   0x0000000000541AB0  sub_541AB0
 *   0x0000000000541E9C  sub_541E9C
 *   0x00000000005424A0  sub_5424A0
 *   0x0000000000542648  sub_542648
 *   0x0000000000542808  sub_542808
 *   0x0000000000542B74  sub_542B74
 *   0x000000000054307C  sub_54307C
 *   0x00000000005434B0  sub_5434B0
 *   0x00000000005436D8  sub_5436D8
 *   0x00000000005438F0  sub_5438F0
 *   0x0000000000543B08  sub_543B08
 *   0x0000000000543D20  sub_543D20
 *   0x0000000000543F40  sub_543F40
 *   0x0000000000544160  sub_544160
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000054EC54  sub_54EC54
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *   0x0000000000554804  sub_554804
 *   0x0000000000554914  sub_554914
 *   0x0000000000554A24  sub_554A24
 *   0x000000000055F390  sub_55F390
 *   0x0000000000562F10  sub_562F10
 *   0x0000000000567088  sub_567088
 *   0x000000000056E434  sub_56E434
 *   0x000000000056F6C8  sub_56F6C8
 *   0x000000000056F934  sub_56F934
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x000000000051D2E4  __cxa_end_catch
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD598 string=0x00000000001FD59C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __cxa_end_catch(void)
{
  _cxa_end_catch();
}

