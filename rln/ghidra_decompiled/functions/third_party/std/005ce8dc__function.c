/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ce8dc
 * Function: std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, __normal_iterator param_2, _Iter_comp_iter param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>
   >(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >,
   __gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, __gnu_cxx::__ops::_Iter_comp_iter<bool
   (*)(boost::intrusive_ptr<Caver::Texture> const&, boost::intrusive_ptr<Caver::Texture> const&)>)
    */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *local_50;
  long local_48;
  
                    /* try { // try from 005ce8dc to 006ce90f has its CatchHandler @ 005cf830 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005ce910 to 006ce91b has its CatchHandler @ 005cf604 */
  if (0xf < param_2 - param_1) {
    lVar4 = param_2 - param_1 >> 3;
                    /* try { // try from 005ce91c to 006ce927 has its CatchHandler @ 005cf5a8 */
    lVar5 = lVar4 + -1;
    if (-1 < lVar4 + -2) {
      lVar5 = lVar4 + -2;
    }
    lVar5 = lVar5 >> 1;
    do {
      while( true ) {
                    /* try { // try from 005ce92c to 006ce93f has its CatchHandler @ 005cf570 */
        plVar3 = *(long **)(param_1 + lVar5 * 8);
        if (plVar3 == (long *)0x0) {
          local_50 = (long *)0x0;
        }
        else {
                    /* try { // try from 005ce940 to 006ce9d3 has its CatchHandler @ 005ce554 */
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
          local_50 = plVar3;
        }
        __adjust_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,boost::intrusive_ptr<Caver::Texture>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                  (param_1,lVar5,lVar4,&local_50,param_3);
        if ((local_50 != (long *)0x0) &&
           (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*local_50 + 8))();
        }
        lVar5 = lVar5 + -1;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) break;
        if (lVar5 == -1) goto LAB_005ce9c4;
      }
      (**(code **)(*plVar3 + 8))(plVar3);
    } while (lVar5 != -1);
  }
LAB_005ce9c4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005ce9ec to 006ce9ff has its CatchHandler @ 005cf2d4 */
    __stack_chk_fail();
  }
                    /* try { // try from 005ce9d4 to 006ce9e7 has its CatchHandler @ 005cf314 */
  return;
}


