/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003426e4
 * Function: Caver::Component::GetEnumValuesForBindedOutlet
 * Signature: undefined __thiscall GetEnumValuesForBindedOutlet(Component * this, long param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::GetEnumValuesForBindedOutlet(long, std::vector<Caver::BindingValue,
   std::allocator<Caver::BindingValue> >*) const */

void __thiscall
Caver::Component::GetEnumValuesForBindedOutlet(Component *this,long param_1,vector *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  intrusive_ptr *piVar8;
  int extraout_w1;
  long lVar9;
  Component *pCVar10;
  undefined4 local_98 [2];
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_70 = (undefined8 *)0x0;
  SceneObject::GetComponentsWithInterface
            (*(SceneObject **)(this + 0x28),param_1,(vector *)&local_70);
  piVar8 = (intrusive_ptr *)BindingValue::ValueWithInt((BindingValue *)0x0,extraout_w1);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
    piVar8 = (intrusive_ptr *)
             std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                       ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,
                        puVar1,local_98);
    plVar4 = local_78;
  }
  else {
    *puVar1 = local_98[0];
    *(undefined8 *)(puVar1 + 2) = local_90;
    *(long **)(puVar1 + 4) = local_88;
    if (local_88 != (long *)0x0) {
      local_88[1] = local_88[1] + 1;
    }
    *(undefined8 *)(puVar1 + 6) = local_80;
    *(long **)(puVar1 + 8) = local_78;
    if (local_78 != (long *)0x0) {
      local_78[1] = local_78[1] + 1;
    }
    *(undefined4 **)(param_2 + 8) = puVar1 + 10;
    plVar4 = local_78;
  }
  local_78 = plVar4;
  if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x10))(plVar4);
    lVar9 = plVar4[2];
    plVar4[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = local_88;
  puVar5 = local_70;
  puVar6 = local_68;
  if ((local_88 != (long *)0x0) && (lVar9 = local_88[1], local_88[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    piVar8 = (intrusive_ptr *)(**(code **)(*local_88 + 0x10))(local_88);
    lVar9 = plVar4[2];
    plVar4[2] = lVar9 + -1;
    puVar5 = local_70;
    puVar6 = local_68;
    if (lVar9 + -1 == 0) {
      piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x18))(plVar4);
      puVar5 = local_70;
      puVar6 = local_68;
    }
  }
  for (; puVar7 = local_68, puVar5 != local_68; puVar5 = puVar5 + 1) {
    pCVar10 = (Component *)*puVar5;
    local_68 = puVar6;
    if (pCVar10 != this) {
      if (pCVar10 != (Component *)0x0) {
        *(int *)(pCVar10 + 8) = *(int *)(pCVar10 + 8) + 1;
      }
      piVar8 = (intrusive_ptr *)ValueForBindedOutlet(piVar8);
      puVar1 = *(undefined4 **)(param_2 + 8);
      if (puVar1 == *(undefined4 **)(param_2 + 0x10)) {
        piVar8 = (intrusive_ptr *)
                 std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                           ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
                            param_2,puVar1,local_98);
        plVar4 = local_78;
      }
      else {
        *puVar1 = local_98[0];
        *(undefined8 *)(puVar1 + 2) = local_90;
        *(long **)(puVar1 + 4) = local_88;
        if (local_88 != (long *)0x0) {
          local_88[1] = local_88[1] + 1;
        }
        *(undefined8 *)(puVar1 + 6) = local_80;
        *(long **)(puVar1 + 8) = local_78;
        if (local_78 != (long *)0x0) {
          local_78[1] = local_78[1] + 1;
        }
        *(undefined4 **)(param_2 + 8) = puVar1 + 10;
        plVar4 = local_78;
      }
      local_78 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x10))(plVar4);
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      plVar4 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar9 = local_88[1], local_88[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        piVar8 = (intrusive_ptr *)(**(code **)(*local_88 + 0x10))(local_88);
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          piVar8 = (intrusive_ptr *)(**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      if ((pCVar10 != (Component *)0x0) &&
         (iVar2 = *(int *)(pCVar10 + 8), *(int *)(pCVar10 + 8) = iVar2 + -1, iVar2 + -1 == 0)) {
        piVar8 = (intrusive_ptr *)(**(code **)(*(long *)pCVar10 + 8))(pCVar10);
      }
    }
    puVar6 = local_68;
    local_68 = puVar7;
  }
  local_68 = puVar6;
  if (local_70 != (undefined8 *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


