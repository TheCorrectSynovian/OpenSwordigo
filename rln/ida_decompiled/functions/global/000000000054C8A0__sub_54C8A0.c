/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C8A0
 * Mangled: sub_54C8A0
 * Demangled: sub_54C8A0
 *
 * Callers: 68
 *   0x0000000000216D3C  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_insert_unique(std::pair<Caver::CollisionPair const,bool> const&)
 *   0x00000000002339FC  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x0000000000243510  std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int const,Caver::Component::OutletBinding>>>::operator[](int const&)
 *   0x0000000000244320  std::map<std::string,boost::function<Caver::Component * ()(void)>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::operator[](std::string const&)
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *   0x00000000002744D4  Caver::HeroEntityComponent::className(void)
 *   0x000000000037D3B8  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *   0x000000000037E0F0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *   0x000000000037E500  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *   0x0000000000380024  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_insert_equal(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
 *   0x00000000003A69D0  std::map<std::string,boost::shared_ptr<Caver::PlayerProfile>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::operator[](std::string const&)
 *   0x00000000003A75D4  Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *   0x00000000003ABBF8  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *   0x00000000003B07DC  std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *   0x00000000003B0DCC  std::map<std::string,boost::shared_ptr<Caver::Quest>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::operator[](std::string const&)
 *   0x00000000003B126C  std::map<std::string,boost::shared_ptr<Caver::EntityClass>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::EntityClass>>>>::operator[](std::string const&)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B71CC  std::map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::operator[](std::string const&)
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *   0x00000000003BBB9C  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *   0x00000000003D3D94  std::map<std::string,boost::shared_ptr<Caver::GUIView>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::operator[](std::string const&)
 *   0x00000000003DD8AC  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000431F0C  std::map<std::string,boost::shared_ptr<Caver::GUILabel>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::operator[](std::string const&)
 *   0x0000000000432350  std::map<std::string,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::operator[](std::string const&)
 *   0x00000000004498F8  Caver::MeshOptimizer::BuildVertexGroups(void)
 *   0x000000000044BAB0  std::map<std::string,boost::shared_ptr<Caver::Model const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::operator[](std::string const&)
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x000000000044C70C  std::map<std::string,boost::shared_ptr<Caver::KeyframeAnimation const>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::KeyframeAnimation const>>>>::operator[](std::string const&)
 *   0x000000000044F994  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045CDB0  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x0000000000464F84  std::map<std::string,boost::intrusive_ptr<Caver::SceneObject>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::operator[](std::string const&)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x000000000047DFFC  std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique(Caver::FWTouch const&)
 *   0x0000000000480AD0  std::map<std::string,boost::shared_ptr<Caver::MusicPlaylist>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MusicPlaylist>>>>::operator[](std::string const&)
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *   0x0000000000487190  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal(std::pair<std::string const,boost::intrusive_ptr<Caver::SoundEffect>> const&)
 *   0x000000000048BA8C  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A4B40  Caver::GUIWindow::KeyDown(uint,uint,double)
 *   0x00000000004A8450  std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *   0x00000000004BD890  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *   0x00000000004BDF04  std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
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
 * Callees: 2
 *   0x000000000054C580  sub_54C580
 *   0x000000000054C5E0  sub_54C5E0
 *
 * Referenced strings: 34
 *   insn=0x000000000054C8B4 string=0x000000000054C8B8 """
 *   insn=0x000000000054C8BC string=0x000000000054C8C0 "?"
 *   insn=0x000000000054C8C4 string=0x000000000054C8C8 "?"
 *   insn=0x000000000054C8C8 string=0x000000000054C8CC "w "
 *   insn=0x000000000054C8CC string=0x000000000054C8D0 "?"
 *   insn=0x000000000054C8D0 string=0x000000000054C8D4 "@"
 *   insn=0x000000000054C8D4 string=0x000000000054C8D8 "A"
 *   insn=0x000000000054C8D4 string=0x000000000054C95C "A"
 *   insn=0x000000000054C8D8 string=0x000000000054C8DC "_"
 *   insn=0x000000000054C8E0 string=0x000000000054C8E4 "`@"
 *   insn=0x000000000054C8F0 string=0x000000000054C8F4 "8"
 *   insn=0x000000000054C8F8 string=0x000000000054C8FC " "
 *   insn=0x000000000054C8FC string=0x000000000054C940 " "
 *   insn=0x000000000054C90C string=0x000000000054C910 "`\n@"
 *   insn=0x000000000054C918 string=0x000000000054C9D8 "`"
 *   insn=0x000000000054C938 string=0x000000000054C93C "!"
 *   insn=0x000000000054C940 string=0x000000000054C944 " "
 *   insn=0x000000000054C95C string=0x000000000054C960 "`"
 *   insn=0x000000000054C964 string=0x000000000054C968 "A"
 *   insn=0x000000000054C978 string=0x000000000054C97C "?"
 *   insn=0x000000000054C97C string=0x000000000054C980 " "
 *   insn=0x000000000054C980 string=0x000000000054C984 "a"
 *   insn=0x000000000054C98C string=0x000000000054C990 " @"
 *   insn=0x000000000054C990 string=0x000000000054C994 "`"
 *   insn=0x000000000054C994 string=0x000000000054C998 "@"
 *   insn=0x000000000054C998 string=0x000000000054C9A0 "`"
 *   insn=0x000000000054C9A0 string=0x000000000054C9A4 " "
 *   insn=0x000000000054C9AC string=0x000000000054C9B0 " "
 *   insn=0x000000000054C9B0 string=0x000000000054C9B4 "`"
 *   insn=0x000000000054C9C4 string=0x000000000054C9C8 "3"
 *   insn=0x000000000054C9C8 string=0x000000000054C9CC "a"
 *   insn=0x000000000054C9D8 string=0x000000000054C9DC "`"
 *   insn=0x000000000054C9E0 string=0x000000000054C9E4 """
 *   insn=0x000000000054C9EC string=0x000000000054C9F0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54C8A0(char a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // x21
  _QWORD *v6; // x23
  _DWORD *v7; // x1
  __int64 v8; // x20
  __int64 v9; // x19
  _DWORD *v10; // x0
  __int64 result; // x0
  _DWORD *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x0
  _DWORD *v16; // x0

  *(_QWORD *)(a2 + 8) = a3;
  v4 = a2;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  v6 = a4 + 1;
  *(_DWORD *)a2 = 0;
  if ( a1 )
  {
    a3[2] = a2;
    if ( a3 == a4 )
    {
      a4[1] = a2;
      a4[3] = a2;
    }
    else if ( (_QWORD *)a4[2] == a3 )
    {
      a4[2] = a2;
    }
  }
  else
  {
    a3[3] = a2;
    if ( (_QWORD *)a4[3] == a3 )
      a4[3] = a2;
  }
  v7 = (_DWORD *)a4[1];
LABEL_6:
  if ( (_DWORD *)v4 != v7 )
  {
    do
    {
      v8 = *(_QWORD *)(v4 + 8);
      if ( *(_DWORD *)v8 )
        break;
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_DWORD **)(v9 + 16);
      if ( (_DWORD *)v8 == v10 )
      {
        v10 = *(_DWORD **)(v9 + 24);
        if ( !v10 || *v10 )
        {
          v16 = *(_DWORD **)(v4 + 8);
          if ( *(_QWORD *)(v8 + 24) == v4 )
          {
            v4 = *(_QWORD *)(v4 + 8);
            sub_54C580((__int64)v16, v6);
            v16 = *(_DWORD **)(v8 + 8);
          }
          *v16 = 1;
          *(_DWORD *)v9 = 0;
          sub_54C5E0(v9, v6);
          v7 = (_DWORD *)a4[1];
          goto LABEL_6;
        }
      }
      else if ( !v10 || *v10 )
      {
        v12 = *(_DWORD **)(v4 + 8);
        if ( *(_QWORD *)(v8 + 16) == v4 )
        {
          v4 = *(_QWORD *)(v4 + 8);
          sub_54C5E0((__int64)v12, v6);
          v12 = *(_DWORD **)(v8 + 8);
        }
        v13 = *(_QWORD *)(v9 + 24);
        *v12 = 1;
        *(_DWORD *)v9 = 0;
        v14 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v9 + 24) = v14;
        if ( v14 )
          *(_QWORD *)(v14 + 8) = v9;
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v9 + 8);
        if ( v9 == a4[1] )
        {
          a4[1] = v13;
        }
        else
        {
          v15 = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(v15 + 16) )
            *(_QWORD *)(v15 + 16) = v13;
          else
            *(_QWORD *)(v15 + 24) = v13;
        }
        *(_QWORD *)(v13 + 16) = v9;
        *(_QWORD *)(v9 + 8) = v13;
        v7 = (_DWORD *)a4[1];
        goto LABEL_6;
      }
      *(_DWORD *)v8 = 1;
      v4 = v9;
      *v10 = 1;
      *(_DWORD *)v9 = 0;
    }
    while ( (_DWORD *)v9 != v7 );
  }
  result = 1;
  *v7 = 1;
  return result;
}

