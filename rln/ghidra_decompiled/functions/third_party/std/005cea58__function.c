/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cea58
 * Function: std::__pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, __normal_iterator param_2, __normal_iterator param_3, _Iter_comp_iter param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>
   >(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >,
   __gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >,
   __gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>)
    */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005cea78 to 006ceaab has its CatchHandler @ 005cf778 */
  plVar4 = (long *)*param_3;
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
                    /* try { // try from 005ceab0 to 006ceac3 has its CatchHandler @ 005cf388 */
  *param_3 = lVar3;
  if (plVar4 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    iVar2 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar2;
                    /* try { // try from 005ceac4 to 006ceb27 has its CatchHandler @ 005ce554 */
    if (iVar2 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      iVar2 = (int)plVar4[1];
    }
    *(int *)(plVar4 + 1) = iVar2 + 1;
    local_50 = plVar4;
  }
  __adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
            (param_1,0,param_2 - (long)param_1 >> 3,&local_50,param_4);
  if ((local_50 != (long *)0x0) &&
     (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
                    /* try { // try from 005ceb28 to 006ceb3b has its CatchHandler @ 005cf2d0 */
    (**(code **)(*local_50 + 8))();
  }
                    /* try { // try from 005ceb40 to 006ceb53 has its CatchHandler @ 005cf298 */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


