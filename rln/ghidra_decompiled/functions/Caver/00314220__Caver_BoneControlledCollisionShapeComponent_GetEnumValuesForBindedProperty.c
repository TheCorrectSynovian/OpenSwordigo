/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00314220
 * Function: Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(BoneControlledCollisionShapeComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty
          (BoneControlledCollisionShapeComponent *this,int param_1,vector *param_2)

{
  long lVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  string *extraout_x1_11;
  string *psVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined4 local_70 [2];
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0x12d) {
    CollisionShapeComponent::GetEnumValuesForBindedProperty
              ((CollisionShapeComponent *)this,param_1,param_2);
    goto LAB_003142a8;
  }
  plVar5 = *(long **)(this + 0x1e0);
  psVar2 = (string *)0x12d;
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
    plVar5 = *(long **)(this + 0x1e0);
    psVar2 = extraout_x1;
    if (plVar5 == (long *)0x0) goto LAB_003142a8;
  }
  if (plVar5[0x11] == 0) {
    (**(code **)(*plVar5 + 0x40))(plVar5);
    if (plVar5[0x11] == 0) goto LAB_003142a8;
    plVar5 = *(long **)(this + 0x1e0);
    psVar2 = extraout_x1_00;
    if (plVar5 != (long *)0x0) goto LAB_00314278;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
    plVar5 = *(long **)(this + 0x1e0);
    lVar3 = plVar5[0x11];
    psVar2 = extraout_x1_01;
    if (lVar3 == 0) goto LAB_00314308;
LAB_00314280:
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  else {
LAB_00314278:
    lVar3 = plVar5[0x11];
    if (lVar3 != 0) goto LAB_00314280;
LAB_00314308:
    (**(code **)(*plVar5 + 0x40))(plVar5);
    lVar3 = *(long *)(plVar5[0x11] + 0x18);
    psVar2 = extraout_x1_02;
  }
  if (lVar3 != 0) {
    plVar5 = *(long **)(this + 0x1e0);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
      plVar5 = *(long **)(this + 0x1e0);
      lVar3 = plVar5[0x11];
      psVar2 = extraout_x1_03;
    }
    else {
      lVar3 = plVar5[0x11];
    }
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x40))(plVar5);
      plVar5 = *(long **)(this + 0x1e0);
      psVar2 = extraout_x1_04;
      if (plVar5 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
        plVar5 = *(long **)(this + 0x1e0);
        psVar2 = extraout_x1_05;
      }
    }
    lVar3 = plVar5[0x11];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x40))(plVar5);
      lVar3 = plVar5[0x11];
      psVar2 = extraout_x1_06;
    }
    piVar6 = (int *)**(undefined8 **)(lVar3 + 0x18);
    if (0 < *piVar6) {
      lVar7 = 0;
      lVar3 = 0;
      do {
        BindingValue::ValueWithString((BindingValue *)(*(long *)(piVar6 + 2) + lVar7),psVar2);
        psVar2 = *(string **)(param_2 + 8);
        if (psVar2 == *(string **)(param_2 + 0x10)) {
          std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux
                    ((vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)param_2,
                     psVar2,local_70);
          psVar2 = extraout_x1_07;
          plVar5 = local_50;
        }
        else {
          *(undefined4 *)psVar2 = local_70[0];
          *(undefined8 *)(psVar2 + 8) = local_68;
          *(long **)(psVar2 + 0x10) = local_60;
          if (local_60 != (long *)0x0) {
            local_60[1] = local_60[1] + 1;
          }
          *(undefined8 *)(psVar2 + 0x18) = local_58;
          *(long **)(psVar2 + 0x20) = local_50;
          if (local_50 != (long *)0x0) {
            local_50[1] = local_50[1] + 1;
          }
          *(string **)(param_2 + 8) = psVar2 + 0x28;
          plVar5 = local_50;
        }
        local_50 = plVar5;
        if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar4 = plVar5[2];
          plVar5[2] = lVar4 + -1;
          psVar2 = extraout_x1_08;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
            psVar2 = extraout_x1_09;
          }
        }
        plVar5 = local_60;
        if ((local_60 != (long *)0x0) &&
           (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
          (**(code **)(*local_60 + 0x10))(local_60);
          lVar4 = plVar5[2];
          plVar5[2] = lVar4 + -1;
          psVar2 = extraout_x1_10;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
            psVar2 = extraout_x1_11;
          }
        }
        lVar3 = lVar3 + 1;
        lVar7 = lVar7 + 0x90;
      } while (lVar3 < *piVar6);
    }
  }
LAB_003142a8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


