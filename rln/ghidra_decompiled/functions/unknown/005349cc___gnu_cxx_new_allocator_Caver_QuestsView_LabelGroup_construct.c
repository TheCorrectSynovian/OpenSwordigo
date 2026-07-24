/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005349cc
 * Function: __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct
 * Signature: undefined __thiscall construct(new_allocator<Caver::QuestsView::LabelGroup> * this, LabelGroup * param_1, LabelGroup * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct(Caver::QuestsView::LabelGroup*,
   Caver::QuestsView::LabelGroup const&) */

void __thiscall
__gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct
          (new_allocator<Caver::QuestsView::LabelGroup> *this,LabelGroup *param_1,
          LabelGroup *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)param_2;
  lVar2 = *(long *)(param_2 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar4 = lVar2 - lVar8;
  puVar5 = (undefined8 *)0x0;
  if (uVar4 != 0) {
    if ((ulong)((long)uVar4 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar5 = operator_new(uVar4);
  }
  *(undefined8 **)param_1 = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 0x10) = puVar5 + ((long)uVar4 >> 4) * 2;
  puVar1 = *(undefined8 **)param_2;
  puVar3 = *(undefined8 **)(param_2 + 8);
  puVar6 = puVar5;
  puVar7 = puVar1;
  if (puVar3 != puVar1) {
    do {
      *puVar6 = *puVar7;
      lVar8 = puVar7[1];
      puVar6[1] = lVar8;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      }
      puVar7 = puVar7 + 2;
      puVar6 = puVar6 + 2;
    } while (puVar7 != puVar3);
    puVar5 = (undefined8 *)
             ((long)puVar5 + ((long)puVar3 + (-0x10 - (long)puVar1) & 0xfffffffffffffff0U) + 0x10);
  }
  *(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar8 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar8;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x30);
  *(long *)(param_1 + 0x30) = lVar8;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  return;
}


