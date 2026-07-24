/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad4dc
 * Function: Caver::CharacterState::AddSkill
 * Signature: undefined __thiscall AddSkill(CharacterState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::CharacterState::AddSkill(CharacterState *this,shared_ptr *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  size_t *psVar14;
  void *local_80;
  void *apvStack_78 [2];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_0066a528(&local_80,*(undefined8 *)param_1);
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_pthread_create_007e4e78;
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  do {
    if (puVar1 == puVar2) {
      bVar9 = false;
LAB_004ad5e4:
      if ((undefined *)((long)local_80 + -0x18) != PTR_DAT_007e5de8) {
        piVar12 = (int *)((long)local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar12;
          *piVar12 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined *)((long)local_80 + -0x18));
        }
      }
      if (bVar9) {
        uVar11 = 0;
      }
      else {
        puVar1 = *(undefined8 **)(this + 0x48);
        if (puVar1 == *(undefined8 **)(this + 0x50)) {
          std::
          vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::
          _M_insert_aux((vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
                         *)(this + 0x40),puVar1,param_1);
        }
        else {
          *puVar1 = *(undefined8 *)param_1;
          lVar13 = *(long *)(param_1 + 8);
          puVar1[1] = lVar13;
          if (lVar13 != 0) {
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
          }
          *(undefined8 **)(this + 0x48) = puVar1 + 2;
        }
        uVar11 = 1;
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar11);
      }
      return;
    }
    FUN_0066a528(apvStack_78,*puVar1);
    pvVar8 = apvStack_78[0];
                    /* catch() { ... } // from try @ 004ad35c with catch @ 004ad54c */
    psVar14 = (size_t *)((long)apvStack_78[0] + -0x18);
    if (*psVar14 == *(size_t *)((long)local_80 + -0x18)) {
      iVar10 = memcmp(apvStack_78[0],local_80,*psVar14);
      bVar9 = iVar10 == 0;
      if (psVar14 != (size_t *)puVar7) goto LAB_004ad598;
LAB_004ad584:
      if (bVar9) {
LAB_004ad5d8:
        bVar9 = true;
        goto LAB_004ad5e4;
      }
    }
    else {
      bVar9 = false;
      if (psVar14 == (size_t *)puVar7) goto LAB_004ad584;
LAB_004ad598:
      piVar12 = (int *)((long)pvVar8 + -8);
      if (puVar6 == (undefined *)0x0) {
        iVar10 = *piVar12;
        *piVar12 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar10) goto LAB_004ad584;
                    /* try { // try from 004ad5c8 to 005ad5d3 has its CatchHandler @ 004ad2b8 */
                    /* catch() { ... } // from try @ 004ad590 with catch @ 004ad5d0 */
      operator_delete(psVar14);
      if (bVar9) goto LAB_004ad5d8;
    }
    puVar1 = puVar1 + 2;
                    /* try { // try from 004ad590 to 005ad5c7 has its CatchHandler @ 004ad5d0 */
  } while( true );
}


