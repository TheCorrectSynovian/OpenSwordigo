/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ce724
 * Function: std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, __normal_iterator param_2, long param_3, _Iter_comp_iter param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,
   boost::intrusive_ptr<Caver::Texture> const&)>
   >(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >,
   __gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
   std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,
   boost::intrusive_ptr<Caver::Texture> const&)>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
                    /* try { // try from 005ce724 to 006ce77f has its CatchHandler @ 005ce554 */
  uVar3 = (long)param_2 - (long)param_1;
  if (0x80 < (long)uVar3) {
    puVar1 = param_1 + 1;
    do {
      if (param_3 == 0) {
                    /* try { // try from 005ce894 to 006ce8a7 has its CatchHandler @ 005cf6b8 */
        __make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                  (param_1,param_2,param_4);
        do {
          param_2 = param_2 + -1;
                    /* try { // try from 005ce8a8 to 006ce8b3 has its CatchHandler @ 005cf6b0 */
          __pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                    (param_1,param_2,param_2,param_4);
                    /* try { // try from 005ce8b4 to 006ce8c7 has its CatchHandler @ 005cf658 */
        } while (8 < (long)param_2 - (long)param_1);
        return;
      }
      puVar2 = (undefined8 *)((long)param_1 + (uVar3 >> 1 & 0x7ffffffffffffff8));
      param_3 = param_3 + -1;
      puVar5 = param_2 + -1;
      uVar3 = (*param_4)(puVar1,puVar2);
                    /* try { // try from 005ce780 to 006ce7b3 has its CatchHandler @ 005cf7d4 */
      puVar6 = puVar1;
      puVar7 = param_2;
      if ((uVar3 & 1) == 0) {
        uVar3 = (*param_4)(puVar1,puVar5);
                    /* try { // try from 005ce7b4 to 006ce7c7 has its CatchHandler @ 005cf538 */
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 005ce7ec to 006ce7ff has its CatchHandler @ 005cf44c */
          uVar3 = (*param_4)(puVar2,puVar5);
          uVar4 = *param_1;
          if ((uVar3 & 1) != 0) goto LAB_005ce7f8;
          *param_1 = *puVar2;
          *puVar2 = uVar4;
        }
        else {
          uVar4 = *param_1;
          *param_1 = param_1[1];
          param_1[1] = uVar4;
        }
      }
      else {
        uVar3 = (*param_4)(puVar2,puVar5);
        if ((uVar3 & 1) == 0) {
                    /* try { // try from 005ce7c8 to 006ce7d3 has its CatchHandler @ 005cf4e0 */
          uVar3 = (*param_4)(puVar1,puVar5);
          uVar4 = *param_1;
                    /* try { // try from 005ce7d4 to 006ce7e7 has its CatchHandler @ 005cf484 */
          if ((uVar3 & 1) == 0) {
            *param_1 = param_1[1];
            param_1[1] = uVar4;
          }
          else {
LAB_005ce7f8:
            *param_1 = *puVar5;
                    /* try { // try from 005ce800 to 006ce85f has its CatchHandler @ 005ce554 */
            *puVar5 = uVar4;
          }
        }
        else {
          uVar4 = *param_1;
          *param_1 = *puVar2;
          *puVar2 = uVar4;
        }
      }
      while( true ) {
        while (uVar3 = (*param_4)(puVar6,param_1), (uVar3 & 1) != 0) {
          puVar6 = puVar6 + 1;
        }
        do {
          puVar7 = puVar7 + -1;
          uVar3 = (*param_4)(param_1,puVar7);
        } while ((uVar3 & 1) != 0);
        if (puVar7 <= puVar6) break;
        uVar4 = *puVar6;
        *puVar6 = *puVar7;
        *puVar7 = uVar4;
        puVar6 = puVar6 + 1;
                    /* try { // try from 005ce860 to 006ce893 has its CatchHandler @ 005cf98c */
      }
      __introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                (puVar6,param_2,param_3,param_4);
      uVar3 = (long)puVar6 - (long)param_1;
      param_2 = puVar6;
    } while (0x80 < (long)uVar3);
  }
  return;
}


