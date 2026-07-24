/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047e200
 * Function: Caver::AchievementsManager::ClearReportedAchievementsCache
 * Signature: undefined __thiscall ClearReportedAchievementsCache(AchievementsManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ClearReportedAchievementsCache() */

void __thiscall
Caver::AchievementsManager::ClearReportedAchievementsCache(AchievementsManager *this)

{
                    /* try { // try from 0047e21c to 0057e257 has its CatchHandler @ 0047f1a8 */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,double>,std::_Select1st<std::pair<std::string_const,double>>,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
              *)(this + 0x148),*(_Rb_tree_node **)(this + 0x158));
  *(undefined8 *)(this + 0x158) = 0;
  *(AchievementsManager **)(this + 0x160) = this + 0x150;
  *(AchievementsManager **)(this + 0x168) = this + 0x150;
  *(undefined8 *)(this + 0x170) = 0;
  return;
}


