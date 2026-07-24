/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00545f04
 * Function: std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> * this, __normal_iterator param_1, MeshData * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MeshData const*, std::allocator<Caver::MeshData const*>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,
   std::vector<Caver::MeshData const*, std::allocator<Caver::MeshData const*> > >, Caver::MeshData
   const* const&) */

void __thiscall
std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
          (vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *this,
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
  
                    /* try { // try from 00545f10 to 00645f1b has its CatchHandler @ 00545f1c */
                    /* catch() { ... } // from try @ 00545f10 with catch @ 00545f1c */
                    /* try { // try from 00545f20 to 00645f23 has its CatchHandler @ 00545f28 */
  puVar3 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00545f20 with catch @ 00545f28 */
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
                    /* try { // try from 00545fb0 to 00645fd7 has its CatchHandler @ 005460c0 */
      __dest = operator_new(uVar1 << 3);
      __src = *(void **)this;
    }
    sVar4 = (long)param_2 - (long)__src;
    *(undefined8 *)((long)__dest + ((long)param_2 - (long)pvVar8 >> 3) * 8) = *param_3;
    if (sVar4 != 0) {
      memmove(__dest,__src,sVar4);
    }
                    /* try { // try from 00545ff8 to 00646003 has its CatchHandler @ 005460d0 */
    pvVar8 = (void *)((long)__dest + ((long)sVar4 >> 3) * 8 + 8);
    sVar4 = *(long *)(this + 8) - (long)param_2;
    if (sVar4 != 0) {
      memmove(pvVar8,param_2,sVar4);
    }
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
                    /* try { // try from 00546024 to 0064604b has its CatchHandler @ 005460bc */
    *(void **)this = __dest;
    *(void **)(this + 8) = (void *)((long)pvVar8 + ((long)sVar4 >> 3) * 8);
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
  }
  else {
                    /* try { // try from 00545f34 to 00645f63 has its CatchHandler @ 00545f34
                       catch() { ... } // from try @ 00545f34 with catch @ 00545f34
                       catch() { ... } // from try @ 00545f68 with catch @ 00545f34
                       catch() { ... } // from try @ 0054604c with catch @ 00545f34
                       catch() { ... } // from try @ 00546164 with catch @ 00545f34 */
    *puVar3 = puVar3[-1];
    lVar5 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar5 + 8;
    uVar7 = *param_3;
    sVar4 = (lVar5 + -8) - (long)param_2;
    if (sVar4 != 0) {
      memmove((void *)(lVar5 - sVar4),param_2,sVar4);
    }
                    /* try { // try from 00545f64 to 00645f67 has its CatchHandler @ 00546170 */
    *param_2 = uVar7;
                    /* try { // try from 00545f68 to 00645faf has its CatchHandler @ 00545f34 */
  }
  return;
}


