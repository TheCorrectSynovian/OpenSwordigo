/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ae1c4
 * Function: Caver::CharacterState::TrinketBonusForArmors
 * Signature: undefined __cdecl TrinketBonusForArmors(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&) */

void Caver::CharacterState::TrinketBonusForArmors(shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *in_x1;
  int *piVar6;
  int iVar7;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 004ae1d0 to 005ae1d3 has its CatchHandler @ 004ae478 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
    FUN_00666bb8();
  }
  else {
    FUN_0066a528(local_48,*in_x1 + 8);
    iVar5 = FUN_006689e0(local_48,"firetrinket");
    puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 004ae214 to 005ae21b has its CatchHandler @ 004ae464 */
                    /* try { // try from 004ae21c to 005ae493 has its CatchHandler @ 004ade28 */
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
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
    if (iVar5 == 0) {
      FUN_00666bb8();
    }
    else {
      FUN_0066a528(local_48,*in_x1 + 8);
      iVar5 = FUN_006689e0(local_48,0x68eb35);
      if ((undefined *)(local_48[0] + -0x18) != puVar4) {
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
          operator_delete((undefined *)(local_48[0] + -0x18));
        }
      }
      if (iVar5 == 0) {
        FUN_00666bb8();
      }
      else {
        FUN_0066a528(local_48,*in_x1 + 8);
        iVar5 = FUN_006689e0(local_48,"shadowtrinket");
        if ((undefined *)(local_48[0] + -0x18) != puVar4) {
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
            operator_delete((undefined *)(local_48[0] + -0x18));
          }
        }
        if (iVar5 == 0) {
          FUN_00666bb8();
        }
        else {
          FUN_00666bb8();
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


