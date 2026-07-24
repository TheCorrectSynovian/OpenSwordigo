/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad3ac
 * Function: Caver::CharacterState::HasSkillWithName
 * Signature: undefined __thiscall HasSkillWithName(CharacterState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::HasSkillWithName(std::string const&) */

void __thiscall Caver::CharacterState::HasSkillWithName(CharacterState *this,string *param_1)

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
  size_t *psVar13;
  void *local_78 [2];
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_pthread_create_007e4e78;
                    /* try { // try from 004ad3b4 to 005ad3cb has its CatchHandler @ 004ad490 */
                    /* try { // try from 004ad3cc to 005ad58f has its CatchHandler @ 004ad2b8 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  do {
    if (puVar1 == puVar2) {
      uVar11 = 0;
LAB_004ad4a8:
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 004ad3a0 with catch @ 004ad4c8 */
        return;
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004ad370 with catch @ 004ad4d8 */
      __stack_chk_fail(uVar11);
    }
    FUN_0066a528(local_78,*puVar1);
    pvVar8 = local_78[0];
    psVar13 = (size_t *)((long)local_78[0] + -0x18);
    if (*psVar13 == *(size_t *)((long)*(void **)param_1 + -0x18)) {
      iVar10 = memcmp(local_78[0],*(void **)param_1,*psVar13);
      bVar9 = iVar10 == 0;
      if (psVar13 != (size_t *)puVar7) goto LAB_004ad45c;
LAB_004ad448:
      if (bVar9) {
LAB_004ad49c:
        uVar11 = 1;
        goto LAB_004ad4a8;
      }
    }
    else {
      bVar9 = false;
      if (psVar13 == (size_t *)puVar7) goto LAB_004ad448;
LAB_004ad45c:
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
      if (0 < iVar10) goto LAB_004ad448;
                    /* catch() { ... } // from try @ 004ad3b4 with catch @ 004ad490 */
      operator_delete(psVar13);
      if (bVar9) goto LAB_004ad49c;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}


