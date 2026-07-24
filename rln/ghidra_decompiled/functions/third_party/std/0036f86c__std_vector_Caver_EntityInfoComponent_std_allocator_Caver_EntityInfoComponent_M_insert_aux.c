/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f86c
 * Function: std::vector<Caver::EntityInfoComponent*,std::allocator<Caver::EntityInfoComponent*>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::EntityInfoComponent*,std::allocator<Caver::EntityInfoComponent*>> * this, __normal_iterator param_1, EntityInfoComponent * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::EntityInfoComponent*, std::allocator<Caver::EntityInfoComponent*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent**,
   std::vector<Caver::EntityInfoComponent*, std::allocator<Caver::EntityInfoComponent*> > >,
   Caver::EntityInfoComponent* const&) */

void __thiscall
std::vector<Caver::EntityInfoComponent*,std::allocator<Caver::EntityInfoComponent*>>::_M_insert_aux
          (vector<Caver::EntityInfoComponent*,std::allocator<Caver::EntityInfoComponent*>> *this,
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
  if (puVar3 == *(undefined8 **)(this + 0x10)) {
    pvVar8 = *(void **)this;
    uVar6 = (long)puVar3 - (long)pvVar8 >> 3;
    uVar2 = uVar6;
    if ((long)puVar3 - (long)pvVar8 == 0) {
      uVar2 = 1;
    }
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
    if (sVar4 != 0) {
      memmove(__dest,__src,sVar4);
    }
    pvVar8 = (void *)((long)__dest + ((long)sVar4 >> 3) * 8 + 8);
    sVar4 = *(long *)(this + 8) - (long)param_2;
    if (sVar4 != 0) {
      memmove(pvVar8,param_2,sVar4);
    }
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
    sVar4 = (lVar5 + -8) - (long)param_2;
    if (sVar4 != 0) {
      memmove((void *)(lVar5 - sVar4),param_2,sVar4);
    }
    *param_2 = uVar7;
  }
  return;
}


