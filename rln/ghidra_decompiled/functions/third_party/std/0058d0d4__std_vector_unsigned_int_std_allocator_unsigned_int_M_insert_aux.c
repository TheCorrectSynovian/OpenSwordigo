/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d0d4
 * Function: std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<unsigned_int,std::allocator<unsigned_int>> * this, __normal_iterator param_1, uint * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<unsigned int, std::allocator<unsigned int>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_insert_aux
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,undefined4 *param_2,
          undefined4 *param_3)

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
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058d194 with catch @ 0058d0e0
                       catch(type#1 @ 00000000) { ... } // from try @ 0058d204 with catch @ 0058d0e0
                        */
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
                    /* try { // try from 0058d16c to 0068d193 has its CatchHandler @ 0058d1a8 */
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
                    /* try { // try from 0058d194 to 0068d1d3 has its CatchHandler @ 0058d0e0 */
    sVar5 = (long)param_2 - (long)__src;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058d16c with catch @ 0058d1a8
                        */
    *(undefined4 *)((long)__dest + ((long)param_2 - (long)pvVar7 >> 2) * 4) = *param_3;
    if (sVar5 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058d124 with catch @ 0058d1b0
                        */
      memmove(__dest,__src,sVar5);
    }
    pvVar7 = (void *)((long)__dest + ((long)sVar5 >> 2) * 4 + 4);
    sVar5 = *(long *)(this + 8) - (long)param_2;
    if (sVar5 != 0) {
                    /* try { // try from 0058d1d4 to 0068d203 has its CatchHandler @ 0058d20c */
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
                    /* try { // try from 0058d124 to 0068d14b has its CatchHandler @ 0058d1b0 */
      memmove((void *)((long)puVar3 - sVar5),param_2,sVar5);
    }
    *param_2 = uVar4;
  }
                    /* try { // try from 0058d204 to 0068d20f has its CatchHandler @ 0058d0e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058d1d4 with catch @ 0058d20c
                        */
                    /* catch() { ... } // from try @ 0058d224 with catch @ 0058d210 */
  return;
}


