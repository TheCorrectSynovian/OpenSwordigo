/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cee94
 * Function: std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
 * Signature: void __insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>(__normal_iterator param_1, __normal_iterator param_2, _Iter_comp_iter param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,
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
     __insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
               (long *param_1,long *param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar2 = param_1;
  plVar3 = param_1;
  if (param_1 != param_2) {
    while (plVar3 = plVar3 + 1, plVar3 != param_2) {
      uVar4 = (*param_3)(plVar3,param_1);
      if ((uVar4 & 1) == 0) {
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool(*)(boost::intrusive_ptr<Caver::Texture>const&,boost::intrusive_ptr<Caver::Texture>const&)>>
                  (plVar3,param_3);
      }
      else {
        plVar7 = (long *)*plVar3;
        if (plVar7 != (long *)0x0) {
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        }
        if (0 < (long)plVar3 - (long)param_1) {
          lVar8 = 0;
          lVar9 = ((ulong)((long)plVar3 - (long)param_1) >> 3) + 1;
          do {
            lVar6 = *(long *)((long)plVar2 + lVar8);
            if (lVar6 != 0) {
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            }
            plVar5 = *(long **)((long)plVar3 + lVar8);
            *(long *)((long)plVar3 + lVar8) = lVar6;
            if ((plVar5 != (long *)0x0) &&
               (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
              (**(code **)(*plVar5 + 8))();
            }
            lVar9 = lVar9 + -1;
            lVar8 = lVar8 + -8;
          } while (1 < lVar9);
        }
        if (plVar7 != (long *)0x0) {
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        }
        plVar5 = (long *)*param_1;
        *param_1 = (long)plVar7;
        if ((plVar5 != (long *)0x0) &&
           (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar5 + 8))();
        }
        if ((plVar7 != (long *)0x0) &&
           (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
      plVar2 = plVar2 + 1;
    }
  }
  return;
}


