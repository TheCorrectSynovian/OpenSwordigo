/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a599c
 * Function: std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::FWTouch,std::allocator<Caver::FWTouch>> * this, __normal_iterator param_1, FWTouch * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::FWTouch, std::allocator<Caver::FWTouch>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*, std::vector<Caver::FWTouch,
   std::allocator<Caver::FWTouch> > >, Caver::FWTouch const&) */

void __thiscall
std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux
          (vector<Caver::FWTouch,std::allocator<Caver::FWTouch>> *this,FWTouch *param_2,
          FWTouch *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  FWTouch *pFVar5;
  long lVar6;
  FWTouch *this_00;
  long lVar7;
  FWTouch *pFVar8;
  FWTouch aFStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pFVar5 = *(FWTouch **)(this + 8);
  if (pFVar5 == *(FWTouch **)(this + 0x10)) {
    lVar7 = *(long *)this;
    lVar6 = (long)pFVar5 - lVar7;
    uVar4 = (lVar6 >> 3) * -0x3333333333333333;
    uVar3 = uVar4;
    if (lVar6 == 0) {
      uVar3 = 1;
    }
    uVar1 = 0x666666666666666;
    if (!CARRY8(uVar3,uVar4) && uVar3 + uVar4 < 0x666666666666667) {
      uVar1 = uVar3 + uVar4;
    }
    if (uVar1 == 0) {
      pFVar5 = (FWTouch *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      pFVar5 = operator_new(uVar1 * 0x28);
    }
    Caver::FWTouch::FWTouch(pFVar5 + ((long)param_2 - lVar7 >> 3) * 8,param_3);
    this_00 = pFVar5;
    for (pFVar8 = *(FWTouch **)this; pFVar8 != param_2; pFVar8 = pFVar8 + 0x28) {
      Caver::FWTouch::FWTouch(this_00,pFVar8);
      this_00 = this_00 + 0x28;
    }
    pFVar8 = *(FWTouch **)(this + 8);
    for (; this_00 = this_00 + 0x28, pFVar8 != param_2; param_2 = param_2 + 0x28) {
      Caver::FWTouch::FWTouch(this_00,param_2);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a5bf0 with catch @ 005a5b3c
                       catch(type#1 @ 00000000) { ... } // from try @ 005a5c60 with catch @ 005a5b3c
                        */
    *(FWTouch **)this = pFVar5;
    *(FWTouch **)(this + 8) = this_00;
    *(FWTouch **)(this + 0x10) = pFVar5 + uVar1 * 0x28;
  }
  else {
    Caver::FWTouch::FWTouch(pFVar5,pFVar5 + -0x28);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x28;
    Caver::FWTouch::FWTouch(aFStack_80,param_3);
    uVar3 = (*(long *)(this + 8) + -0x50) - (long)param_2;
    if (0 < (long)uVar3) {
      lVar6 = uVar3 / 0x28 + 1;
      pFVar5 = (FWTouch *)(*(long *)(this + 8) + -0x78);
      do {
                    /* try { // try from 005a5a30 to 006a5a53 has its CatchHandler @ 005a4f08 */
        Caver::FWTouch::operator=(pFVar5 + 0x28,pFVar5);
        lVar6 = lVar6 + -1;
        pFVar5 = pFVar5 + -0x28;
      } while (1 < lVar6);
    }
    Caver::FWTouch::operator=(param_2,aFStack_80);
                    /* catch() { ... } // from try @ 005a5608 with catch @ 005a5a50 */
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


