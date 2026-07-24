/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bdf04
 * Function: std::map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>::operator[]
 * Signature: undefined __thiscall operator[](map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x005be134) */
/* WARNING: Removing unreachable block (ram,0x005be138) */
/* WARNING: Removing unreachable block (ram,0x005be144) */
/* WARNING: Removing unreachable block (ram,0x005be158) */
/* WARNING: Removing unreachable block (ram,0x005be078) */
/* WARNING: Removing unreachable block (ram,0x005be010) */
/* WARNING: Removing unreachable block (ram,0x005be028) */
/* WARNING: Removing unreachable block (ram,0x005be030) */
/* WARNING: Removing unreachable block (ram,0x005be164) */
/* WARNING: Removing unreachable block (ram,0x005be174) */
/* std::map<std::string, Caver::TargetAction<void (std::string const&, bool, std::string const&)>,
   std::less<std::string >, std::allocator<std::pair<std::string const, Caver::TargetAction<void
   (std::string const&, bool, std::string const&)> > > >::operator[](std::string const&) */

map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
* __thiscall
std::
map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
::operator[](map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
             *this,string *param_1)

{
  map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *pmVar1;
  map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *pmVar2;
  long lVar3;
  long lVar4;
  map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *pmVar5;
  int iVar6;
  uint uVar7;
  map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *pmVar8;
  ulong uVar9;
  size_t sVar10;
  map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *pmVar11;
  void *__s2;
  ulong uVar12;
  undefined1 auVar13 [16];
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pmVar1 = this + 8;
  pmVar8 = pmVar1;
  if (*(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
        **)(this + 0x10) !=
      (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar12 = *(ulong *)((long)__s2 + -0x18);
    pmVar11 = pmVar1;
    pmVar5 = *(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        pmVar8 = pmVar5;
        uVar9 = *(ulong *)((long)*(void **)(pmVar8 + 0x20) + -0x18);
        lVar3 = uVar9 - uVar12;
        sVar10 = uVar12;
        if (uVar9 < uVar12 || lVar3 == 0) {
          sVar10 = uVar9;
        }
        iVar6 = memcmp(*(void **)(pmVar8 + 0x20),__s2,sVar10);
        if (iVar6 != 0) break;
        if (lVar3 < 0x80000000) {
          iVar6 = (int)lVar3;
          if (lVar3 < -0x7fffffff) {
            iVar6 = -0x80000000;
          }
          break;
        }
LAB_005bdfa0:
        pmVar11 = pmVar8;
        pmVar5 = *(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                   **)(pmVar8 + 0x10);
        if (*(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
              **)(pmVar8 + 0x10) ==
            (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
             *)0x0) goto LAB_005bdfbc;
      }
      if (-1 < iVar6) goto LAB_005bdfa0;
      pmVar2 = pmVar8 + 0x18;
      pmVar8 = pmVar11;
      pmVar5 = *(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                 **)pmVar2;
    } while (*(map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
               **)pmVar2 !=
             (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
              *)0x0);
  }
LAB_005bdfbc:
  if (pmVar8 != pmVar1) {
    uVar12 = *(ulong *)((long)*(void **)param_1 + -0x18);
    sVar10 = *(ulong *)((long)*(void **)(pmVar8 + 0x20) + -0x18);
    lVar3 = uVar12 - sVar10;
    if (uVar12 < sVar10 || lVar3 == 0) {
      sVar10 = uVar12;
    }
    iVar6 = memcmp(*(void **)param_1,*(void **)(pmVar8 + 0x20),sVar10);
    if (iVar6 == 0) {
      if (0x7fffffff < lVar3) goto LAB_005be180;
      iVar6 = (int)lVar3;
      if (lVar3 < -0x7fffffff) {
        iVar6 = -0x80000000;
      }
    }
    if (-1 < iVar6) goto LAB_005be180;
  }
  FUN_0066a528(&local_a8,param_1);
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  auVar13 = _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                        *)this,pmVar8,&local_a8);
  pmVar11 = auVar13._8_8_;
  pmVar8 = auVar13._0_8_;
  if (pmVar11 !=
      (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
       *)0x0) {
    uVar12 = 1;
    if ((pmVar8 == (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                    *)0x0) && (pmVar1 != pmVar11)) {
      uVar12 = *(ulong *)((long)local_a8 + -0x18);
      sVar10 = *(ulong *)((long)*(void **)(pmVar11 + 0x20) + -0x18);
      lVar3 = uVar12 - sVar10;
      if (uVar12 < sVar10 || lVar3 == 0) {
        sVar10 = uVar12;
      }
      uVar7 = memcmp(local_a8,*(void **)(pmVar11 + 0x20),sVar10);
      uVar12 = (ulong)uVar7;
      if ((uVar7 == 0) && (uVar12 = 0, lVar3 < 0x80000000)) {
        uVar7 = (uint)lVar3;
        if (lVar3 < -0x7fffffff) {
          uVar7 = 0x80000000;
        }
        uVar12 = (ulong)uVar7;
      }
      uVar12 = uVar12 >> 0x1f;
    }
    pmVar8 = (map<std::string,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
              *)_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                ::_M_create_node((_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                                  *)this,(pair *)&local_a8);
    FUN_0064c8a0(uVar12,pmVar8,pmVar11,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::
  ~pair((pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>
         *)&local_a8);
LAB_005be180:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return pmVar8 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


