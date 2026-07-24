/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9dbc
 * Function: Caver::GUITextFieldImpl::TextInputTextDidChange
 * Signature: undefined __cdecl TextInputTextDidChange(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&) */

void Caver::GUITextFieldImpl::TextInputTextDidChange(string *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  size_t __n;
  long *in_x8;
  void *__s1;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  float local_60;
  void *local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_58,param_1 + 0x188);
  FUN_0066a528();
  __s1 = (void *)*in_x8;
  if (*(long *)((long)__s1 + -0x18) == 0) {
    __n = 0;
  }
  else {
    uVar7 = 0;
    iVar5 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x148) + 0xf0);
      if (-1 < *(int *)((long)__s1 + -8)) {
        FUN_00668ea8();
        __s1 = (void *)*in_x8;
      }
      lVar1 = *(long *)(lVar8 + 0x28);
      if (((ulong)(*(long *)(lVar8 + 0x30) - lVar1 >> 2) <=
           (ulong)(long)*(char *)((long)__s1 + uVar7)) ||
         (*(int *)(lVar1 + (long)*(char *)((long)__s1 + uVar7) * 4) < 0)) {
        if (*(ulong *)((long)__s1 + -0x18) < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase",uVar7);
        }
        FUN_00668cb8();
        __s1 = (void *)*in_x8;
        iVar5 = iVar5 + -1;
      }
      __n = *(ulong *)((long)__s1 + -0x18);
      iVar5 = iVar5 + 1;
      uVar7 = (ulong)iVar5;
    } while (uVar7 < __n);
  }
  if ((__n != *(size_t *)((long)local_58[0] + -0x18)) ||
     (iVar5 = memcmp(__s1,local_58[0],__n), iVar5 != 0)) {
    (**(code **)(*(long *)param_1 + 0x160))(param_1);
    GUILabel::TextSize();
    if (local_60 <= *(float *)(*(long *)(param_1 + 0x148) + 0x8c)) {
      GUIControl::SendActionsForControlEvent((GUIControl *)param_1,0x1000,0);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x160))(param_1,local_58);
    }
  }
  if ((undefined *)((long)local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)((long)local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)((long)local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


