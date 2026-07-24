/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ac900
 * Function: Caver::CharacterState::AddItem
 * Signature: undefined __thiscall AddItem(CharacterState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::CharacterState::AddItem(CharacterState *this,shared_ptr *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  CharacterState *pCVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  long local_70;
  long *local_68;
  long local_58;
  
                    /* catch() { ... } // from try @ 004ac8cc with catch @ 004ac904 */
                    /* catch() { ... } // from try @ 004ac9f0 with catch @ 004ac914
                       catch() { ... } // from try @ 004acb24 with catch @ 004ac914 */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_0066a528(&local_70,*(long *)param_1 + 8);
  pCVar7 = (CharacterState *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   *)(this + 0x10),(string *)&local_70);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if (this + 0x18 == pCVar7) {
    if (**(int **)param_1 - 1U < 2) {
      HighestLevelItemOfType(&local_70,this);
      if (local_70 == 0) {
        if ((local_68 != (long *)0x0) &&
           (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*local_68 + 0x10))(local_68);
          lVar10 = local_68[2];
          local_68[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*local_68 + 0x18))(local_68);
          }
        }
      }
      else {
                    /* try { // try from 004ac9b0 to 005ac9b7 has its CatchHandler @ 004acaec */
        iVar12 = *(int *)(local_70 + 0x2c);
        iVar2 = *(int *)(*(long *)param_1 + 0x2c);
                    /* try { // try from 004ac9c4 to 005ac9d7 has its CatchHandler @ 004acad8 */
        if ((local_68 != (long *)0x0) &&
           (lVar10 = local_68[1], local_68[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 004ac9d8 to 005ac9ef has its CatchHandler @ 004aca70 */
          (**(code **)(*local_68 + 0x10))(local_68);
          lVar10 = local_68[2];
          local_68[2] = lVar10 + -1;
                    /* try { // try from 004ac9f0 to 005acadf has its CatchHandler @ 004ac914 */
          if (lVar10 + -1 == 0) {
            (**(code **)(*local_68 + 0x18))(local_68);
          }
        }
        if (iVar2 <= iVar12) goto LAB_004ac984;
      }
    }
    lVar10 = *(long *)param_1;
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 004ac9d8 with catch @ 004aca70 */
      plVar1[1] = plVar1[1] + 1;
    }
    FUN_0066a528(&local_70,lVar10 + 8);
    plVar9 = (long *)std::
                     map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                     ::operator[]((map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                                   *)(this + 0x10),(string *)&local_70);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    plVar13 = (long *)plVar9[1];
    *plVar9 = lVar10;
    plVar9[1] = (long)plVar1;
    if ((plVar13 != (long *)0x0) &&
       (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar10 = plVar13[2];
                    /* catch() { ... } // from try @ 004ac9c4 with catch @ 004acad8 */
      plVar13[2] = lVar10 + -1;
                    /* try { // try from 004acae0 to 005acb23 has its CatchHandler @ 004acb2c */
      if (lVar10 + -1 == 0) {
                    /* catch() { ... } // from try @ 004ac9b0 with catch @ 004acaec */
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    *(undefined4 *)(plVar9 + 2) = 1;
    if ((undefined *)(local_70 + -0x18) != puVar6) {
      piVar11 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    if ((plVar1 != (long *)0x0) && (lVar10 = plVar1[1], plVar1[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
                    /* try { // try from 004acb24 to 005acb2f has its CatchHandler @ 004ac914 */
                    /* catch() { ... } // from try @ 004acae0 with catch @ 004acb2c */
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar10 = plVar1[2];
      plVar1[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  else {
    if ((char)(*(int **)param_1)[10] != '\0') {
LAB_004ac984:
      uVar8 = 0;
      goto LAB_004acb54;
    }
    *(int *)(pCVar7 + 0x38) = *(int *)(pCVar7 + 0x38) + 1;
  }
  uVar8 = 1;
LAB_004acb54:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


