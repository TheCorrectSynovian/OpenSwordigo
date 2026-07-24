/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac31c
 * Function: std::vector<int,std::allocator<int>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<int,std::allocator<int>> * this, __normal_iterator param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<int, std::allocator<int> >::_M_insert_aux(__gnu_cxx::__normal_iterator<int*,
   std::vector<int, std::allocator<int> > >, int const&) */

void __thiscall
std::vector<int,std::allocator<int>>::_M_insert_aux
          (vector<int,std::allocator<int>> *this,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  void *__dest;
  ulong uVar6;
  void *__src;
  void *pvVar7;
  
  puVar3 = *(undefined4 **)(this + 8);
  if (puVar3 == *(undefined4 **)(this + 0x10)) {
    pvVar7 = *(void **)this;
    uVar6 = (long)puVar3 - (long)pvVar7 >> 2;
    uVar2 = uVar6;
    if ((long)puVar3 - (long)pvVar7 == 0) {
      uVar2 = 1;
    }
    uVar1 = 0x3fffffffffffffff;
    if (!CARRY8(uVar2,uVar6) && uVar2 + uVar6 >> 0x3e == 0) {
      uVar1 = uVar2 + uVar6;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
      __src = pvVar7;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      __dest = operator_new(uVar1 << 2);
      __src = *(void **)this;
    }
    sVar5 = (long)param_2 - (long)__src;
    *(undefined4 *)((long)__dest + ((long)param_2 - (long)pvVar7 >> 2) * 4) = *param_3;
    if (sVar5 != 0) {
      memmove(__dest,__src,sVar5);
    }
    pvVar7 = (void *)((long)__dest + ((long)sVar5 >> 2) * 4 + 4);
    sVar5 = *(long *)(this + 8) - (long)param_2;
    if (sVar5 != 0) {
      memmove(pvVar7,param_2,sVar5);
    }
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
    *(void **)this = __dest;
    *(void **)(this + 8) = (void *)((long)pvVar7 + ((long)sVar5 >> 2) * 4);
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 4);
  }
  else {
    *puVar3 = puVar3[-1];
    *(undefined4 **)(this + 8) = puVar3 + 1;
    uVar4 = *param_3;
    sVar5 = (long)(puVar3 + -1) - (long)param_2;
    if (sVar5 != 0) {
      memmove((void *)((long)puVar3 - sVar5),param_2,sVar5);
    }
    *param_2 = uVar4;
  }
  return;
}


