/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054f994
 * Function: std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
 * Signature: undefined __thiscall operator[](map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> * this, int * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::operator[](int
   const&) */

map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> * __thiscall
std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
          (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this,int *param_1)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *pmVar1;
  int iVar2;
  long lVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *pmVar4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *pmVar5;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *pmVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  int local_50;
  undefined4 uStack_4c;
  long local_48;
  
                    /* try { // try from 0054f9ac to 0064f9d3 has its CatchHandler @ 0054f9dc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pmVar1 = this + 8;
  pmVar6 = *(map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> **)(this + 0x10);
  pmVar5 = pmVar1;
  if (pmVar6 == (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)0x0) {
LAB_0054fa18:
    iVar2 = *param_1;
  }
  else {
    do {
                    /* try { // try from 0054f9d4 to 0064f9f3 has its CatchHandler @ 0054f784 */
                    /* catch() { ... } // from try @ 0054f9ac with catch @ 0054f9dc */
                    /* catch() { ... } // from try @ 0054f818 with catch @ 0054f9e0 */
      pmVar4 = pmVar6 + 0x18;
      if (*param_1 <= *(int *)(pmVar6 + 0x20)) {
        pmVar5 = pmVar6;
        pmVar4 = pmVar6 + 0x10;
      }
      pmVar6 = *(map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> **)pmVar4;
    } while (pmVar6 != (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)0x0);
    if (pmVar5 == pmVar1) goto LAB_0054fa18;
    iVar2 = *param_1;
    if (*(int *)(pmVar5 + 0x20) <= iVar2) goto LAB_0054fa90;
  }
  uStack_4c = 0;
  local_50 = iVar2;
  auVar8 = _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                       *)this,pmVar5,&local_50);
  pmVar6 = auVar8._8_8_;
  pmVar5 = auVar8._0_8_;
  if (pmVar6 != (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)0x0) {
    bVar7 = true;
    if ((pmVar5 == (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)0x0) &&
       (pmVar1 != pmVar6)) {
      bVar7 = local_50 < *(int *)(pmVar6 + 0x20);
    }
    pmVar5 = operator_new(0x28);
    *(ulong *)(pmVar5 + 0x20) = CONCAT44(uStack_4c,local_50);
    FUN_0064c8a0(bVar7,pmVar5,pmVar6,pmVar1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
LAB_0054fa90:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return pmVar5 + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


