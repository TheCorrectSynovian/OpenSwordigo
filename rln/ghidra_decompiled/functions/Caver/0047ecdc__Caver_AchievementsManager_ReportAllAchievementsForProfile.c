/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047ecdc
 * Function: Caver::AchievementsManager::ReportAllAchievementsForProfile
 * Signature: undefined __thiscall ReportAllAchievementsForProfile(AchievementsManager * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ReportAllAchievementsForProfile(boost::shared_ptr<Caver::PlayerProfile>
   const&) */

void __thiscall
Caver::AchievementsManager::ReportAllAchievementsForProfile
          (AchievementsManager *this,shared_ptr *param_1)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 0047e794 with catch @ 0047ece8 */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
              *)(this + 0x148),*(_Rb_tree_node **)(this + 0x158));
  psVar1 = *(string **)(this + 0x48);
  psVar2 = *(string **)(this + 0x50);
  *(undefined8 *)(this + 0x158) = 0;
  *(AchievementsManager **)(this + 0x160) = this + 0x150;
  *(AchievementsManager **)(this + 0x168) = this + 0x150;
  *(undefined8 *)(this + 0x170) = 0;
  for (; psVar1 != psVar2; psVar1 = psVar1 + 8) {
    iVar3 = PlayerProfile::ValueForCounter(*(PlayerProfile **)param_1,psVar1);
    if (0 < iVar3) {
                    /* catch() { ... } // from try @ 0047e768 with catch @ 0047ed44 */
      SetCounterValue(this,psVar1,iVar3,iVar3);
    }
  }
  return;
}


