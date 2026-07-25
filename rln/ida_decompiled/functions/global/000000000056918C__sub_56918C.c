/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056918C
 * Mangled: sub_56918C
 * Demangled: sub_56918C
 *
 * Callers: 29
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003F4210  Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x0000000000472358  Caver::SceneObject::ValueForBindedProperty(int)
 *   0x0000000000497FA8  Caver::GUILabel::ClearText(void)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004BC740  Caver::ProfileStats::ProfileStats(Caver::PlayerProfile *)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x000000000053B81C  sub_53B81C
 *   0x0000000000545C54  sub_545C54
 *   0x0000000000545DD0  sub_545DD0
 *   0x000000000054690C  sub_54690C
 *   0x00000000005471E4  sub_5471E4
 *   0x0000000000547C2C  sub_547C2C
 *   0x0000000000565E84  sub_565E84
 *   0x00000000005692B4  sub_5692B4
 *   0x00000000005692D8  sub_5692D8
 *   0x0000000000569324  sub_569324
 *   0x0000000000569358  sub_569358
 *   0x000000000056938C  sub_56938C
 *
 * Callees: 4
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 13
 *   insn=0x00000000005691A4 string=0x00000000005691A8 "_"
 *   insn=0x00000000005691BC string=0x00000000005691C0 "H"
 *   insn=0x00000000005691C0 string=0x00000000005691C4 "?"
 *   insn=0x00000000005691CC string=0x00000000005691D0 "?"
 *   insn=0x00000000005691D4 string=0x0000000000569204 "e"
 *   insn=0x0000000000569208 string=0x000000000056920C "l"
 *   insn=0x0000000000569214 string=0x0000000000569218 "h"
 *   insn=0x0000000000569220 string=0x0000000000569224 "Oa"
 *   insn=0x0000000000569268 string=0x000000000056926C "@"
 *   insn=0x000000000056926C string=0x0000000000569270 "PJ"
 *   insn=0x0000000000569270 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000569290 string=0x0000000000569294 "3a"
 *   insn=0x00000000005692A8 string=0x000000000059FA60 "basic_string::assign"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56918C(__int64 *a1, _BYTE *a2, size_t a3)
{
  _BYTE *v5; // x0
  __int64 *v7; // x3
  __int64 v8; // x4
  _BYTE *v10; // x0

  v5 = (_BYTE *)*a1;
  v7 = (__int64 *)(v5 - 24);
  v8 = *((_QWORD *)v5 - 3);
  if ( a3 > 0x3FFFFFFFFFFFFFF9LL )
    sub_56554C("basic_string::assign");
  if ( a2 >= v5 && a2 <= &v5[v8] && *((int *)v5 - 2) <= 0 )
  {
    if ( a3 <= a2 - v5 )
    {
      if ( a3 != 1 )
      {
        memcpy(v5, a2, a3);
        v5 = (_BYTE *)*a1;
        v7 = (__int64 *)(*a1 - 24);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( a2 != v5 )
    {
      if ( a3 == 1 )
      {
LABEL_10:
        *v5 = *a2;
        v5 = (_BYTE *)*a1;
        v7 = (__int64 *)(*a1 - 24);
        goto LABEL_11;
      }
      memmove(v5, a2, a3);
      v5 = (_BYTE *)*a1;
      v7 = (__int64 *)(*a1 - 24);
    }
LABEL_11:
    if ( v7 != &qword_6FD2E0 )
    {
      *((_DWORD *)v5 - 2) = 0;
      *((_QWORD *)v5 - 3) = a3;
      v5[a3] = 0;
    }
    return a1;
  }
  sub_568CB8(a1, 0, v8, a3);
  if ( a3 )
  {
    v10 = (_BYTE *)*a1;
    if ( a3 == 1 )
      *v10 = *a2;
    else
      memcpy(v10, a2, a3);
  }
  return a1;
}

