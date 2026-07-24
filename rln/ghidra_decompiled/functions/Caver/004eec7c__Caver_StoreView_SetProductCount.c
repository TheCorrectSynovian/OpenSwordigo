/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eec7c
 * Function: Caver::StoreView::SetProductCount
 * Signature: undefined __thiscall SetProductCount(StoreView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::SetProductCount(int) */

void __thiscall Caver::StoreView::SetProductCount(StoreView *this,int param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  StoreProductView *this_00;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar8 = (ulong)param_1;
  lVar4 = *(long *)(this + 0x148);
  lVar6 = lVar4 - *(long *)(this + 0x140);
  while (uVar8 < (ulong)(lVar6 >> 4)) {
    plVar7 = *(long **)(lVar4 + -0x10);
    plVar2 = *(long **)(lVar4 + -8);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    (**(code **)(*plVar7 + 0x78))();
    lVar4 = *(long *)(this + 0x148);
    *(long *)(this + 0x148) = lVar4 + -0x10;
    plVar7 = *(long **)(lVar4 + -8);
    if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if ((plVar2 != (long *)0x0) && (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    lVar4 = *(long *)(this + 0x148);
    lVar6 = lVar4 - *(long *)(this + 0x140);
  }
  if ((ulong)(lVar6 >> 4) < uVar8) {
    do {
      this_00 = operator_new(0x150);
      StoreProductView::StoreProductView(this_00);
      boost::shared_ptr<Caver::StoreProductView>::shared_ptr<Caver::StoreProductView>
                ((shared_ptr<Caver::StoreProductView> *)&local_58,this_00);
      plVar7 = *(long **)(this + 0x130);
      pcVar5 = *(code **)(*plVar7 + 0x60);
      local_68 = local_58;
      local_60 = local_50;
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      (*pcVar5)(plVar7,&local_68);
      plVar7 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar4 = plVar7[2];
        plVar7[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      puVar1 = *(undefined8 **)(this + 0x148);
      if (puVar1 == *(undefined8 **)(this + 0x150)) {
        std::
        vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>
                         *)(this + 0x140),puVar1,&local_58);
        plVar7 = local_50;
      }
      else {
        *puVar1 = local_58;
        puVar1[1] = local_50;
        if (local_50 != (long *)0x0) {
          local_50[1] = local_50[1] + 1;
        }
        *(undefined8 **)(this + 0x148) = puVar1 + 2;
        plVar7 = local_50;
      }
      local_50 = plVar7;
      if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar4 = plVar7[2];
        plVar7[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
    } while ((ulong)(*(long *)(this + 0x148) - *(long *)(this + 0x140) >> 4) < uVar8);
  }
  if (1.0 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


