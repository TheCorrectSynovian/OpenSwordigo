/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005342ac
 * Function: std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
 * Signature: LabelGroup * __cdecl __uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>(__normal_iterator param_1, __normal_iterator param_2, LabelGroup * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::LabelGroup*
   std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup
   const*, std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup>
   > >, Caver::QuestsView::LabelGroup*>(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup
   const*, std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup>
   > >, __gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,
   std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup> > >,
   Caver::QuestsView::LabelGroup*) */

LabelGroup *
std::__uninitialized_copy<false>::
__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup_const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>
          (long *param_1,long *param_2,LabelGroup *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    lVar5 = *param_1;
    lVar7 = param_1[1];
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar2 = lVar7 - lVar5;
    puVar3 = (undefined8 *)0x0;
    if (uVar2 != 0) {
      if ((ulong)((long)uVar2 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar3 = operator_new(uVar2);
    }
    *(undefined8 **)param_3 = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3;
    *(undefined8 **)(param_3 + 0x10) = puVar3 + ((long)uVar2 >> 4) * 2;
    puVar4 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar1 - (long)puVar4;
    puVar6 = puVar3;
    if (lVar5 != 0) {
      do {
        *puVar6 = *puVar4;
        lVar7 = puVar4[1];
        puVar6[1] = lVar7;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
        }
        puVar4 = puVar4 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar4 != puVar1);
      puVar3 = (undefined8 *)((long)puVar3 + (lVar5 - 0x10U & 0xfffffffffffffff0) + 0x10);
    }
    *(undefined8 **)(param_3 + 8) = puVar3;
    *(long *)(param_3 + 0x18) = param_1[3];
    lVar5 = param_1[4];
    *(long *)(param_3 + 0x20) = lVar5;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    *(long *)(param_3 + 0x28) = param_1[5];
    lVar5 = param_1[6];
    *(long *)(param_3 + 0x30) = lVar5;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    param_1 = param_1 + 7;
    param_3 = param_3 + 0x38;
  } while( true );
}


