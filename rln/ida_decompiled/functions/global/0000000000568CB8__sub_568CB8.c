/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568CB8
 * Mangled: sub_568CB8
 * Demangled: sub_568CB8
 *
 * Callers: 95
 *   0x0000000000229DFC  Caver::ObjectLinkControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x00000000002D174C  Caver::Proto::Texture_Subtexture::Clear(void)
 *   0x00000000002D2BBC  Caver::Proto::Texture::Clear(void)
 *   0x00000000002D4920  Caver::Proto::Font::Clear(void)
 *   0x00000000002D5B30  Caver::Proto::Program::Clear(void)
 *   0x00000000002D6E18  Caver::Proto::GUIViewLayout::Clear(void)
 *   0x00000000002D7AB0  Caver::Proto::SoundEffect::Clear(void)
 *   0x00000000002D8DC0  Caver::Proto::MusicTrack::Clear(void)
 *   0x00000000002D967C  Caver::Proto::MusicPlaylist::Clear(void)
 *   0x00000000002DA760  Caver::Proto::EditorViewState::Clear(void)
 *   0x00000000002DC040  Caver::Proto::MapNode_Portal::Clear(void)
 *   0x00000000002DCEF0  Caver::Proto::MapNode::Clear(void)
 *   0x00000000002DE714  Caver::Proto::MapZone::Clear(void)
 *   0x00000000002DFEAC  Caver::Proto::Item::Clear(void)
 *   0x00000000002E1004  Caver::Proto::Skill::Clear(void)
 *   0x00000000002E1F18  Caver::Proto::Quest::Clear(void)
 *   0x00000000002E2B34  Caver::Proto::EntityClass::Clear(void)
 *   0x00000000002E385C  Caver::Proto::GuideTarget_LevelObject::Clear(void)
 *   0x00000000002E44D4  Caver::Proto::GuideTarget::Clear(void)
 *   0x00000000002E8FA4  Caver::Proto::PlayerProfile_Counter::Clear(void)
 *   0x00000000002EA15C  Caver::Proto::PlayerProfile::Clear(void)
 *   0x00000000002EA344  Caver::Proto::GameState::Clear(void)
 *   0x00000000002EC204  Caver::Proto::StateProperties::Clear(void)
 *   0x00000000002ECA84  Caver::Proto::QuestState::Clear(void)
 *   0x00000000002ED360  Caver::Proto::QuestText::Clear(void)
 *   0x00000000002EF47C  Caver::Proto::CharacterState::Clear(void)
 *   0x00000000002F1E2C  Caver::Proto::LevelState::Clear(void)
 *   0x00000000002F2B88  Caver::Proto::CharacterState_ItemState::Clear(void)
 *   0x00000000002FB508  Caver::Proto::Component::New(void)
 *   0x00000000002FC030  Caver::Proto::SceneObject::Clear(void)
 *   0x00000000002FD374  Caver::Proto::ObjectLibrary::Clear(void)
 *   0x0000000000300918  Caver::Proto::SceneObjectGroup::Clear(void)
 *   0x0000000000302BD4  Caver::Proto::SpriteComponent::Clear(void)
 *   0x0000000000303440  Caver::Proto::ModelComponent::Clear(void)
 *   0x00000000003043F4  Caver::Proto::KeyframeAnimationComponent::Clear(void)
 *   0x0000000000307798  Caver::Proto::GroundMeshComponent::Clear(void)
 *   0x00000000003099F0  Caver::Proto::TextureMappingComponent::Clear(void)
 *   0x000000000030E530  Caver::Proto::BoneControlledCollisionShapeComponent::Clear(void)
 *   0x000000000030EF78  Caver::Proto::ObjectLinkControllerComponent::Clear(void)
 *   0x0000000000311330  Caver::Proto::SoundEffectComponent::Clear(void)
 *   0x000000000031B420  Caver::Proto::EntityInfoComponent::Clear(void)
 *   0x000000000031C1FC  Caver::Proto::BackgroundComponent::Clear(void)
 *   0x000000000031F824  Caver::Proto::ParticleComponent::Clear(void)
 *   0x000000000032ADE8  Caver::Proto::SwingableWeaponControllerComponent::Clear(void)
 *   0x000000000032D14C  Caver::Proto::PortalComponent::Clear(void)
 *   0x000000000032E4EC  Caver::Proto::CollectableItemComponent::Clear(void)
 *   0x000000000032FA08  Caver::Proto::ItemDropComponent_ItemDropEntry::Clear(void)
 *   0x00000000003306B4  Caver::Proto::ItemDropComponent::Clear(void)
 *   0x0000000000331594  Caver::Proto::OverlayTextComponent::Clear(void)
 *   0x0000000000334240  Caver::Proto::SkillComponent::Clear(void)
 *   0x0000000000339B7C  Caver::Proto::Mesh::Clear(void)
 *   0x000000000033BA54  Caver::Proto::PackedMesh::Clear(void)
 *   0x000000000033CDC0  Caver::Proto::UnpackedMesh::Clear(void)
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *   0x00000000004D8C0C  google::protobuf::internal::ExtensionSet::Extension::Clear(void)
 *   0x00000000004DCB74  google::protobuf::internal::ExtensionSet::RemoveLast(int)
 *   0x00000000004DE67C  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E2390  google::protobuf::MessageLite::SerializeToString(std::string *)
 *   0x00000000004E23D8  google::protobuf::MessageLite::SerializePartialToString(std::string *)
 *   0x00000000004E3CC0  google::protobuf::io::CodedInputStream::ReadStringFallback(std::string *,int)
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x0000000000536618  sub_536618
 *   0x0000000000545CA0  sub_545CA0
 *   0x0000000000558854  sub_558854
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000568F04  sub_568F04
 *   0x0000000000568F60  sub_568F60
 *   0x0000000000568F74  sub_568F74
 *   0x0000000000568FD4  sub_568FD4
 *   0x0000000000569018  sub_569018
 *   0x0000000000569074  sub_569074
 *   0x0000000000569110  sub_569110
 *   0x000000000056918C  sub_56918C
 *   0x0000000000569390  sub_569390
 *   0x000000000056960C  sub_56960C
 *   0x0000000000569650  sub_569650
 *   0x00000000005696BC  sub_5696BC
 *   0x000000000056971C  sub_56971C
 *   0x000000000056977C  sub_56977C
 *   0x00000000005697E0  sub_5697E0
 *   0x000000000056984C  sub_56984C
 *   0x00000000005698B0  sub_5698B0
 *   0x0000000000569924  sub_569924
 *   0x000000000056998C  sub_56998C
 *   0x0000000000569A08  sub_569A08
 *   0x0000000000569A48  sub_569A48
 *   0x0000000000569AC0  sub_569AC0
 *   0x0000000000569B54  sub_569B54
 *   0x0000000000569C14  sub_569C14
 *   0x0000000000569CB8  sub_569CB8
 *   0x0000000000569D84  sub_569D84
 *   0x0000000000569E1C  sub_569E1C
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *   0x0000000000568C20  sub_568C20
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x0000000000568CC8 string=0x0000000000568CCC "u"
 *   insn=0x0000000000568CEC string=0x0000000000568CF0 "S"
 *   insn=0x0000000000568CF4 string=0x0000000000568CF8 "s"
 *   insn=0x0000000000568D04 string=0x0000000000568D08 ""
 *   insn=0x0000000000568D28 string=0x0000000000568D48 "s"
 *   insn=0x0000000000568D34 string=0x0000000000568D38 "A"
 *   insn=0x0000000000568D38 string=0x0000000000568D3C "!"
 *   insn=0x0000000000568D60 string=0x0000000000568D64 "A"
 *   insn=0x0000000000568D68 string=0x0000000000568D6C "@ht8"
 *   insn=0x0000000000568D78 string=0x0000000000568D7C "b"
 *   insn=0x0000000000568D7C string=0x0000000000568D80 " `"
 *   insn=0x0000000000568D8C string=0x0000000000568D90 "s"
 *   insn=0x0000000000568DD4 string=0x0000000000568DD8 "c"
 *   insn=0x0000000000568DE4 string=0x0000000000568DE8 " "
 *   insn=0x0000000000568DF0 string=0x0000000000568DF4 "oK"
 *   insn=0x0000000000568DF4 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000568E04 string=0x0000000000568E08 "s"
 *   insn=0x0000000000568E48 string=0x0000000000568E4C "Eb"
 *   insn=0x0000000000568E5C string=0x0000000000568E60 "@b"
 *   insn=0x0000000000568E68 string=0x0000000000568E6C "B<G"
 *   insn=0x0000000000568E6C string=0x0000000000568E70 "B"
 *   insn=0x0000000000568E70 string=0x0000000000568E74 "! "
 *   insn=0x0000000000568E70 string=0x0000000000568E98 """
 *   insn=0x0000000000568E74 string=0x0000000000568E78 """
 *   insn=0x0000000000568E78 string=0x0000000000568E7C "C"
 *   insn=0x0000000000568E7C string=0x0000000000568E80 "#"
 *   insn=0x0000000000568E84 string=0x0000000000568E88 "_"
 *   insn=0x0000000000568E8C string=0x0000000000568E90 "9"
 *   insn=0x0000000000568E90 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000568E98 string=0x0000000000568E9C "C"
 *   insn=0x0000000000568E9C string=0x0000000000568EA0 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_568CB8(__int64 *a1, size_t a2, __int64 a3, __int64 a4)
{
  int *v4; // x4
  __int64 v6; // x21
  __int64 v7; // x2
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x21
  size_t v12; // x19
  __int64 v13; // x0
  __int64 v14; // x24
  __int64 v15; // x3
  __int64 v16; // x25
  void *v17; // x0
  int *v18; // x1
  size_t v19; // x3
  size_t v20; // x20
  int *v21; // x1
  __int64 *v22; // x0
  int *result; // x0
  size_t v24; // x3
  unsigned int *v25; // x1
  int v26; // w2

  v4 = (int *)*a1;
  v6 = a4 - a3;
  v7 = *(_QWORD *)(*a1 - 24);
  v9 = *(_QWORD *)(*a1 - 16);
  v10 = v6 + v7;
  v12 = v7 - a2 - a3;
  if ( v10 <= v9 && *(v4 - 2) <= 0 )
  {
    if ( a3 != a4 && v12 )
    {
      v24 = a4 + a2;
      if ( v12 == 1 )
        *((_BYTE *)v4 + v24) = *((_BYTE *)v4 + a3 + a2);
      else
        memmove((char *)v4 + v24, (char *)v4 + a3 + a2, v7 - a2 - a3);
      v4 = (int *)*a1;
    }
    result = v4 - 6;
    if ( v4 - 6 != (int *)&qword_6FD2E0 )
      goto LABEL_11;
    return result;
  }
  v13 = sub_568C20(v10, v9);
  v14 = v13;
  v15 = a4;
  v16 = v13 + 24;
  if ( a2 )
  {
    v17 = (void *)(v13 + 24);
    v18 = (int *)*a1;
    if ( a2 != 1 )
    {
      v16 = v14 + 24;
      memcpy(v17, v18, a2);
      v15 = a4;
      if ( !v12 )
        goto LABEL_9;
      goto LABEL_7;
    }
    v16 = v14 + 24;
    *(_BYTE *)(v14 + 24) = *(_BYTE *)v18;
  }
  if ( !v12 )
    goto LABEL_9;
LABEL_7:
  v19 = a2 + 24 + v15;
  v20 = a3 + a2;
  if ( v12 == 1 )
    *(_BYTE *)(v14 + v19) = *(_BYTE *)(*a1 + v20);
  else
    memcpy((void *)(v14 + v19), (const void *)(*a1 + v20), v12);
LABEL_9:
  v21 = (int *)*a1;
  v22 = (__int64 *)(*a1 - 24);
  if ( v22 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v25 = (unsigned int *)(v21 - 2);
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = *(v21 - 2);
      *(v21 - 2) = v26 - 1;
    }
    if ( v26 <= 0 )
      operator delete(v22);
  }
  v4 = (int *)v16;
  result = (int *)(v16 - 24);
  *a1 = v16;
  if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
  {
LABEL_11:
    *((_QWORD *)v4 - 3) = v10;
    *(v4 - 2) = 0;
    *((_BYTE *)v4 + v10) = 0;
  }
  return result;
}

