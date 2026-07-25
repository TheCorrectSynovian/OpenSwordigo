/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569E1C
 * Mangled: sub_569E1C
 * Demangled: sub_569E1C
 *
 * Callers: 45
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x00000000002763D8  Caver::ItemDropComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A5CFC  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000002A724C  Caver::ParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x0000000000389C70  Caver::BadgeCountView::SetCount(int)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *   0x00000000003CB89C  Caver::DebugInfoOverlay::SetNumVertices(int,int)
 *   0x00000000003CBF00  Caver::DebugInfoOverlay::SetNumTriangles(int)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000040DC14  Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004CF91C  Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A110  sub_56A110
 *   0x000000000056A15C  sub_56A15C
 *   0x000000000056A1A0  sub_56A1A0
 *   0x000000000056A1B0  sub_56A1B0
 *   0x000000000056A1C8  sub_56A1C8
 *   0x000000000056A218  sub_56A218
 *   0x000000000056A22C  sub_56A22C
 *   0x000000000056A240  sub_56A240
 *   0x000000000056A250  sub_56A250
 *   0x000000000056A264  sub_56A264
 *
 * Callees: 10
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201760  .memcpy
 *   0x0000000000565330  sub_565330
 *   0x000000000056554C  sub_56554C
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566530  sub_566530
 *   0x0000000000568C20  sub_568C20
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x0000000000569E38 string=0x0000000000569E3C "#"
 *   insn=0x0000000000569E50 string=0x0000000000569E54 "s"
 *   insn=0x0000000000569E5C string=0x0000000000569E60 " "
 *   insn=0x0000000000569E60 string=0x0000000000569E64 "s"
 *   insn=0x0000000000569E70 string=0x0000000000569E74 "H"
 *   insn=0x0000000000569E7C string=0x0000000000569E80 "#"
 *   insn=0x0000000000569E88 string=0x0000000000569EC0 " "
 *   insn=0x0000000000569E9C string=0x0000000000569EA0 "v"
 *   insn=0x0000000000569EC4 string=0x0000000000569EC8 ","
 *   insn=0x0000000000569ECC string=0x0000000000569ED0 """
 *   insn=0x0000000000569ED4 string=0x0000000000569ED8 "I"
 *   insn=0x0000000000569ED8 string=0x0000000000569EDC "b"
 *   insn=0x0000000000569EDC string=0x0000000000569EE0 """
 *   insn=0x0000000000569F04 string=0x0000000000569F08 "l"
 *   insn=0x0000000000569F10 string=0x0000000000569F14 "@"
 *   insn=0x0000000000569F14 string=0x0000000000569F18 "A"
 *   insn=0x0000000000569F18 string=0x0000000000569F1C "a"
 *   insn=0x0000000000569F1C string=0x0000000000569F20 "@ht8@h58"
 *   insn=0x0000000000569F20 string=0x0000000000569F24 "@h58"
 *   insn=0x0000000000569F44 string=0x0000000000569F48 " "
 *   insn=0x0000000000569F48 string=0x0000000000569F4C "@"
 *   insn=0x0000000000569F4C string=0x0000000000569F50 "4"
 *   insn=0x0000000000569F54 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000569F90 string=0x0000000000569F94 " "
 *   insn=0x0000000000569FB0 string=0x0000000000569FB4 "9"
 *   insn=0x0000000000569FC4 string=0x0000000000569FC8 "<"
 *   insn=0x0000000000569FC8 string=0x0000000000569FCC "V"
 *   insn=0x0000000000569FCC string=0x0000000000569FD0 "3c"
 *   insn=0x0000000000569FD8 string=0x0000000000569FDC "@"
 *   insn=0x0000000000569FE4 string=0x0000000000569FE8 " "
 *   insn=0x0000000000569FE8 string=0x0000000000569FEC "9#"
 *   insn=0x0000000000569FE8 string=0x000000000056A0AC " "
 *   insn=0x0000000000569FEC string=0x0000000000569FF0 " "
 *   insn=0x0000000000569FF4 string=0x0000000000569FF8 "!"
 *   insn=0x000000000056A00C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056A078 string=0x000000000056A07C " "
 *   insn=0x000000000056A080 string=0x000000000056A0A0 " "
 *   insn=0x000000000056A094 string=0x000000000056A098 " h58"
 *   insn=0x000000000056A0A0 string=0x000000000056A0A4 " h58"
 *   insn=0x000000000056A0B0 string=0x000000000056A0B4 "!"
 *   insn=0x000000000056A0BC string=0x000000000056A0C4 """
 *   insn=0x000000000056A0BC string=0x000000000059FAA8 "basic_string::replace"
 *   insn=0x000000000056A0C8 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056A0D0 string=0x000000000056A0D4 "!"
 *   insn=0x000000000056A0D8 string=0x000000000056A0DC "v"
 *   insn=0x000000000056A0E4 string=0x000000000056A0E8 "?"
 *   insn=0x000000000056A0EC string=0x000000000056A0F0 "`"
 *   insn=0x000000000056A100 string=0x000000000056A104 "c"
 *   insn=0x000000000056A104 string=0x000000000056A108 "d"
 *   insn=0x000000000056A108 string=0x000000000056A10C "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569E1C(__int64 *a1, size_t a2, unsigned __int64 a3, _BYTE *a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // x1
  size_t v8; // x3
  __int64 v11; // x19
  _BYTE *v13; // x0
  _BYTE *v14; // x20
  char *v15; // x25
  char *v16; // x19
  unsigned int *v17; // x25
  int v18; // w0
  __int64 v19; // x0
  __int64 v20; // x24

  v6 = *a1;
  v8 = *(_QWORD *)(*a1 - 24);
  if ( a2 > v8 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v8);
  v11 = v8 - a2;
  if ( v8 - a2 > a3 )
    v11 = a3;
  if ( a5 > 0x3FFFFFFFFFFFFFF9LL - v8 + v11 )
    sub_56554C("basic_string::replace");
  if ( (unsigned __int64)a4 < v6 || (unsigned __int64)a4 > v6 + v8 || *(int *)(v6 - 8) > 0 )
  {
    sub_568CB8(a1, a2, v11, a5);
    if ( a5 )
    {
      if ( a5 == 1 )
        *(_BYTE *)(*a1 + a2) = *a4;
      else
        memcpy((void *)(*a1 + a2), a4, a5);
    }
    return a1;
  }
  v13 = &a4[a5];
  if ( (unsigned __int64)&a4[a5] <= v6 + a2 )
  {
    v14 = &a4[-v6];
    goto LABEL_13;
  }
  if ( (unsigned __int64)a4 < v6 + v11 + a2 )
  {
    if ( a4 == v13 )
    {
      v15 = &byte_6FD2F8;
    }
    else
    {
      if ( v13 && !a4 )
        sub_565330("basic_string::_S_construct null not valid");
      v19 = sub_568C20(a5, 0);
      v20 = v19;
      v15 = (char *)(v19 + 24);
      if ( a5 == 1 )
        *(_BYTE *)(v19 + 24) = *a4;
      else
        memcpy((void *)(v19 + 24), a4, a5);
      if ( (__int64 *)v20 != &qword_6FD2E0 )
      {
        *(_DWORD *)(v20 + 16) = 0;
        *(_QWORD *)v20 = a5;
        *(_BYTE *)(v20 + a5 + 24) = 0;
      }
    }
    sub_568CB8(a1, a2, v11, a5);
    if ( a5 )
    {
      if ( a5 == 1 )
        *(_BYTE *)(*a1 + a2) = *v15;
      else
        memcpy((void *)(*a1 + a2), v15, a5);
    }
    v16 = v15 - 24;
    if ( v15 - 24 != (char *)&qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v17 = (unsigned int *)(v15 - 8);
        do
          v18 = __ldaxr(v17);
        while ( __stlxr(v18 - 1, v17) );
      }
      else
      {
        v18 = *((_DWORD *)v15 - 2);
        *((_DWORD *)v15 - 2) = v18 - 1;
      }
      if ( v18 <= 0 )
        operator delete(v16);
    }
    return a1;
  }
  v14 = &a4[a5 - v6 - v11];
LABEL_13:
  sub_568CB8(a1, a2, v11, a5);
  if ( a5 == 1 )
    *(_BYTE *)(*a1 + a2) = v14[*a1];
  else
    memcpy((void *)(*a1 + a2), &v14[*a1], a5);
  return a1;
}

