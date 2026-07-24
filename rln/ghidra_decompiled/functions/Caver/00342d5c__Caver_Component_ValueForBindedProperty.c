/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342d5c
 * Function: Caver::Component::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::ValueForBindedProperty(int) */

void Caver::Component::ValueForBindedProperty(int param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  intrusive_ptr *piVar7;
  int in_w1;
  undefined4 *in_x8;
  long lVar8;
  long lVar9;
  
  uVar6 = (ulong)(uint)param_1;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  lVar1 = uVar6 + 0x48;
  lVar9 = *(long *)(uVar6 + 0x50);
  lVar2 = lVar1;
  while (lVar9 != 0) {
    plVar5 = (long *)(lVar9 + 0x18);
    if (in_w1 <= *(int *)(lVar9 + 0x20)) {
      lVar2 = lVar9;
      plVar5 = (long *)(lVar9 + 0x10);
    }
    lVar9 = *plVar5;
  }
  if (lVar2 != lVar1) {
    lVar9 = lVar1;
    if (*(int *)(lVar2 + 0x20) <= in_w1) {
      lVar9 = lVar2;
    }
    if (lVar9 != lVar1) {
      piVar7 = (intrusive_ptr *)
               (**(code **)(**(long **)(lVar9 + 0x38) + 0x18))(*(long **)(lVar9 + 0x38),uVar6);
      if (piVar7 != (intrusive_ptr *)0x0) {
        *(int *)(piVar7 + 8) = *(int *)(piVar7 + 8) + 1;
      }
      ValueForBindedOutlet(piVar7);
      if ((piVar7 != (intrusive_ptr *)0x0) &&
         (iVar3 = *(int *)(piVar7 + 8), *(int *)(piVar7 + 8) = iVar3 + -1, iVar3 + -1 == 0)) {
        (**(code **)(*(long *)piVar7 + 8))(piVar7);
      }
      goto LAB_00342e3c;
    }
  }
  *in_x8 = 0;
  *(undefined8 *)(in_x8 + 6) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 2) = 0;
  *(undefined8 *)(in_x8 + 4) = 0;
LAB_00342e3c:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


