/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00547ca4
 * Function: std::vector<int,std::allocator<int>>::_M_fill_insert
 * Signature: undefined __thiscall _M_fill_insert(vector<int,std::allocator<int>> * this, __normal_iterator param_1, ulong param_2, int * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<int, std::allocator<int> >::_M_fill_insert(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, unsigned long, int const&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_fill_insert
          (vector<int,std::allocator<int>> *this,undefined4 *param_2,ulong param_3,
          undefined4 *param_4)

{
  void *__dest;
  undefined4 uVar1;
  size_t __n;
  void *__dest_00;
  undefined4 *puVar2;
  size_t sVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__src;
  long lVar10;
  
  if (param_3 == 0) {
    return;
  }
  puVar4 = *(undefined4 **)(this + 8);
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 2)) {
    uVar1 = *param_4;
    sVar3 = (long)puVar4 - (long)param_2;
    uVar5 = (long)sVar3 >> 2;
    if (param_3 < uVar5) {
      sVar3 = param_3 * 4;
      puVar2 = puVar4;
      if (sVar3 != 0) {
        memmove(puVar4,puVar4 + -param_3,sVar3);
        puVar2 = *(undefined4 **)(this + 8);
      }
      __n = (long)(puVar4 + -param_3) - (long)param_2;
      *(undefined4 **)(this + 8) = puVar2 + param_3;
      if (__n != 0) {
        memmove((void *)((long)puVar4 - __n),param_2,__n);
      }
                    /* try { // try from 00547e7c to 00647e9b has its CatchHandler @ 00547c68 */
      uVar5 = (sVar3 - 4 >> 2) + 1;
                    /* catch() { ... } // from try @ 00547e54 with catch @ 00547e84 */
      puVar4 = param_2;
                    /* catch() { ... } // from try @ 00547c98 with catch @ 00547e88 */
      if (7 < uVar5) {
        uVar7 = uVar5 & 0x7ffffffffffffff8;
        puVar4 = param_2 + uVar7;
        puVar9 = (undefined8 *)(param_2 + 4);
        uVar6 = uVar7;
        do {
          puVar9[-1] = CONCAT44(uVar1,uVar1);
          puVar9[-2] = CONCAT44(uVar1,uVar1);
          puVar9[1] = CONCAT44(uVar1,uVar1);
          *puVar9 = CONCAT44(uVar1,uVar1);
          uVar6 = uVar6 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar6 != 0);
        if (uVar5 == uVar7) {
          return;
        }
      }
      do {
        puVar2 = puVar4 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar2;
      } while (param_2 + param_3 != puVar2);
      return;
    }
    param_3 = param_3 - uVar5;
    if (param_3 != 0) {
      uVar6 = param_3;
      puVar2 = puVar4;
                    /* try { // try from 00547d88 to 00647dc7 has its CatchHandler @ 00547e34 */
      if (7 < param_3) {
        uVar7 = param_3 & 0xfffffffffffffff8;
        puVar9 = (undefined8 *)(puVar4 + 4);
        uVar6 = uVar7;
        do {
          puVar9[-1] = CONCAT44(uVar1,uVar1);
          puVar9[-2] = CONCAT44(uVar1,uVar1);
          puVar9[1] = CONCAT44(uVar1,uVar1);
          *puVar9 = CONCAT44(uVar1,uVar1);
          uVar6 = uVar6 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar6 != 0);
        uVar6 = param_3 - uVar7;
        puVar2 = puVar4 + uVar7;
                    /* try { // try from 00547efc to 00647f3b has its CatchHandler @ 00547efc
                       catch() { ... } // from try @ 00547efc with catch @ 00547efc
                       catch() { ... } // from try @ 00547f68 with catch @ 00547efc */
        if (param_3 == uVar7) goto LAB_00547f0c;
      }
      do {
        uVar6 = uVar6 - 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
      } while (uVar6 != 0);
    }
LAB_00547f0c:
    puVar2 = puVar4 + param_3;
    *(undefined4 **)(this + 8) = puVar2;
    if (sVar3 != 0) {
      memmove(puVar2,param_2,sVar3);
      puVar2 = *(undefined4 **)(this + 8);
    }
    *(undefined4 **)(this + 8) = puVar2 + uVar5;
    if ((long)puVar4 - (long)param_2 == 0) {
      return;
    }
                    /* try { // try from 00547f3c to 00647f4f has its CatchHandler @ 0054805c */
    uVar5 = (((long)puVar4 - (long)param_2) - 4U >> 2) + 1;
    if (7 < uVar5) {
      uVar7 = uVar5 & 0x7ffffffffffffff8;
                    /* try { // try from 00547f50 to 00647f67 has its CatchHandler @ 00547fec */
      puVar9 = (undefined8 *)(param_2 + 4);
      uVar6 = uVar7;
      do {
        puVar9[-1] = CONCAT44(uVar1,uVar1);
        puVar9[-2] = CONCAT44(uVar1,uVar1);
        puVar9[1] = CONCAT44(uVar1,uVar1);
        *puVar9 = CONCAT44(uVar1,uVar1);
        uVar6 = uVar6 - 8;
                    /* try { // try from 00547f68 to 0064805f has its CatchHandler @ 00547efc */
        puVar9 = puVar9 + 4;
      } while (uVar6 != 0);
      param_2 = param_2 + uVar7;
      if (uVar5 == uVar7) {
        return;
      }
    }
    do {
      puVar2 = param_2 + 1;
      *param_2 = uVar1;
      param_2 = puVar2;
    } while (puVar4 != puVar2);
    return;
  }
  lVar10 = *(long *)this;
  uVar5 = (long)puVar4 - lVar10 >> 2;
  if (0x3fffffffffffffff - uVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("vector::_M_fill_insert");
  }
  uVar6 = param_3;
  if (param_3 <= uVar5) {
    uVar6 = uVar5;
  }
  uVar7 = 0x3fffffffffffffff;
  if (!CARRY8(uVar6,uVar5) && uVar6 + uVar5 >> 0x3e == 0) {
    uVar7 = uVar6 + uVar5;
  }
  if (uVar7 == 0) {
    __dest_00 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    __dest_00 = operator_new(uVar7 << 2);
  }
  uVar1 = *param_4;
  puVar4 = (undefined4 *)((long)__dest_00 + ((long)param_2 - lVar10 >> 2) * 4);
  uVar5 = param_3;
  if (7 < param_3) {
    uVar8 = param_3 & 0xfffffffffffffff8;
    uVar5 = param_3 - uVar8;
                    /* try { // try from 00547dc8 to 00647e53 has its CatchHandler @ 00547c68 */
    puVar9 = (undefined8 *)(puVar4 + 4);
    uVar6 = uVar8;
    do {
      puVar9[-1] = CONCAT44(uVar1,uVar1);
      puVar9[-2] = CONCAT44(uVar1,uVar1);
      puVar9[1] = CONCAT44(uVar1,uVar1);
      *puVar9 = CONCAT44(uVar1,uVar1);
      uVar6 = uVar6 - 8;
      puVar9 = puVar9 + 4;
    } while (uVar6 != 0);
    puVar4 = puVar4 + uVar8;
    if (uVar8 == param_3) goto LAB_00547df8;
  }
  do {
    uVar5 = uVar5 - 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (uVar5 != 0);
LAB_00547df8:
  __src = *(void **)this;
  sVar3 = (long)param_2 - (long)__src;
  if (sVar3 != 0) {
    memmove(__dest_00,__src,sVar3);
  }
  __dest = (void *)((long)__dest_00 + param_3 * 4 + ((long)sVar3 >> 2) * 4);
  sVar3 = *(long *)(this + 8) - (long)param_2;
  if (sVar3 != 0) {
                    /* catch() { ... } // from try @ 00547d88 with catch @ 00547e34 */
    memmove(__dest,param_2,sVar3);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  *(void **)this = __dest_00;
  *(void **)(this + 8) = (void *)((long)__dest + ((long)sVar3 >> 2) * 4);
  *(void **)(this + 0x10) = (void *)((long)__dest_00 + uVar7 * 4);
  return;
                    /* try { // try from 00547e54 to 00647e7b has its CatchHandler @ 00547e84 */
}


