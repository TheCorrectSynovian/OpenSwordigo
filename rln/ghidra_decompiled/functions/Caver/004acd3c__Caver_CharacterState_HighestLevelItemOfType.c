/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004acd3c
 * Function: Caver::CharacterState::HighestLevelItemOfType
 * Signature: undefined __cdecl HighestLevelItemOfType(ItemType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType) */

void Caver::CharacterState::HighestLevelItemOfType(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *(long *)(param_2 + 0x28);
  if (param_2 + 0x18 != lVar5) {
    plVar6 = (long *)0x0;
    iVar8 = -1;
    do {
      piVar3 = *(int **)(lVar5 + 0x28);
      if (*piVar3 == param_3) {
        plVar7 = *(long **)(lVar5 + 0x30);
        if (plVar7 != (long *)0x0) {
          plVar7[1] = plVar7[1] + 1;
        }
        iVar1 = piVar3[0xb];
        plVar2 = plVar6;
        if (iVar8 < iVar1) {
          if (plVar7 != (long *)0x0) {
            plVar7[1] = plVar7[1] + 1;
          }
          *param_1 = piVar3;
          param_1[1] = plVar7;
          plVar2 = plVar7;
          iVar8 = iVar1;
          if ((plVar6 != (long *)0x0) &&
             (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            lVar4 = plVar6[2];
            plVar6[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar6 + 0x18))(plVar6);
            }
          }
        }
        plVar6 = plVar2;
        if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar4 = plVar7[2];
          plVar7[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
      }
      lVar5 = FUN_0064c6a0(lVar5);
    } while (param_2 + 0x18 != lVar5);
  }
  return;
}


