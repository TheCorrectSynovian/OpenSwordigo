/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a38d4
 * Function: std::__push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, long param_2, long param_3, shared_ptr param_4, _Iter_comp_val param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long,
   boost::shared_ptr<Caver::PlayerProfile>, __gnu_cxx::__ops::_Iter_comp_val<bool
   (*)(boost::shared_ptr<Caver::PlayerProfile> const&, boost::shared_ptr<Caver::PlayerProfile>
   const&)> >(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >, long, long,
   boost::shared_ptr<Caver::PlayerProfile>, __gnu_cxx::__ops::_Iter_comp_val<bool
   (*)(boost::shared_ptr<Caver::PlayerProfile> const&, boost::shared_ptr<Caver::PlayerProfile>
   const&)>) */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,boost::shared_ptr<Caver::PlayerProfile>,__gnu_cxx::__ops::_Iter_comp_val<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (long param_1,long param_2,long param_3,undefined8 *param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  while (param_3 < param_2) {
    lVar6 = param_2;
    if (-1 < param_2 + -1) {
      lVar6 = param_2 + -1;
    }
    lVar6 = lVar6 >> 1;
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x10);
                    /* try { // try from 004a3924 to 005a392f has its CatchHandler @ 004a36a4 */
    uVar4 = (*param_5)(puVar1,param_4);
    if ((uVar4 & 1) == 0) break;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a38fc with catch @ 004a392c
                        */
    uVar2 = *puVar1;
    lVar3 = puVar1[1];
    puVar1 = (undefined8 *)(param_1 + param_2 * 0x10);
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 004a394c with catch @ 004a3938 */
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    plVar5 = (long *)puVar1[1];
                    /* try { // try from 004a3948 to 005a394b has its CatchHandler @ 004a395c */
    *puVar1 = uVar2;
    puVar1[1] = lVar3;
                    /* try { // try from 004a394c to 005a396f has its CatchHandler @ 004a3938 */
    param_2 = lVar6;
                    /* catch() { ... } // from try @ 004a3948 with catch @ 004a395c */
    if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 004a3970 to 005a398b has its CatchHandler @ 004a3970
                       catch() { ... } // from try @ 004a3970 with catch @ 004a3970
                       catch() { ... } // from try @ 004a3990 with catch @ 004a3970 */
      lVar6 = plVar5[2];
      plVar5[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* try { // try from 004a398c to 005a398f has its CatchHandler @ 004a39d4 */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  uVar2 = *param_4;
  lVar6 = param_4[1];
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x10);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar5 = (long *)puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = lVar6;
                    /* catch() { ... } // from try @ 004a398c with catch @ 004a39d4 */
  if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar6 = plVar5[2];
    plVar5[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
  return;
}


