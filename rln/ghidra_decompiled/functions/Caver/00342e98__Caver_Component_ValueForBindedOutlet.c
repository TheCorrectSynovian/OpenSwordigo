/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342e98
 * Function: Caver::Component::ValueForBindedOutlet
 * Signature: undefined __cdecl ValueForBindedOutlet(intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&) const */

void Caver::Component::ValueForBindedOutlet(intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  string *psVar6;
  long *in_x1;
  undefined4 *in_x8;
  long lVar7;
  int *piVar8;
  int iVar9;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  long *local_68;
  string *local_60;
  long *plStack_58;
  string *local_50;
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*in_x1 == 0) {
    BindingValue::ValueWithInt((BindingValue *)0x0,(int)in_x1);
  }
  else {
    BindingValue::ValueWithInt((BindingValue *)(ulong)*(uint *)(*in_x1 + 0x20),(int)in_x1);
    if (*(long *)(*(long *)(*in_x1 + 0x38) + -0x18) != 0) {
      FUN_0066a528(&local_80,*in_x1 + 0x38);
      if (local_60 == (string *)0x0) {
        psVar6 = operator_new(8);
        *(undefined **)psVar6 = PTR_DAT_007e5de8 + 0x18;
        local_50 = psVar6;
        boost::detail::shared_count::shared_count<std::string>((shared_count *)local_48,psVar6);
        boost::detail::sp_enable_shared_from_this(&local_50,psVar6,psVar6);
        plVar5 = local_48[0];
        psVar6 = local_50;
        plVar4 = plStack_58;
        local_50 = local_60;
        local_48[0] = plStack_58;
        local_60 = psVar6;
        plStack_58 = plVar5;
        if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0))
        {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          lVar7 = plVar4[2];
          plVar4[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
      }
      FUN_0066a6a8(local_60,&local_80);
      if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
    }
    plVar4 = plStack_58;
    *in_x8 = local_78;
    *(undefined8 *)(in_x8 + 2) = local_70;
    *(long **)(in_x8 + 4) = local_68;
    if (local_68 != (long *)0x0) {
      local_68[1] = local_68[1] + 1;
    }
    *(string **)(in_x8 + 6) = local_60;
    *(long **)(in_x8 + 8) = plStack_58;
    if ((plStack_58 != (long *)0x0) && (plStack_58[1] == 0)) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      lVar7 = plVar4[2];
      plVar4[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((local_68 != (long *)0x0) &&
       (lVar7 = local_68[1], local_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar7 = local_68[2];
      local_68[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


