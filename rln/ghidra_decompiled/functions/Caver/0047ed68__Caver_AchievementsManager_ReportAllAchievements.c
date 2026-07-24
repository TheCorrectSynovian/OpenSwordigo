/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047ed68
 * Function: Caver::AchievementsManager::ReportAllAchievements
 * Signature: undefined __thiscall ReportAllAchievements(AchievementsManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ReportAllAchievements() */

void __thiscall Caver::AchievementsManager::ReportAllAchievements(AchievementsManager *this)

{
  string *psVar1;
  string *psVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 0047e744 with catch @ 0047ed7c */
                    /* catch() { ... } // from try @ 0047e6e8 with catch @ 0047ed80 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  plVar8 = (long *)ProfileManager::sharedManager();
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
  puVar6 = puStack_68;
  puVar11 = local_70;
  if (local_70 != puStack_68) {
    puVar10 = local_70;
    do {
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
      puVar4 = puStack_68;
                    /* catch() { ... } // from try @ 0047e6bc with catch @ 0047eddc */
      for (; puStack_68 = puVar4, psVar1 != psVar2; psVar1 = psVar1 + 8) {
        iVar7 = PlayerProfile::ValueForCounter((PlayerProfile *)*puVar10,psVar1);
        if (0 < iVar7) {
          SetCounterValue(this,psVar1,iVar7,iVar7);
        }
                    /* catch() { ... } // from try @ 0047e698 with catch @ 0047ee14 */
                    /* catch() { ... } // from try @ 0047e63c with catch @ 0047ee18 */
        puVar4 = puStack_68;
      }
      puVar10 = puVar10 + 2;
      puVar5 = local_70;
      puVar11 = puVar4;
    } while (puVar10 != puVar6);
    for (; puVar5 != puVar4; puVar5 = puVar5 + 2) {
      plVar8 = (long *)puVar5[1];
      if ((plVar8 != (long *)0x0) && (lVar9 = plVar8[1], plVar8[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar9 = plVar8[2];
        plVar8[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 0047e610 with catch @ 0047ee74 */
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      puVar11 = local_70;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete(puVar11);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 0047e5ec with catch @ 0047eeac */
                    /* catch() { ... } // from try @ 0047e590 with catch @ 0047eeb0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


