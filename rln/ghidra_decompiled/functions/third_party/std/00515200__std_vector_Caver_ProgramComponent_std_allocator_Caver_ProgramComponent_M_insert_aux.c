/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00515200
 * Function: std::vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>> * this, __normal_iterator param_1, ProgramComponent * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::ProgramComponent*, std::allocator<Caver::ProgramComponent*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent**,
   std::vector<Caver::ProgramComponent*, std::allocator<Caver::ProgramComponent*> > >,
   Caver::ProgramComponent* const&) */

void __thiscall
std::vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>>::_M_insert_aux
          (vector<Caver::ProgramComponent*,std::allocator<Caver::ProgramComponent*>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *__src;
  void *pvVar8;
  
  puVar3 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00515258 with catch @ 00515228 */
  if (puVar3 == *(undefined8 **)(this + 0x10)) {
    pvVar8 = *(void **)this;
    uVar6 = (long)puVar3 - (long)pvVar8 >> 3;
    uVar2 = uVar6;
    if ((long)puVar3 - (long)pvVar8 == 0) {
      uVar2 = 1;
    }
                    /* catch() { ... } // from try @ 00515244 with catch @ 0051527c */
    uVar1 = 0x1fffffffffffffff;
    if (!CARRY8(uVar2,uVar6) && uVar2 + uVar6 >> 0x3d == 0) {
      uVar1 = uVar2 + uVar6;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
                    /* catch() { ... } // from try @ 00515308 with catch @ 005152c0 */
      __src = pvVar8;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      __dest = operator_new(uVar1 << 3);
      __src = *(void **)this;
    }
    sVar4 = (long)param_2 - (long)__src;
    *(undefined8 *)((long)__dest + ((long)param_2 - (long)pvVar8 >> 3) * 8) = *param_3;
    if (sVar4 != 0) {
      memmove(__dest,__src,sVar4);
    }
                    /* try { // try from 005152ec to 006152ef has its CatchHandler @ 005152fc */
    pvVar8 = (void *)((long)__dest + ((long)sVar4 >> 3) * 8 + 8);
    sVar4 = *(long *)(this + 8) - (long)param_2;
                    /* catch() { ... } // from try @ 005152ec with catch @ 005152fc */
                    /* try { // try from 00515300 to 00615307 has its CatchHandler @ 00515310 */
    if (sVar4 != 0) {
                    /* try { // try from 00515308 to 00615313 has its CatchHandler @ 005152c0 */
      memmove(pvVar8,param_2,sVar4);
    }
                    /* catch() { ... } // from try @ 00515300 with catch @ 00515310 */
                    /* try { // try from 00515314 to 0061535b has its CatchHandler @ 00515314
                       catch(type#1 @ 00000000) { ... } // from try @ 00515314 with catch @ 00515314
                       catch(type#1 @ 00000000) { ... } // from try @ 00515378 with catch @ 00515314
                       catch(type#1 @ 00000000) { ... } // from try @ 005153ec with catch @ 00515314
                        */
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
    *(void **)this = __dest;
    *(void **)(this + 8) = (void *)((long)pvVar8 + ((long)sVar4 >> 3) * 8);
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
  }
  else {
    *puVar3 = puVar3[-1];
    lVar5 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar5 + 8;
                    /* try { // try from 00515244 to 00615257 has its CatchHandler @ 0051527c */
    uVar7 = *param_3;
    sVar4 = (lVar5 + -8) - (long)param_2;
    if (sVar4 != 0) {
                    /* try { // try from 00515258 to 0061527f has its CatchHandler @ 00515228 */
      memmove((void *)(lVar5 - sVar4),param_2,sVar4);
    }
    *param_2 = uVar7;
  }
  return;
}


