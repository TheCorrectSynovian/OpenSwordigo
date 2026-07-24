/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a3d7c
 * Function: std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, _Val_comp_iter param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void 
   std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>
   >(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
   std::vector<boost::shared_ptr<Caver::PlayerProfile>,
   std::allocator<boost::shared_ptr<Caver::PlayerProfile> > > >,
   __gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&)>) */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *param_1;
                    /* try { // try from 004a3da8 to 005a3dbb has its CatchHandler @ 004a41fc */
  local_40 = (long *)param_1[1];
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  while( true ) {
                    /* try { // try from 004a3dcc to 005a3dd7 has its CatchHandler @ 004a41c4 */
    puVar5 = param_1 + -2;
    uVar3 = (*param_2)(&local_48,puVar5);
    if ((uVar3 & 1) == 0) break;
    uVar1 = *puVar5;
    lVar4 = param_1[-1];
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    }
    plVar6 = (long *)param_1[1];
    *param_1 = uVar1;
    param_1[1] = lVar4;
    param_1 = puVar5;
                    /* try { // try from 004a3e00 to 005a3e3b has its CatchHandler @ 004a4168 */
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  plVar6 = (long *)param_1[1];
  *param_1 = local_48;
  param_1[1] = local_40;
                    /* try { // try from 004a3e5c to 005a3e6f has its CatchHandler @ 004a4164 */
  if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* try { // try from 004a3e80 to 005a3e8b has its CatchHandler @ 004a412c */
    lVar4 = plVar6[2];
    plVar6[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = local_40;
                    /* try { // try from 004a3eac to 005a3ee7 has its CatchHandler @ 004a40d0 */
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = plVar6[2];
    plVar6[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
                    /* try { // try from 004a3ee8 to 005a42d3 has its CatchHandler @ 004a3cc0 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


