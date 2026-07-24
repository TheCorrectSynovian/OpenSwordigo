/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf184
 * Function: std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Texture*,std::allocator<Caver::Texture*>> * this, __normal_iterator param_1, Texture * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Texture*, std::allocator<Caver::Texture*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Texture**, std::vector<Caver::Texture*,
   std::allocator<Caver::Texture*> > >, Caver::Texture* const&) */

void __thiscall
std::vector<Caver::Texture*,std::allocator<Caver::Texture*>>::_M_insert_aux
          (vector<Caver::Texture*,std::allocator<Caver::Texture*>> *this,undefined8 *param_2,
          undefined8 *param_3)

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
  
                    /* try { // try from 005cf18c to 006cfa4f has its CatchHandler @ 005ce554 */
                    /* catch() { ... } // from try @ 005cf164 with catch @ 005cf190 */
                    /* catch() { ... } // from try @ 005cec58 with catch @ 005cf194 */
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 == *(undefined8 **)(this + 0x10)) {
    pvVar8 = *(void **)this;
    uVar6 = (long)puVar3 - (long)pvVar8 >> 3;
    uVar2 = uVar6;
    if ((long)puVar3 - (long)pvVar8 == 0) {
      uVar2 = 1;
    }
                    /* catch() { ... } // from try @ 005cebc0 with catch @ 005cf204 */
    uVar1 = 0x1fffffffffffffff;
    if (!CARRY8(uVar2,uVar6) && uVar2 + uVar6 >> 0x3d == 0) {
      uVar1 = uVar2 + uVar6;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
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
                    /* catch() { ... } // from try @ 005cebb4 with catch @ 005cf260 */
    if (sVar4 != 0) {
      memmove(__dest,__src,sVar4);
    }
    pvVar8 = (void *)((long)__dest + ((long)sVar4 >> 3) * 8 + 8);
    sVar4 = *(long *)(this + 8) - (long)param_2;
    if (sVar4 != 0) {
      memmove(pvVar8,param_2,sVar4);
    }
                    /* catch() { ... } // from try @ 005ceb40 with catch @ 005cf298 */
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
    uVar7 = *param_3;
                    /* catch() { ... } // from try @ 005cebd8 with catch @ 005cf1cc */
    sVar4 = (lVar5 + -8) - (long)param_2;
    if (sVar4 != 0) {
      memmove((void *)(lVar5 - sVar4),param_2,sVar4);
    }
    *param_2 = uVar7;
  }
  return;
}


