/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ad728
 * Function: Caver::CharacterState::TrinketDamageMultiplier
 * Signature: undefined __thiscall TrinketDamageMultiplier(CharacterState * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::CharacterState::TrinketDamageMultiplier(CharacterState *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar4 = ItemCount(this,param_1);
  FUN_0066a528(local_48,*(long *)param_1 + 8);
  iVar5 = FUN_006689e0(local_48,"firetrinket");
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
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
                    /* try { // try from 004ad7d8 to 005ad85b has its CatchHandler @ 004ad7d8
                       catch() { ... } // from try @ 004ad7d8 with catch @ 004ad7d8
                       catch() { ... } // from try @ 004ad860 with catch @ 004ad7d8
                       catch() { ... } // from try @ 004ad894 with catch @ 004ad7d8 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (iVar5 == 0) {
    fVar8 = (float)iVar4 * DAT_00683484 + 1.0;
  }
  else {
    fVar8 = 1.0;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8);
}


