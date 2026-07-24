/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b0c20
 * Function: Caver::GameData::SkillForName
 * Signature: undefined __cdecl SkillForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::SkillForName(std::string const&) */

void Caver::GameData::SkillForName(string *param_1)

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
  undefined8 *in_x1;
  undefined8 *in_x8;
  int *piVar11;
  long lVar12;
  size_t *psVar13;
  void *local_78 [2];
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_pthread_create_007e4e78;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  do {
    if (puVar1 == puVar2) {
      *in_x8 = 0;
      in_x8[1] = 0;
LAB_004b0d3c:
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    FUN_0066a528(local_78,*puVar1);
    pvVar8 = local_78[0];
    psVar13 = (size_t *)((long)local_78[0] + -0x18);
    if (*psVar13 == *(size_t *)((long)*in_x1 + -0x18)) {
      iVar10 = memcmp(local_78[0],(void *)*in_x1,*psVar13);
      bVar9 = iVar10 == 0;
      if (psVar13 != (size_t *)puVar7) goto LAB_004b0cd4;
LAB_004b0cc0:
      if (bVar9) {
LAB_004b0d14:
        *in_x8 = *puVar1;
        lVar12 = puVar1[1];
        in_x8[1] = lVar12;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
        }
        goto LAB_004b0d3c;
      }
    }
    else {
      bVar9 = false;
      if (psVar13 == (size_t *)puVar7) goto LAB_004b0cc0;
LAB_004b0cd4:
      piVar11 = (int *)((long)pvVar8 + -8);
      if (puVar6 == (undefined *)0x0) {
        iVar10 = *piVar11;
        *piVar11 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar10) goto LAB_004b0cc0;
      operator_delete(psVar13);
      if (bVar9) goto LAB_004b0d14;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}


