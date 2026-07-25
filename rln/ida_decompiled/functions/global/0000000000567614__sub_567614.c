/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567614
 * Mangled: sub_567614
 * Demangled: sub_567614
 *
 * Callers: 25
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B3C18  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D7100  google::protobuf::internal::LogMessage::operator<<(std::string const&)
 *   0x00000000004DE67C  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E07F0  google::protobuf::MessageLite::InitializationErrorString(void)
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005676D4  sub_5676D4
 *   0x000000000056A798  sub_56A798
 *
 * Callees: 2
 *   0x0000000000201760  .memcpy
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 19
 *   insn=0x0000000000567620 string=0x0000000000567624 "!"
 *   insn=0x000000000056762C string=0x0000000000567630 "4"
 *   insn=0x0000000000567638 string=0x000000000056763C "b"
 *   insn=0x000000000056763C string=0x0000000000567640 "`"
 *   insn=0x0000000000567640 string=0x0000000000567644 "V"
 *   insn=0x000000000056764C string=0x00000000005676A8 "`"
 *   insn=0x0000000000567658 string=0x000000000056765C "c"
 *   insn=0x0000000000567660 string=0x0000000000567664 "b"
 *   insn=0x0000000000567668 string=0x000000000056766C "`"
 *   insn=0x000000000056766C string=0x0000000000567670 "@"
 *   insn=0x0000000000567670 string=0x00000000005676B8 " "
 *   insn=0x0000000000567674 string=0x0000000000567678 ":h"
 *   insn=0x0000000000567678 string=0x000000000056767C "a"
 *   insn=0x0000000000567680 string=0x0000000000567688 ""`"
 *   insn=0x0000000000567688 string=0x000000000056768C "_"
 *   insn=0x0000000000567690 string=0x00000000005676C4 "?"
 *   insn=0x00000000005676B8 string=0x00000000005676BC "`h"8"
 *   insn=0x00000000005676C4 string=0x00000000005676C8 "6"
 *   insn=0x00000000005676C8 string=0x00000000005676CC "?h68"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int **__fastcall sub_567614(int **a1, _BYTE **a2)
{
  _BYTE *v3; // x1
  size_t v5; // x20
  int *v6; // x3
  __int64 v7; // x2
  size_t v8; // x22
  int *v9; // x1

  v3 = *a2;
  v5 = *((_QWORD *)v3 - 3);
  if ( v5 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)*a1 - 3);
    v8 = v7 + v5;
    if ( v7 + v5 > *((_QWORD *)*a1 - 2) || *(v6 - 2) > 0 )
    {
      sub_567088((_BYTE **)a1, v7 + v5);
      v6 = *a1;
      v3 = *a2;
      v7 = *((_QWORD *)*a1 - 3);
    }
    if ( v5 == 1 )
      *((_BYTE *)v6 + v7) = *v3;
    else
      memcpy((char *)v6 + v7, v3, v5);
    v9 = *a1;
    if ( *a1 - 6 != (int *)&qword_6FD2E0 )
    {
      *(v9 - 2) = 0;
      *((_QWORD *)v9 - 3) = v8;
      *((_BYTE *)v9 + v8) = 0;
    }
  }
  return a1;
}

