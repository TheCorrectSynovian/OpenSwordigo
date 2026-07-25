/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C700
 * Mangled: sub_54C700
 * Demangled: sub_54C700
 *
 * Callers: 97
 *   0x0000000000216D3C  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *   0x00000000002346A0  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::string const&)
 *   0x00000000002348D8  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000002438C0  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *   0x0000000000244BA0  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::string const&)
 *   0x0000000000244DD8  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x0000000000247974  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *   0x00000000002747F0  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::string const&)
 *   0x0000000000274A28  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000037F738  std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Achievement>*,std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>>,boost::shared_ptr<Caver::Achievement> const&)
 *   0x000000000037FD4C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003804B0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003805F0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *   0x0000000000380884  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003A75D4  Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *   0x00000000003A7A1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::string const&)
 *   0x00000000003A7C54  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003AE9CC  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::string const&)
 *   0x00000000003AEC04  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003B2710  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::string const&)
 *   0x00000000003B2948  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003B2C20  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::string const&)
 *   0x00000000003B2E58  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003B350C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::string const&)
 *   0x00000000003B3744  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003B973C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::string const&)
 *   0x00000000003B9974  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003B9CF8  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::string const&)
 *   0x00000000003B9F30  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003BD990  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::string const&)
 *   0x00000000003BDBC8  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003BE044  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::string const&)
 *   0x00000000003BE27C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003D9B68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *   0x00000000003D9EC0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000003DF118  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *   0x00000000003DF758  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004339A4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::string const&)
 *   0x0000000000433BDC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x0000000000433D1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *   0x0000000000433FD0  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000044D34C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::string const&)
 *   0x000000000044D584  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000044D6C4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *   0x000000000044DA78  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::string const&)
 *   0x000000000044DCB0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004505D0  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *   0x000000000045E374  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::string const&)
 *   0x000000000045E5AC  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000045F2C4  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::string const&)
 *   0x000000000045F4FC  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000046A4CC  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *   0x000000000046A828  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000046BB10  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::string const&)
 *   0x000000000046BD48  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000047DFFC  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *   0x0000000000482D24  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *   0x000000000048308C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004872D4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *   0x0000000000487580  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x000000000048CBA4  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *   0x00000000004A4B40  Caver::GUIWindow::KeyDown(uint,uint,double)
 *   0x00000000004A519C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *   0x00000000004A54D8  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *   0x00000000004A88F0  std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000004A8F04  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *   0x00000000004BF628  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004BF768  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *   0x00000000004BFB48  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004C4D30  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::string const&)
 *   0x00000000004C4F68  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004CE1D4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::string const&)
 *   0x00000000004CE40C  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_get_insert_unique_pos(std::string const&)
 *   0x00000000004D8DB4  google::protobuf::internal::ExtensionSet::SetInt32(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000004D8F24  google::protobuf::internal::ExtensionSet::MaybeNewExtension(int,google::protobuf::FieldDescriptor const*,google::protobuf::internal::ExtensionSet::Extension **)
 *   0x00000000004D9090  google::protobuf::internal::ExtensionSet::GetRepeatedInt32(int,int)
 *   0x00000000004D9530  google::protobuf::internal::ExtensionSet::SetInt64(int,uchar,long,google::protobuf::FieldDescriptor const*)
 *   0x00000000004D96A0  google::protobuf::internal::ExtensionSet::GetRepeatedInt64(int,int)
 *   0x00000000004D9B40  google::protobuf::internal::ExtensionSet::SetUInt32(int,uchar,uint,google::protobuf::FieldDescriptor const*)
 *   0x00000000004D9CB0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(int,int)
 *   0x00000000004DA150  google::protobuf::internal::ExtensionSet::SetUInt64(int,uchar,ulong,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DA2C0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(int,int)
 *   0x00000000004DA758  google::protobuf::internal::ExtensionSet::SetFloat(int,uchar,float,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DA8D0  google::protobuf::internal::ExtensionSet::GetRepeatedFloat(int,int)
 *   0x00000000004DAD70  google::protobuf::internal::ExtensionSet::SetDouble(int,uchar,double,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DAEE8  google::protobuf::internal::ExtensionSet::GetRepeatedDouble(int,int)
 *   0x00000000004DB398  google::protobuf::internal::ExtensionSet::SetBool(int,uchar,bool,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DB508  google::protobuf::internal::ExtensionSet::GetRepeatedBool(int,int)
 *   0x00000000004DB9A8  google::protobuf::internal::ExtensionSet::SetEnum(int,uchar,int,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DBB18  google::protobuf::internal::ExtensionSet::GetRepeatedEnum(int,int)
 *   0x00000000004DBFB8  google::protobuf::internal::ExtensionSet::MutableString(int,uchar,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DC140  google::protobuf::internal::ExtensionSet::GetRepeatedString(int,int)
 *   0x00000000004DC594  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000004DC718  google::protobuf::internal::ExtensionSet::GetRepeatedMessage(int,int)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000054C708 string=0x000000000054C70C "@"
 *   insn=0x000000000054C708 string=0x000000000054C71C "@@"
 *   insn=0x000000000054C710 string=0x000000000054C714 "_"
 *   insn=0x000000000054C718 string=0x000000000054C738 "@"
 *   insn=0x000000000054C71C string=0x000000000054C720 "`"
 *   insn=0x000000000054C720 string=0x000000000054C724 ""
 *   insn=0x000000000054C724 string=0x000000000054C740 "A"
 *   insn=0x000000000054C740 string=0x000000000054C744 " @"
 *   insn=0x000000000054C744 string=0x000000000054C748 "_"
 *   insn=0x000000000054C74C string=0x000000000054C750 " "
 *   insn=0x000000000054C754 string=0x000000000054C758 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C700(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x1
  bool v4; // zf

  if ( !*(_DWORD *)a1 && a1 == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
    return *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    while ( *(_QWORD *)(result + 24) )
      result = *(_QWORD *)(result + 24);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( a1 == *(_QWORD *)(v3 + 16) )
    {
      do
      {
        result = *(_QWORD *)(v3 + 8);
        v4 = *(_QWORD *)(result + 16) == v3;
        v3 = result;
      }
      while ( v4 );
    }
    else
    {
      return *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

