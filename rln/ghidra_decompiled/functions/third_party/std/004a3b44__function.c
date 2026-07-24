/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a3b44
 * Function: std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
 * Signature: void __insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>(__normal_iterator param_1, __normal_iterator param_2, _Iter_comp_iter param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,
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
     __insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
               (undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
    plVar10 = param_1 + 3;
    puVar2 = param_1 + 2;
    puVar7 = param_1;
    do {
      puVar4 = puVar2;
      uVar3 = (*param_3)(puVar4,param_1);
      if ((uVar3 & 1) == 0) {
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile>*,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::shared_ptr<Caver::PlayerProfile>const&,boost::shared_ptr<Caver::PlayerProfile>const&)>>
                  (puVar4,param_3);
      }
      else {
        plVar6 = (long *)puVar7[3];
        uVar11 = *puVar4;
        if (plVar6 != (long *)0x0) {
          plVar6[1] = plVar6[1] + 1;
        }
        if (0 < (long)puVar4 - (long)param_1) {
          lVar12 = ((ulong)((long)puVar4 - (long)param_1) >> 4) + 1;
          plVar9 = plVar10;
          do {
            lVar5 = plVar9[-3];
            lVar1 = plVar9[-2];
            if (lVar1 != 0) {
              *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
            }
            plVar8 = (long *)*plVar9;
            plVar9[-1] = lVar5;
            *plVar9 = lVar1;
                    /* try { // try from 004a3bfc to 005a3c67 has its CatchHandler @ 004a3bfc
                       catch() { ... } // from try @ 004a3bfc with catch @ 004a3bfc
                       catch() { ... } // from try @ 004a3c6c with catch @ 004a3bfc */
            if ((plVar8 != (long *)0x0) &&
               (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              lVar5 = plVar8[2];
              plVar8[2] = lVar5 + -1;
              if (lVar5 + -1 == 0) {
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
            lVar12 = lVar12 + -1;
            plVar9 = plVar9 + -2;
          } while (1 < lVar12);
        }
        if (plVar6 != (long *)0x0) {
          plVar6[1] = plVar6[1] + 1;
        }
        plVar9 = (long *)param_1[1];
        *param_1 = uVar11;
        param_1[1] = plVar6;
                    /* try { // try from 004a3c68 to 005a3c6b has its CatchHandler @ 004a3cac */
        if ((plVar9 != (long *)0x0) &&
           (lVar12 = plVar9[1], plVar9[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 004a3c6c to 005a3cbf has its CatchHandler @ 004a3bfc */
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar12 = plVar9[2];
          plVar9[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
        }
                    /* catch() { ... } // from try @ 004a3c68 with catch @ 004a3cac */
        if ((plVar6 != (long *)0x0) &&
           (lVar12 = plVar6[1], plVar6[1] = lVar12 + -1, lVar12 + -1 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* try { // try from 004a3cc0 to 005a3cef has its CatchHandler @ 004a3cc0
                       catch() { ... } // from try @ 004a3cc0 with catch @ 004a3cc0
                       catch() { ... } // from try @ 004a3ee8 with catch @ 004a3cc0 */
          lVar12 = plVar6[2];
          plVar6[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
      }
                    /* try { // try from 004a3cf0 to 005a3d03 has its CatchHandler @ 004a42d0 */
      plVar10 = plVar10 + 2;
      puVar2 = puVar4 + 2;
      puVar7 = puVar4;
    } while (puVar4 + 2 != param_2);
  }
                    /* try { // try from 004a3d10 to 005a3d1b has its CatchHandler @ 004a4264 */
  return;
}


