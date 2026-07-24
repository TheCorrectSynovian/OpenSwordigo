/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a3a34
 * Function: std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, __normal_iterator param_2, __normal_iterator param_3, __normal_iterator param_4, _Iter_comp_iter param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
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
   __gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>) */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (*param_5)(param_2,param_3);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 004a3a94 to 005a3aa7 has its CatchHandler @ 004a3acc */
    uVar1 = (*param_5)(param_2,param_4);
    if ((uVar1 & 1) != 0) {
      uVar2 = *param_1;
                    /* try { // try from 004a3aa8 to 005a3acf has its CatchHandler @ 004a3a78 */
      *param_1 = *param_2;
      *param_2 = uVar2;
      goto LAB_004a3ad4;
    }
    uVar1 = (*param_5)(param_3,param_4);
    uVar2 = *param_1;
    if ((uVar1 & 1) != 0) goto LAB_004a3af8;
    *param_1 = *param_3;
    *param_3 = uVar2;
  }
  else {
    uVar1 = (*param_5)(param_3,param_4);
                    /* catch() { ... } // from try @ 004a3aa8 with catch @ 004a3a78 */
    if ((uVar1 & 1) == 0) {
      uVar1 = (*param_5)(param_2,param_4);
      uVar2 = *param_1;
      if ((uVar1 & 1) != 0) {
LAB_004a3af8:
        *param_1 = *param_4;
        *param_4 = uVar2;
        uVar2 = param_4[1];
        param_4[1] = param_1[1];
        goto LAB_004a3b2c;
      }
                    /* catch() { ... } // from try @ 004a3a94 with catch @ 004a3acc */
      *param_1 = *param_2;
      *param_2 = uVar2;
LAB_004a3ad4:
      uVar2 = param_2[1];
      param_2[1] = param_1[1];
      goto LAB_004a3b2c;
    }
    uVar2 = *param_1;
    *param_1 = *param_3;
    *param_3 = uVar2;
  }
  uVar2 = param_3[1];
  param_3[1] = param_1[1];
LAB_004a3b2c:
  param_1[1] = uVar2;
  return;
}


