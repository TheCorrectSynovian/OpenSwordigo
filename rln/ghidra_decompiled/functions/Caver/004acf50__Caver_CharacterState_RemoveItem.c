/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004acf50
 * Function: Caver::CharacterState::RemoveItem
 * Signature: undefined __thiscall RemoveItem(CharacterState * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::RemoveItem(Caver::Item*) */

void __thiscall Caver::CharacterState::RemoveItem(CharacterState *this,Item *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  CharacterState *pCVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_48,param_1 + 8);
  pCVar5 = (CharacterState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   *)(this + 0x10),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 004ad014 to 005ad017 has its CatchHandler @ 004ad064 */
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 004ad048 to 005ad04b has its CatchHandler @ 004ad05c */
    if (iVar8 < 1) {
                    /* try { // try from 004ad04c to 005ad097 has its CatchHandler @ 004acfdc */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if ((this + 0x18 != pCVar5) &&
     (iVar8 = *(int *)(pCVar5 + 0x38), iVar3 = iVar8 + -1, *(int *)(pCVar5 + 0x38) = iVar3,
     iVar3 == 0 || iVar8 < 1)) {
    pvVar6 = (void *)FUN_0064ca60(pCVar5);
    __gnu_cxx::new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>::destroy
              ((new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>> *)
               local_48,(pair *)((long)pvVar6 + 0x20));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ad04c with catch @ 004acfdc
                       catch(type#1 @ 00000000) { ... } // from try @ 004ad0a4 with catch @ 004acfdc
                        */
    operator_delete(pvVar6);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


