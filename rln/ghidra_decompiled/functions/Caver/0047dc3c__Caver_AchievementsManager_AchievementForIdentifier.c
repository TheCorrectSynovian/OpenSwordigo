/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047dc3c
 * Function: Caver::AchievementsManager::AchievementForIdentifier
 * Signature: undefined __cdecl AchievementForIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::AchievementForIdentifier(std::string const&) */

void Caver::AchievementsManager::AchievementForIdentifier(string *param_1)

{
  undefined8 *puVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0047dbc0 with catch @ 0047dc44 */
  puVar1 = (undefined8 *)
           std::
           map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
           ::operator[]((map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                         *)(param_1 + 0x18),in_x1);
  *in_x8 = *puVar1;
  lVar2 = puVar1[1];
  in_x8[1] = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  return;
}


