/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C6A0
 * Mangled: sub_54C6A0
 * Demangled: sub_54C6A0
 *
 * Callers: 38
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7F2C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *   0x00000000003AC040  Caver::CharacterState::SaveToProtobufMessage(Caver::Proto::CharacterState *)
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000003AD294  Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *   0x00000000003AD330  Caver::CharacterState::AnyItemOfType(Caver::ItemType)
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *   0x00000000003B8228  Caver::GameState::GetAllQuestsInProgress(std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>> *)
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *   0x00000000003C0F08  Caver::PlayerProfile::SaveToProtobufMessage(Caver::Proto::PlayerProfile *)
 *   0x00000000003C3E94  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x00000000003DFBF0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>,std::_Rb_tree_const_iterator<std::pair<std::string const,ulong>>)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045F88C  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x0000000000464258  Caver::Scene::Process(Caver::SceneProcessingContext *)
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x000000000046888C  Caver::Scene::RemoveGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x0000000000468A54  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000047E108  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_create_node(Caver::FWTouch const&)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x00000000004A3B08  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *   0x00000000004A58AC  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004DD65C  google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *   0x00000000004DEAC8  google::protobuf::internal::ExtensionSet::ParseMessageSet(google::protobuf::io::CodedInputStream *,google::protobuf::MessageLite const*)
 *   0x00000000004DEC50  google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004DF878  google::protobuf::internal::ExtensionSet::ByteSize(void)
 *   0x00000000004DF8DC  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000054C6A4 string=0x000000000054C6A8 "`"
 *   insn=0x000000000054C6AC string=0x000000000054C6C0 "A"
 *   insn=0x000000000054C6C0 string=0x000000000054C6C4 " "
 *   insn=0x000000000054C6C4 string=0x000000000054C6C8 "_"
 *   insn=0x000000000054C6C8 string=0x000000000054C6CC "`"
 *   insn=0x000000000054C6CC string=0x000000000054C6D0 "\n"
 *   insn=0x000000000054C6CC string=0x000000000054C6D8 " "
 *   insn=0x000000000054C6DC string=0x000000000054C6E0 "_"
 *   insn=0x000000000054C6E4 string=0x000000000054C6E8 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C6A0(__int64 a1)
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

