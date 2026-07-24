/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00560b48
 * Function: Caver::ObjectTemplate::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ObjectTemplate * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ObjectTemplate::SetValueForBindedProperty
          (ObjectTemplate *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Program *pPVar4;
  long *plVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long local_58;
  Program *local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0x66) {
    pPVar4 = operator_new(0x28);
    BindingValue::ProgramValue();
    local_50 = pPVar4;
    boost::detail::shared_count::shared_count<Caver::Program>
              ((shared_count *)((ulong)&local_50 | 8),pPVar4);
    boost::detail::sp_enable_shared_from_this(&local_50,pPVar4,pPVar4);
    if (*(long *)(local_50 + 8) == 0) {
      FUN_00666bb8(&local_58,&DAT_0068fbeb,auStack_40);
    }
    else {
      FUN_0066a528(&local_58);
    }
    plVar5 = (long *)(local_58 + -0x18);
    lVar8 = *plVar5;
    plVar9 = local_48;
    if (plVar5 != (long *)PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_58 + -8);
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
                    /* try { // try from 00560d14 to 00660e43 has its CatchHandler @ 00560928 */
                    /* catch() { ... } // from try @ 00560c9c with catch @ 00560d18 */
      if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 00560aa0 with catch @ 00560d1c */
        operator_delete(plVar5);
        plVar9 = local_48;
      }
    }
    local_48 = plVar9;
    if (lVar8 == 0) {
      local_50 = (Program *)0x0;
      local_48 = (long *)0x0;
      if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar8 = plVar9[2];
        plVar9[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
                    /* catch() { ... } // from try @ 005609a0 with catch @ 00560d74 */
        }
      }
    }
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    plVar9 = *(long **)(this + 0x60);
    *(Program **)(this + 0x58) = local_50;
    *(long **)(this + 0x60) = local_48;
    if ((plVar9 != (long *)0x0) && (lVar8 = plVar9[1], plVar9[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar8 = plVar9[2];
      plVar9[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
                    /* catch() { ... } // from try @ 00560a34 with catch @ 00560c78 */
    plVar9 = local_48;
    if ((local_48 != (long *)0x0) &&
       (lVar8 = local_48[1], local_48[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 00560c9c to 00660d13 has its CatchHandler @ 00560d18 */
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar8 = plVar9[2];
      plVar9[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  else if (param_1 == 0x65) {
    *(undefined4 *)(this + 0x130) = **(undefined4 **)(param_2 + 8);
  }
                    /* catch() { ... } // from try @ 00560a00 with catch @ 00560cc8
                       catch() { ... } // from try @ 00560a78 with catch @ 00560cc8 */
                    /* catch() { ... } // from try @ 005609d8 with catch @ 00560ccc */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


