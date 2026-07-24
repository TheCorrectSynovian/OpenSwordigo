/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cebe8
 * Function: std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, long param_2, long param_3, intrusive_ptr param_4, _Iter_comp_iter param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, long,
   boost::intrusive_ptr<Caver::Texture>, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>
   >(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, long, long,
   boost::intrusive_ptr<Caver::Texture>, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>)
    */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (long param_1,ulong param_2,ulong param_3,long *param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  uVar9 = param_3 - 1;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar10 = param_3;
                    /* try { // try from 005cec20 to 006cec53 has its CatchHandler @ 005cf318 */
  if (-1 < (long)uVar9) {
    uVar10 = uVar9;
  }
  uVar8 = param_2;
  while ((long)uVar8 < (long)uVar10 >> 1) {
    uVar1 = uVar8 * 2 + 2;
                    /* try { // try from 005cec58 to 006cec6b has its CatchHandler @ 005cf194 */
    uVar2 = uVar8 << 1 | 1;
    uVar5 = (*param_5)(param_1 + uVar1 * 8,param_1 + uVar2 * 8);
                    /* try { // try from 005cec6c to 006cf163 has its CatchHandler @ 005ce554 */
    if ((uVar5 & 1) == 0) {
      uVar2 = uVar1;
    }
    lVar7 = *(long *)(param_1 + uVar2 * 8);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    plVar6 = *(long **)(param_1 + uVar8 * 8);
    *(long *)(param_1 + uVar8 * 8) = lVar7;
    uVar8 = uVar2;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if ((param_3 & 1) == 0) {
    if (-1 < (long)(param_3 - 2)) {
      uVar9 = param_3 - 2;
    }
    if (uVar8 == (long)uVar9 >> 1) {
      uVar10 = uVar8 << 1 | 1;
      lVar7 = *(long *)(param_1 + uVar10 * 8);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      }
      plVar6 = *(long **)(param_1 + uVar8 * 8);
      *(long *)(param_1 + uVar8 * 8) = lVar7;
      uVar8 = uVar10;
      if ((plVar6 != (long *)0x0) &&
         (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  local_70 = (long *)*param_4;
  if (local_70 != (long *)0x0) {
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
  }
  while ((long)param_2 < (long)uVar8) {
    uVar10 = uVar8;
    if (-1 < (long)(uVar8 - 1)) {
      uVar10 = uVar8 - 1;
    }
    uVar10 = (long)uVar10 >> 1;
    plVar6 = (long *)(param_1 + uVar10 * 8);
    uVar9 = (*param_5)(plVar6,&local_70);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    plVar6 = *(long **)(param_1 + uVar8 * 8);
    *(long *)(param_1 + uVar8 * 8) = lVar7;
    uVar8 = uVar10;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (local_70 != (long *)0x0) {
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
  }
  plVar6 = *(long **)(param_1 + uVar8 * 8);
  *(long **)(param_1 + uVar8 * 8) = local_70;
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((local_70 != (long *)0x0) &&
     (iVar3 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


