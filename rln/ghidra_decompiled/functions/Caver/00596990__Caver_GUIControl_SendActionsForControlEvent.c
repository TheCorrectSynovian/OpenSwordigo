/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596990
 * Function: Caver::GUIControl::SendActionsForControlEvent
 * Signature: undefined __thiscall SendActionsForControlEvent(GUIControl * this, Event param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event, unsigned int) */

void __thiscall
Caver::GUIControl::SendActionsForControlEvent(GUIControl *this,int param_2,undefined4 param_3)

{
  long lVar1;
  GUIControl *pGVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  GUIControl *pGVar6;
  long lVar7;
  GUIControl *pGVar8;
  GUIControl *pGVar9;
  GUIControl *pGVar10;
  undefined8 *local_68;
  long *local_60;
  bad_function_call abStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pGVar9 = *(GUIControl **)(this + 0x100);
  pGVar6 = this + 0xf8;
  while (pGVar10 = pGVar6, pGVar9 != (GUIControl *)0x0) {
LAB_005969c8:
    pGVar6 = pGVar9;
    if (param_2 <= *(int *)(pGVar6 + 0x20)) {
      pGVar9 = *(GUIControl **)(pGVar6 + 0x10);
      if (param_2 < *(int *)(pGVar6 + 0x20)) goto code_r0x005969ec;
      pGVar8 = *(GUIControl **)(pGVar6 + 0x18);
      while (pGVar9 != (GUIControl *)0x0) {
        pGVar2 = pGVar9 + 0x18;
        if (param_2 <= *(int *)(pGVar9 + 0x20)) {
          pGVar6 = pGVar9;
          pGVar2 = pGVar9 + 0x10;
        }
        pGVar9 = *(GUIControl **)pGVar2;
      }
      while (pGVar8 != (GUIControl *)0x0) {
                    /* catch() { ... } // from try @ 0059689c with catch @ 00596b34 */
                    /* catch() { ... } // from try @ 00596758 with catch @ 00596b38 */
        pGVar9 = pGVar8;
        pGVar2 = pGVar8 + 0x10;
        if (*(int *)(pGVar8 + 0x20) <= param_2) {
          pGVar9 = pGVar10;
          pGVar2 = pGVar8 + 0x18;
        }
        pGVar10 = pGVar9;
        pGVar8 = *(GUIControl **)pGVar2;
      }
      break;
    }
    pGVar9 = *(GUIControl **)(pGVar6 + 0x18);
    pGVar6 = pGVar10;
  }
LAB_005969fc:
  if (pGVar6 != pGVar10) {
    puVar5 = operator_new(0x10);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    local_60 = (long *)0x0;
    local_68 = puVar5;
    local_60 = operator_new(0x20);
    puVar3 = PTR_vtable_007e7e40;
                    /* catch() { ... } // from try @ 00596550 with catch @ 00596a2c */
                    /* catch() { ... } // from try @ 00596370 with catch @ 00596a30 */
                    /* catch() { ... } // from try @ 00596190 with catch @ 00596a34 */
    local_60[3] = (long)puVar5;
                    /* catch() { ... } // from try @ 00596784 with catch @ 00596a38 */
                    /* catch() { ... } // from try @ 00596454 with catch @ 00596a3c */
    local_60[2] = 1;
    local_60[1] = 1;
    *local_60 = (long)(puVar3 + 0x10);
    boost::detail::sp_enable_shared_from_this(&local_68,puVar5,puVar5);
    *(undefined4 *)(local_68 + 1) = param_3;
    do {
                    /* try { // try from 00596a60 to 00696e73 has its CatchHandler @ 00596ef4 */
      if (*(ulong *)(pGVar6 + 0x30) == 0) {
        boost::bad_function_call::bad_function_call(abStack_58);
        boost::throw_exception<boost::bad_function_call>(abStack_58);
        goto LAB_00596b64;
      }
      (**(code **)((*(ulong *)(pGVar6 + 0x30) & 0xfffffffffffffffe) + 8))
                (pGVar6 + 0x38,this,local_68);
      pGVar6 = (GUIControl *)FUN_0064c640(pGVar6);
      plVar4 = local_60;
                    /* catch() { ... } // from try @ 005963d4 with catch @ 00596a8c */
                    /* catch() { ... } // from try @ 00596274 with catch @ 00596a90 */
    } while (pGVar6 != pGVar10);
    if ((local_60 != (long *)0x0) &&
       (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar7 = plVar4[2];
      plVar4[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
                    /* catch() { ... } // from try @ 005961f4 with catch @ 00596ae0 */
                    /* catch() { ... } // from try @ 00596084 with catch @ 00596ae4 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00596b64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x005969ec:
  pGVar10 = pGVar6;
  if (pGVar9 == (GUIControl *)0x0) goto LAB_005969fc;
  goto LAB_005969c8;
}


