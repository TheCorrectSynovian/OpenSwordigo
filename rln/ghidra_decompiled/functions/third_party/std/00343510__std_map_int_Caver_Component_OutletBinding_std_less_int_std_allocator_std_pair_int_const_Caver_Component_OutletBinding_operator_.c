/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343510
 * Function: std::map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>::operator[]
 * Signature: undefined __thiscall operator[](map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>> * this, int * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<int, Caver::Component::OutletBinding, std::less<int>, std::allocator<std::pair<int
   const, Caver::Component::OutletBinding> > >::operator[](int const&) */

map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
* __thiscall
std::
map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
::operator[](map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
             *this,int *param_1)

{
  map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *pmVar1;
  char cVar2;
  long lVar3;
  map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *pmVar4;
  undefined *puVar5;
  map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *pmVar6;
  int iVar7;
  map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *pmVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80 [2];
  undefined4 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  puVar5 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pmVar1 = this + 8;
  pmVar8 = *(map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
             **)(this + 0x10);
  pmVar6 = pmVar1;
  if (pmVar8 == (map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 *)0x0) {
LAB_00343598:
    iVar7 = *param_1;
  }
  else {
    do {
      pmVar4 = pmVar8 + 0x18;
      if (*param_1 <= *(int *)(pmVar8 + 0x20)) {
        pmVar6 = pmVar8;
        pmVar4 = pmVar8 + 0x10;
      }
      pmVar8 = *(map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 **)pmVar4;
    } while (pmVar8 != (map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                        *)0x0);
    if (pmVar6 == pmVar1) goto LAB_00343598;
    iVar7 = *param_1;
    if (*(int *)(pmVar6 + 0x20) <= iVar7) goto LAB_0034366c;
  }
  local_90 = 0;
  local_88 = 0;
  local_98 = PTR_DAT_007e5de8 + 0x18;
  local_78 = 0;
  local_80[0] = iVar7;
  FUN_0066a528(&local_70,&local_98);
  local_60 = (undefined1)local_88;
  local_68 = local_90;
  auVar11 = _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                        *)this,pmVar6,local_80);
  pmVar8 = auVar11._8_8_;
  pmVar6 = auVar11._0_8_;
  if (pmVar8 != (map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 *)0x0) {
    bVar10 = true;
    if ((pmVar6 == (map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                    *)0x0) && (pmVar1 != pmVar8)) {
      bVar10 = local_80[0] < *(int *)(pmVar8 + 0x20);
    }
    pmVar6 = (map<int,Caver::Component::OutletBinding,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                ::_M_create_node((_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                                  *)this,(pair *)local_80);
    FUN_0064c8a0(bVar10,pmVar6,pmVar8,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  if ((undefined *)(local_70 + -0x18) != puVar5) {
    piVar9 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar10) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if (local_98 + -0x18 != puVar5) {
    piVar9 = (int *)(local_98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar10) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
LAB_0034366c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return pmVar6 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


