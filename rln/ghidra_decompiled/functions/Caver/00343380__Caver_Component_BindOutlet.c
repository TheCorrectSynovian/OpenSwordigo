/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343380
 * Function: Caver::Component::BindOutlet
 * Signature: undefined __thiscall BindOutlet(Component * this, int param_1, string * param_2, ComponentOutletBase * param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::BindOutlet(int, std::string const&, Caver::ComponentOutletBase*, bool) */

void __thiscall
Caver::Component::BindOutlet
          (Component *this,int param_1,string *param_2,ComponentOutletBase *param_3,bool param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int local_84 [3];
  int local_78;
  undefined *local_70;
  ComponentOutletBase *local_68;
  undefined1 local_60;
  long local_58;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70 = PTR_DAT_007e5de8 + 0x18;
  local_84[0] = param_1;
  local_78 = param_1;
  FUN_0066a6a8(&local_70,param_2);
  local_68 = param_3;
  local_60 = param_4;
  piVar5 = (int *)std::
                  map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                  ::operator[]((map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                                *)(this + 0x40),local_84);
  *piVar5 = local_78;
  FUN_0066a6a8(piVar5 + 2,&local_70);
  *(undefined1 *)(piVar5 + 6) = local_60;
  *(ComponentOutletBase **)(piVar5 + 4) = local_68;
  if (local_70 + -0x18 != puVar4) {
    piVar5 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


