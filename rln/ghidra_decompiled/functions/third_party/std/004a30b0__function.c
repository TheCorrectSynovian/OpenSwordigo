/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a30b0
 * Function: std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, __normal_iterator param_2, long param_3, _Iter_comp_iter param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>
   >(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (long param_1,undefined8 *param_2,long param_3,code *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = (long)param_2 - param_1;
  if ((long)uVar1 < 0x101) {
    return;
  }
LAB_004a30e8:
  if (param_3 == 0) {
    __make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
              (param_1,param_2,param_4);
    do {
      param_2 = param_2 + -2;
                    /* try { // try from 004a31b4 to 005a31b7 has its CatchHandler @ 004a3204 */
      __pop_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                (param_1,param_2,param_2,param_4);
    } while (0x10 < (long)param_2 - param_1);
    return;
  }
  __move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
            (param_1,(undefined8 *)(param_1 + 0x10),param_1 + (uVar1 >> 1 & 0x7ffffffffffffff0),
             param_2 + -2,param_4);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  puVar4 = param_2;
  do {
    uVar1 = (*param_4)(puVar3,param_1);
    if ((uVar1 & 1) == 0) {
      do {
        puVar5 = puVar4;
        puVar4 = puVar5 + -2;
        uVar1 = (*param_4)(param_1,puVar4);
      } while ((uVar1 & 1) != 0);
      if (puVar4 <= puVar3) break;
      uVar2 = *puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a31ec with catch @ 004a3150
                       catch(type#1 @ 00000000) { ... } // from try @ 004a3244 with catch @ 004a3150
                        */
      *puVar3 = *puVar4;
      *puVar4 = uVar2;
      uVar2 = puVar5[-1];
      puVar5[-1] = puVar3[1];
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  } while( true );
  param_3 = param_3 + -1;
  __introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
            (puVar3,param_2,param_3,param_4);
  uVar1 = (long)puVar3 - param_1;
  param_2 = puVar3;
  if ((long)uVar1 < 0x101) {
    return;
  }
  goto LAB_004a30e8;
}


