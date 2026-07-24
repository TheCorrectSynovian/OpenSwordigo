/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004df8fc
 * Function: std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_erase
 * Signature: undefined __thiscall _M_erase(vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> * this, __normal_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::ItemOverlay::ItemInfo, std::allocator<Caver::ItemOverlay::ItemInfo>
   >::_M_erase(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,
   std::vector<Caver::ItemOverlay::ItemInfo, std::allocator<Caver::ItemOverlay::ItemInfo> > >) */

long __thiscall
std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_erase
          (vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> *this,
          long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = *(undefined8 **)(this + 8);
  puVar5 = (undefined8 *)(param_2 + 0x18);
  puVar6 = puVar5;
  if ((puVar5 != puVar2) && (puVar6 = puVar2, 0 < (long)puVar2 - (long)puVar5)) {
    lVar7 = (ulong)((long)puVar2 - (long)puVar5) / 0x18 + 1;
    do {
      uVar1 = *puVar5;
      lVar3 = puVar5[1];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
      }
      plVar4 = (long *)puVar5[-2];
      puVar5[-3] = uVar1;
      puVar5[-2] = lVar3;
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar7 = lVar7 + -1;
      *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(puVar5 + 2);
      puVar5 = puVar5 + 3;
    } while (1 < lVar7);
    puVar6 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 8) = puVar6 + -3;
  plVar4 = (long *)puVar6[-2];
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return param_2;
}


