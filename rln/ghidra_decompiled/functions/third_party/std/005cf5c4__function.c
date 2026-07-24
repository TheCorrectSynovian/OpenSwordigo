/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf5c4
 * Function: std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
 * Signature: void __heap_select<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>(__normal_iterator param_1, __normal_iterator param_2, __normal_iterator param_3, _Iter_comp_iter param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<__gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >,
   __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture const*, Caver::Texture const*)>
   >(__gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >, __gnu_cxx::__normal_iterator<Caver::Texture**,
   std::vector<Caver::Texture*, std::allocator<Caver::Texture*> > >,
   __gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(Caver::Texture
   const*, Caver::Texture const*)>) */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<Caver::Texture**,std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool(*)(Caver::Texture_const*,Caver::Texture_const*)>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,code *param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar6 = (long)param_2 - (long)param_1;
  uVar7 = lVar6 >> 3;
                    /* catch() { ... } // from try @ 005ce910 with catch @ 005cf604 */
  if (0xf < lVar6) {
    uVar8 = uVar7 - 1;
    uVar2 = uVar8;
    if (-1 < (long)(uVar7 - 2)) {
      uVar2 = uVar7 - 2;
    }
    uVar12 = (long)uVar2 >> 1;
    uVar11 = uVar7;
    if (-1 < (long)uVar8) {
      uVar11 = uVar8;
    }
    uVar8 = uVar12;
    do {
      uVar10 = param_1[uVar8];
      uVar5 = uVar8;
      while ((long)uVar5 < (long)uVar11 >> 1) {
                    /* catch() { ... } // from try @ 005ce8b4 with catch @ 005cf658 */
        uVar9 = uVar5 * 2 + 2;
        uVar4 = uVar5 << 1 | 1;
        uVar3 = (*param_4)(param_1[uVar9],param_1[uVar4]);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar9;
        }
        param_1[uVar5] = param_1[uVar4];
        uVar5 = uVar4;
      }
      if ((((uint)lVar6 >> 3 & 1) == 0) && (uVar5 == uVar12)) {
        param_1[uVar12] = param_1[uVar2 | 1];
        uVar5 = uVar2 | 1;
      }
      while ((long)uVar8 < (long)uVar5) {
                    /* catch() { ... } // from try @ 005ce8a8 with catch @ 005cf6b0 */
        uVar9 = uVar5;
        if (-1 < (long)(uVar5 - 1)) {
          uVar9 = uVar5 - 1;
        }
                    /* catch() { ... } // from try @ 005ce894 with catch @ 005cf6b8 */
        uVar9 = (long)uVar9 >> 1;
                    /* catch() { ... } // from try @ 005ce664 with catch @ 005cf6c0 */
        uVar4 = (*param_4)(param_1[uVar9],uVar10);
        if ((uVar4 & 1) == 0) break;
        param_1[uVar5] = param_1[uVar9];
        uVar5 = uVar9;
      }
      param_1[uVar5] = uVar10;
      bVar1 = uVar8 != 0;
      uVar8 = uVar8 - 1;
    } while (bVar1);
  }
  if (param_2 < param_3) {
    uVar8 = uVar7 - 1;
    uVar2 = uVar7;
    if (-1 < (long)uVar8) {
      uVar2 = uVar8;
    }
    if (-1 < (long)(uVar7 - 2)) {
      uVar8 = uVar7 - 2;
    }
                    /* catch() { ... } // from try @ 005ce64c with catch @ 005cf71c */
    do {
      uVar7 = (*param_4)(*param_2,*param_1);
      if ((uVar7 & 1) != 0) {
        uVar10 = *param_2;
        *param_2 = *param_1;
        if (lVar6 < 0x11) {
          uVar7 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar12 = uVar11 * 2 + 2;
            uVar7 = uVar11 << 1 | 1;
                    /* catch() { ... } // from try @ 005cea78 with catch @ 005cf778 */
            uVar5 = (*param_4)(param_1[uVar12],param_1[uVar7]);
            if ((uVar5 & 1) == 0) {
              uVar7 = uVar12;
            }
            param_1[uVar11] = param_1[uVar7];
            uVar11 = uVar7;
          } while ((long)uVar7 < (long)uVar2 >> 1);
        }
        if ((((uint)lVar6 >> 3 & 1) == 0) && (uVar7 == (long)uVar8 >> 1)) {
          param_1[(long)uVar8 >> 1] = param_1[uVar8 | 1];
          uVar7 = uVar8 | 1;
        }
        if (0 < (long)uVar7) {
          do {
            uVar11 = uVar7;
            if (-1 < (long)(uVar7 - 1)) {
              uVar11 = uVar7 - 1;
            }
            uVar11 = (long)uVar11 >> 1;
                    /* catch() { ... } // from try @ 005ce780 with catch @ 005cf7d4 */
            uVar12 = (*param_4)(param_1[uVar11],uVar10);
          } while (((uVar12 & 1) != 0) &&
                  (param_1[uVar7] = param_1[uVar11], bVar1 = 2 < (long)uVar7, uVar7 = uVar11, bVar1)
                  );
        }
        param_1[uVar7] = uVar10;
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
                    /* catch() { ... } // from try @ 005ce8dc with catch @ 005cf830 */
  return;
}


