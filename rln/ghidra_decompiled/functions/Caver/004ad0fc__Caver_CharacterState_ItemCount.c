/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad0fc
 * Function: Caver::CharacterState::ItemCount
 * Signature: undefined __thiscall ItemCount(CharacterState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::CharacterState::ItemCount(CharacterState *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  CharacterState *pCVar5;
  int *piVar6;
  int iVar7;
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 004ad11c to 005ad11f has its CatchHandler @ 004ad138 */
                    /* try { // try from 004ad120 to 005ad127 has its CatchHandler @ 004ad140 */
  if (*(long *)param_1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_0066a528(local_38,*(long *)param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ad11c with catch @ 004ad138
                        */
    pCVar5 = (CharacterState *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                     *)(this + 0x10),(string *)local_38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ad120 with catch @ 004ad140
                        */
    if (this + 0x18 == pCVar5) {
      uVar4 = 0;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ad0e8 with catch @ 004ad148
                        */
      uVar4 = *(undefined4 *)(pCVar5 + 0x38);
    }
    if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004ad17c with catch @ 004ad198
                        */
                    /* try { // try from 004ad19c to 005ad1b7 has its CatchHandler @ 004ad19c
                       catch() { ... } // from try @ 004ad19c with catch @ 004ad19c
                       catch() { ... } // from try @ 004ad1bc with catch @ 004ad19c */
      piVar6 = (int *)(local_38[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004ad1b8 to 005ad1bb has its CatchHandler @ 004ad1e8 */
        iVar7 = *piVar6;
                    /* try { // try from 004ad1bc to 005ad1fb has its CatchHandler @ 004ad19c */
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_38[0] + -0x18));
      }
    }
  }
                    /* try { // try from 004ad17c to 005ad187 has its CatchHandler @ 004ad198 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 004ad188 to 005ad19b has its CatchHandler @ 004ad0b0 */
  return;
}


