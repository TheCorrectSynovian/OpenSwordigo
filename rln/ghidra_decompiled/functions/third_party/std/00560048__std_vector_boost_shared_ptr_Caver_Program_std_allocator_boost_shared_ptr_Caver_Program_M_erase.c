/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00560048
 * Function: std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>> * this, __normal_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::Program>, std::allocator<boost::shared_ptr<Caver::Program> >
   >::_M_erase(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Program>*,
   std::vector<boost::shared_ptr<Caver::Program>, std::allocator<boost::shared_ptr<Caver::Program> >
   > >) */

long __thiscall
std::vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>::
_M_erase(vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>
         *this,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
                    /* try { // try from 00560054 to 0066006b has its CatchHandler @ 00560180 */
  puVar2 = *(undefined8 **)(this + 8);
  puVar5 = (undefined8 *)(param_2 + 0x10);
                    /* try { // try from 0056006c to 006601e7 has its CatchHandler @ 0055ff9c */
  puVar6 = puVar5;
  if ((puVar5 != puVar2) && (puVar6 = puVar2, 0 < (long)puVar2 - (long)puVar5)) {
    lVar7 = ((ulong)((long)puVar2 - (long)puVar5) >> 4) + 1;
    do {
      uVar1 = *puVar5;
      lVar3 = puVar5[1];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
      }
      plVar4 = (long *)puVar5[-1];
      puVar5[-2] = uVar1;
      puVar5[-1] = lVar3;
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 2;
    } while (1 < lVar7);
    puVar6 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 8) = puVar6 + -2;
  plVar4 = (long *)puVar6[-1];
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
                    /* catch() { ... } // from try @ 0055ffe0 with catch @ 0056013c */
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return param_2;
}


