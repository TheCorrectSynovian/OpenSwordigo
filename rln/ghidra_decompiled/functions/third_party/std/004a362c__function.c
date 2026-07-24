/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a362c
 * Function: std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, long param_2, long param_3, shared_ptr param_4, _Iter_comp_iter param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long,
   boost::shared_ptr<Caver::PlayerProfile>, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::shared_ptr<Caver::PlayerProfile> const&, boost::shared_ptr<Caver::PlayerProfile>
   const&)> >(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long, long,
   boost::shared_ptr<Caver::PlayerProfile>, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::shared_ptr<Caver::PlayerProfile> const&, boost::shared_ptr<Caver::PlayerProfile>
   const&)>) */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (long param_1,ulong param_2,ulong param_3,undefined8 *param_4,code *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  uVar11 = param_3 - 1;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar4 = param_3;
  if (-1 < (long)uVar11) {
    uVar4 = uVar11;
  }
  uVar9 = param_2;
  while ((long)uVar9 < (long)uVar4 >> 1) {
    uVar1 = uVar9 * 2 + 2;
    uVar3 = uVar9 << 1 | 1;
                    /* try { // try from 004a36a4 to 005a3847 has its CatchHandler @ 004a36a4
                       catch(type#1 @ 00000000) { ... } // from try @ 004a36a4 with catch @ 004a36a4
                       catch(type#1 @ 00000000) { ... } // from try @ 004a3850 with catch @ 004a36a4
                       catch(type#1 @ 00000000) { ... } // from try @ 004a3924 with catch @ 004a36a4
                        */
    uVar7 = (*param_5)(param_1 + uVar1 * 0x10,param_1 + uVar3 * 0x10);
    if ((uVar7 & 1) == 0) {
      uVar3 = uVar1;
    }
    puVar2 = (undefined8 *)(param_1 + uVar3 * 0x10);
    uVar5 = *puVar2;
    lVar8 = puVar2[1];
    puVar2 = (undefined8 *)(param_1 + uVar9 * 0x10);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
    }
    plVar10 = (long *)puVar2[1];
    *puVar2 = uVar5;
    puVar2[1] = lVar8;
    uVar9 = uVar3;
    if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar8 = plVar10[2];
      plVar10[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  if ((param_3 & 1) == 0) {
    if (-1 < (long)(param_3 - 2)) {
      uVar11 = param_3 - 2;
    }
    if (uVar9 == (long)uVar11 >> 1) {
      uVar4 = uVar9 << 1 | 1;
      puVar2 = (undefined8 *)(param_1 + uVar4 * 0x10);
      uVar5 = *puVar2;
      lVar8 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + uVar9 * 0x10);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      }
      plVar10 = (long *)puVar2[1];
      *puVar2 = uVar5;
      puVar2[1] = lVar8;
      uVar9 = uVar4;
      if ((plVar10 != (long *)0x0) && (lVar8 = plVar10[1], plVar10[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar8 = plVar10[2];
        plVar10[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
    }
  }
  local_78 = *param_4;
  local_70 = (long *)param_4[1];
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  __push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
            (param_1,uVar9,param_2,&local_78,param_5);
  plVar10 = local_70;
  if ((local_70 != (long *)0x0) && (lVar8 = local_70[1], local_70[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar8 = plVar10[2];
    plVar10[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* try { // try from 004a3848 to 005a384f has its CatchHandler @ 004a38dc */
                    /* try { // try from 004a3850 to 005a38fb has its CatchHandler @ 004a36a4 */
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


