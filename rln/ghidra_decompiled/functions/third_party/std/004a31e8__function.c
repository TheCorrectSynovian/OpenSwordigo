/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a31e8
 * Function: std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, __normal_iterator param_2, _Iter_comp_iter param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>
   >(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>) */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 004a31e8 to 005a31eb has its CatchHandler @ 004a31fc */
                    /* try { // try from 004a31ec to 005a3237 has its CatchHandler @ 004a3150 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a31e8 with catch @ 004a31fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a31b4 with catch @ 004a3204
                        */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (0x1f < param_2 - param_1) {
    lVar5 = param_2 - param_1 >> 4;
    lVar6 = lVar5 + -1;
    if (-1 < lVar5 + -2) {
      lVar6 = lVar5 + -2;
    }
                    /* try { // try from 004a3238 to 005a3243 has its CatchHandler @ 004a324c */
    lVar6 = lVar6 >> 1;
    plVar7 = (long *)(param_1 + lVar6 * 0x10 + 8);
    do {
                    /* try { // try from 004a3244 to 005a324f has its CatchHandler @ 004a3150 */
      local_68 = plVar7[-1];
      plVar1 = (long *)*plVar7;
      if (plVar1 == (long *)0x0) {
                    /* try { // try from 004a3260 to 005a3263 has its CatchHandler @ 004a3274 */
        local_60 = (long *)0x0;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a3238 with catch @ 004a324c
                        */
                    /* catch() { ... } // from try @ 004a3264 with catch @ 004a3250 */
        plVar1[1] = plVar1[1] + 2;
        local_60 = plVar1;
      }
                    /* try { // try from 004a3264 to 005a3287 has its CatchHandler @ 004a3250 */
                    /* catch() { ... } // from try @ 004a3260 with catch @ 004a3274 */
      __adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                (param_1,lVar6,lVar5,&local_68,param_3);
      plVar3 = local_60;
                    /* try { // try from 004a3288 to 005a32a3 has its CatchHandler @ 004a3288
                       catch() { ... } // from try @ 004a3288 with catch @ 004a3288
                       catch() { ... } // from try @ 004a32a8 with catch @ 004a3288 */
      if ((local_60 != (long *)0x0) &&
         (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 004a32a4 to 005a32a7 has its CatchHandler @ 004a330c */
        lVar4 = plVar3[2];
                    /* try { // try from 004a32a8 to 005a331f has its CatchHandler @ 004a3288 */
        plVar3[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar6 = lVar6 + -1;
      if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
                    /* catch() { ... } // from try @ 004a32a4 with catch @ 004a330c */
      plVar7 = plVar7 + -2;
    } while (lVar6 != -1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


