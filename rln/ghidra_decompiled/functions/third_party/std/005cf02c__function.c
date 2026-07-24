/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf02c
 * Function: std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, _Val_comp_iter param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Val_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>
   >(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Val_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>)
    */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (long *param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = (long *)*param_1;
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
  while( true ) {
    plVar5 = param_1 + -1;
    uVar3 = (*param_2)(&local_40,plVar5);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    plVar4 = (long *)*param_1;
    *param_1 = lVar6;
    param_1 = plVar5;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
  plVar5 = (long *)*param_1;
  *param_1 = (long)local_40;
  if ((plVar5 != (long *)0x0) &&
     (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005ce6fc with catch @ 005cf140 */
  return;
}


