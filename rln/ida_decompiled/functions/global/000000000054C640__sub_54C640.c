/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C640
 * Mangled: sub_54C640
 * Demangled: sub_54C640
 *
 * Callers: 64
 *   0x0000000000216C88  Caver::CollisionPairSet::Purge(void)
 *   0x00000000002346A0  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>,std::string const&)
 *   0x0000000000242228  Caver::Component::AutoConnectOutlets(void)
 *   0x00000000002422D0  Caver::Component::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002438C0  std::_Rb_tree<int,std::pair<int const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,Caver::Component::OutletBinding>>,int const&)
 *   0x0000000000244BA0  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::string const&)
 *   0x000000000024719C  Caver::ComponentManager::Purge(void)
 *   0x00000000002471EC  Caver::ComponentManager::PurgeInactive(void)
 *   0x0000000000247974  std::_Rb_tree<long,std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,boost::shared_ptr<Caver::ComponentCollection>>>,long const&)
 *   0x00000000002747F0  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::string const&)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x000000000037F738  std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Achievement>*,std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>>,boost::shared_ptr<Caver::Achievement> const&)
 *   0x00000000003805F0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_create_node(std::string const&)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000003A7A1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::string const&)
 *   0x00000000003AE9CC  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::string const&)
 *   0x00000000003B2710  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::string const&)
 *   0x00000000003B2C20  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::string const&)
 *   0x00000000003B350C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>,std::string const&)
 *   0x00000000003B973C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::string const&)
 *   0x00000000003B9CF8  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::string const&)
 *   0x00000000003BD990  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::string const&)
 *   0x00000000003BE044  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::string const&)
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *   0x00000000003D9B68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemOverlay,Caver::ItemOverlay>(boost::shared_ptr<Caver::ItemOverlay> const*,Caver::ItemOverlay *)
 *   0x00000000003DF118  std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>>,Caver::ItemOverlay::ItemInfo const&)
 *   0x00000000004339A4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::string const&)
 *   0x0000000000433D1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>> const&)
 *   0x00000000004498F8  Caver::MeshOptimizer::BuildVertexGroups(void)
 *   0x000000000044D34C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::string const&)
 *   0x000000000044D6C4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *   0x000000000044DA78  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>,std::string const&)
 *   0x00000000004505D0  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,int>>,int const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *   0x000000000045E374  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::string const&)
 *   0x000000000045F2C4  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::string const&)
 *   0x0000000000468A54  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *   0x0000000000468C5C  Caver::Scene::GetAllGroups(std::vector<boost::intrusive_ptr<Caver::SceneObjectGroup>,std::allocator<boost::intrusive_ptr<Caver::SceneObjectGroup>>> *)
 *   0x000000000046A4CC  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *   0x000000000046BB10  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::string const&)
 *   0x0000000000482D24  std::__uninitialized_copy<false>::__uninit_copy<Caver::MusicTrack *,Caver::MusicTrack *>(Caver::MusicTrack *,Caver::MusicTrack *,Caver::MusicTrack *)
 *   0x00000000004859C8  Caver::SoundLibrary::SaveToProtobufMessage(Caver::Proto::SoundLibrary *)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000004872D4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *   0x000000000048CBA4  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x0000000000496990  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004A519C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *   0x00000000004A54D8  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *   0x00000000004A88F0  std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIViewLayout>*,std::vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>>,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000004BEE90  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *   0x00000000004BF768  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *   0x00000000004C4D30  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::string const&)
 *   0x00000000004CD51C  Caver::TextureLibrary::ReloadTextures(bool)
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *   0x00000000004CE1D4  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::string const&)
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *   0x00000000004DCB74  google::protobuf::internal::ExtensionSet::RemoveLast(int)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000054C644 string=0x000000000054C648 "`"
 *   insn=0x000000000054C64C string=0x000000000054C660 "A"
 *   insn=0x000000000054C660 string=0x000000000054C664 " "
 *   insn=0x000000000054C664 string=0x000000000054C668 "_"
 *   insn=0x000000000054C668 string=0x000000000054C66C "`"
 *   insn=0x000000000054C66C string=0x000000000054C670 "\n"
 *   insn=0x000000000054C66C string=0x000000000054C678 " "
 *   insn=0x000000000054C67C string=0x000000000054C680 "_"
 *   insn=0x000000000054C684 string=0x000000000054C688 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C640(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x1

  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    while ( *(_QWORD *)(result + 16) )
      result = *(_QWORD *)(result + 16);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( a1 == *(_QWORD *)(v3 + 24) )
    {
      while ( 1 )
      {
        result = *(_QWORD *)(v3 + 8);
        if ( *(_QWORD *)(result + 24) != v3 )
          break;
        v3 = *(_QWORD *)(v3 + 8);
      }
      if ( result == *(_QWORD *)(v3 + 24) )
        return v3;
    }
    else
    {
      return *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}

