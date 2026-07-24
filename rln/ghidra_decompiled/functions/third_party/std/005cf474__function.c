/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf474
 * Function: std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
 * Signature: __normal_iterator __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>(__normal_iterator param_1, __normal_iterator param_2, _Iter_comp_iter param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >
   std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*, Caver::Texture const*)>
   >(__gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >, __gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*, Caver::Texture const*)>) */

undefined8 *
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
          (undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 005ce7d4 with catch @ 005cf484 */
  lVar2 = (long)param_2 - (long)param_1 >> 3;
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
  lVar2 = lVar2 >> 1;
  puVar4 = param_1 + 1;
  uVar1 = (*param_3)(*puVar4,param_1[lVar2]);
  if ((uVar1 & 1) == 0) {
    uVar1 = (*param_3)(*puVar4,param_2[-1]);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = param_1[1];
      param_1[1] = uVar3;
      uVar3 = *puVar4;
      goto LAB_005cf570;
    }
    uVar1 = (*param_3)(param_1[lVar2],param_2[-1]);
                    /* catch() { ... } // from try @ 005ce7b4 with catch @ 005cf538 */
    uVar3 = *param_1;
    if ((uVar1 & 1) == 0) {
      *param_1 = param_1[lVar2];
      param_1[lVar2] = uVar3;
      uVar3 = *puVar4;
      goto LAB_005cf570;
    }
  }
  else {
    uVar1 = (*param_3)(param_1[lVar2],param_2[-1]);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = param_1[lVar2];
      param_1[lVar2] = uVar3;
                    /* catch() { ... } // from try @ 005ce7c8 with catch @ 005cf4e0 */
      uVar3 = *puVar4;
      goto LAB_005cf570;
    }
    uVar1 = (*param_3)(param_1[1],param_2[-1]);
    uVar3 = *param_1;
    if ((uVar1 & 1) == 0) {
      *param_1 = param_1[1];
      param_1[1] = uVar3;
      uVar3 = *puVar4;
      goto LAB_005cf570;
    }
  }
  *param_1 = param_2[-1];
  param_2[-1] = uVar3;
  uVar3 = *puVar4;
LAB_005cf570:
  while( true ) {
                    /* catch() { ... } // from try @ 005ce92c with catch @ 005cf570 */
    while (uVar1 = (*param_3)(uVar3,*param_1), (uVar1 & 1) != 0) {
      puVar4 = puVar4 + 1;
      uVar3 = *puVar4;
    }
    do {
      param_2 = param_2 + -1;
      uVar1 = (*param_3)(*param_1,*param_2);
    } while ((uVar1 & 1) != 0);
    if (param_2 <= puVar4) break;
    uVar3 = *puVar4;
    *puVar4 = *param_2;
    *param_2 = uVar3;
    uVar3 = puVar4[1];
    puVar4 = puVar4 + 1;
                    /* catch() { ... } // from try @ 005ce91c with catch @ 005cf5a8 */
  }
  return puVar4;
}


