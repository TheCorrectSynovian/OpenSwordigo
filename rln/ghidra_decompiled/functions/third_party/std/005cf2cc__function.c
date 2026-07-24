/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf2cc
 * Function: std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
 * Signature: void __introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>(__normal_iterator param_1, __normal_iterator param_2, long param_3, _Iter_comp_iter param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*, Caver::Texture const*)>
   >(__gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >, __gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >, long,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*, Caver::Texture const*)>) */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
               (undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
                    /* catch() { ... } // from try @ 005ceb28 with catch @ 005cf2d0 */
                    /* catch() { ... } // from try @ 005ce9ec with catch @ 005cf2d4 */
  lVar5 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar5 < 0x81) {
      return;
    }
    param_3 = param_3 + -1;
                    /* catch() { ... } // from try @ 005ce9d4 with catch @ 005cf314 */
    if (param_3 == -1) break;
                    /* catch() { ... } // from try @ 005cec20 with catch @ 005cf318 */
    puVar2 = (undefined8 *)
             __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
                       (param_1,param_2,param_4);
    __introsort_loop<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
              (puVar2,param_2,param_3,param_4);
    lVar5 = (long)puVar2 - (long)param_1;
    param_2 = puVar2;
  }
                    /* catch() { ... } // from try @ 005ceb80 with catch @ 005cf350 */
  __heap_select<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
            (param_1,param_2,param_2,param_4);
  do {
    param_2 = param_2 + -1;
    uVar7 = *param_2;
    lVar6 = (long)param_2 - (long)param_1;
    lVar11 = lVar6 >> 3;
    lVar9 = lVar11 + -1;
    lVar5 = lVar11;
    if (-1 < lVar9) {
      lVar5 = lVar9;
    }
    *param_2 = *param_1;
    if (lVar6 < 0x11) {
      uVar8 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 005ceab0 with catch @ 005cf388 */
      uVar10 = 0;
      do {
        uVar4 = uVar10 * 2 + 2;
        uVar8 = uVar10 << 1 | 1;
        uVar3 = (*param_4)(param_1[uVar4],param_1[uVar8]);
        if ((uVar3 & 1) == 0) {
          uVar8 = uVar4;
        }
        param_1[uVar10] = param_1[uVar8];
        uVar10 = uVar8;
      } while ((long)uVar8 < lVar5 >> 1);
    }
    if (((uint)lVar6 >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 005cea30 with catch @ 005cf3e4 */
      if (-1 < lVar11 + -2) {
        lVar9 = lVar11 + -2;
      }
      if (uVar8 == lVar9 >> 1) {
        uVar10 = uVar8 << 1 | 1;
        param_1[uVar8] = param_1[uVar10];
        uVar8 = uVar10;
      }
    }
    if (0 < (long)uVar8) {
      do {
        uVar10 = uVar8;
        if (-1 < (long)(uVar8 - 1)) {
          uVar10 = uVar8 - 1;
        }
        uVar10 = (long)uVar10 >> 1;
        uVar4 = (*param_4)(param_1[uVar10],uVar7);
      } while (((uVar4 & 1) != 0) &&
              (param_1[uVar8] = param_1[uVar10], bVar1 = 2 < (long)uVar8, uVar8 = uVar10, bVar1));
    }
                    /* catch() { ... } // from try @ 005cea18 with catch @ 005cf448 */
                    /* catch() { ... } // from try @ 005ce7ec with catch @ 005cf44c */
    param_1[uVar8] = uVar7;
  } while (8 < lVar6);
  return;
}


