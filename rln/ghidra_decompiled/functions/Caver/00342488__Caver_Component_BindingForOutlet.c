/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342488
 * Function: Caver::Component::BindingForOutlet
 * Signature: undefined __cdecl BindingForOutlet(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::BindingForOutlet(int) const */

void Caver::Component::BindingForOutlet(int param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int in_w1;
  undefined4 *in_x8;
  int *piVar9;
  int iVar10;
  long lVar11;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  lVar1 = (ulong)(uint)param_1 + 0x48;
  lVar11 = *(long *)((ulong)(uint)param_1 + 0x50);
  lVar2 = lVar1;
  while (lVar11 != 0) {
    plVar6 = (long *)(lVar11 + 0x18);
    if (in_w1 <= *(int *)(lVar11 + 0x20)) {
      lVar2 = lVar11;
      plVar6 = (long *)(lVar11 + 0x10);
    }
    lVar11 = *plVar6;
  }
  if (lVar2 != lVar1) {
    lVar11 = lVar1;
    if (*(int *)(lVar2 + 0x20) <= in_w1) {
      lVar11 = lVar2;
    }
    if (lVar11 != lVar1) {
      *in_x8 = *(undefined4 *)(lVar11 + 0x28);
      FUN_0066a528(in_x8 + 2,lVar11 + 0x30);
      uVar7 = DAT_00683968;
      in_x8[6] = 1;
      *(undefined8 *)(in_x8 + 4) = uVar7;
      goto LAB_0034256c;
    }
  }
  FUN_00666bb8(local_38,&DAT_0068fbeb,auStack_40);
  *in_x8 = 0;
  FUN_0066a528(in_x8 + 2,local_38);
  puVar8 = PTR_DAT_007e5de8;
  *(undefined8 *)(in_x8 + 4) = DAT_00683968;
  in_x8[6] = 0;
  if ((undefined *)(local_38[0] + -0x18) != puVar8) {
    piVar9 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
LAB_0034256c:
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


