/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00534510
 * Function: std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>> * this, __normal_iterator param_1, LabelGroup * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup*,
   std::vector<Caver::QuestsView::LabelGroup, std::allocator<Caver::QuestsView::LabelGroup> > >,
   Caver::QuestsView::LabelGroup const&) */

void __thiscall
std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>::
_M_insert_aux(vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>
              *this,vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
                    *param_2,LabelGroup *param_3)

{
  ulong uVar1;
  long lVar2;
  LabelGroup *pLVar3;
  long lVar4;
  undefined8 *puVar5;
  LabelGroup *pLVar6;
  LabelGroup *pLVar7;
  LabelGroup *pLVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pLVar6 = *(LabelGroup **)(this + 8);
  if (pLVar6 == *(LabelGroup **)(this + 0x10)) {
    lVar10 = *(long *)this;
                    /* catch() { ... } // from try @ 005347f0 with catch @ 00534828 */
    lVar16 = (long)pLVar6 - lVar10;
    uVar11 = (lVar16 >> 3) * 0x6db6db6db6db6db7;
    uVar13 = uVar11;
                    /* catch() { ... } // from try @ 0053488c with catch @ 0053484c */
    if (lVar16 == 0) {
      uVar13 = 1;
    }
    uVar1 = 0x492492492492492;
    if (!CARRY8(uVar13,uVar11) && uVar13 + uVar11 < 0x492492492492493) {
      uVar1 = uVar13 + uVar11;
    }
                    /* try { // try from 00534870 to 00634873 has its CatchHandler @ 00534880 */
    if (uVar1 == 0) {
      pLVar6 = (LabelGroup *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) goto LAB_00534958;
                    /* catch() { ... } // from try @ 00534870 with catch @ 00534880 */
                    /* try { // try from 00534884 to 0063488b has its CatchHandler @ 00534894 */
      pLVar6 = operator_new(uVar1 * 0x38);
                    /* try { // try from 0053488c to 00634897 has its CatchHandler @ 0053484c */
    }
                    /* catch() { ... } // from try @ 00534884 with catch @ 00534894 */
                    /* try { // try from 00534898 to 006348df has its CatchHandler @ 00534898
                       catch(type#1 @ 00000000) { ... } // from try @ 00534898 with catch @ 00534898
                       catch(type#1 @ 00000000) { ... } // from try @ 005348fc with catch @ 00534898
                       catch(type#1 @ 00000000) { ... } // from try @ 00534970 with catch @ 00534898
                        */
    __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct
              ((new_allocator<Caver::QuestsView::LabelGroup> *)this,
               pLVar6 + ((long)param_2 - lVar10 >> 3) * 8,param_3);
    pLVar7 = __uninitialized_copy<false>::
             __uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
                       (*(LabelGroup **)this,(LabelGroup *)param_2,pLVar6);
                    /* try { // try from 005348e0 to 006348fb has its CatchHandler @ 00534964 */
    pLVar8 = __uninitialized_copy<false>::
             __uninit_copy<Caver::QuestsView::LabelGroup*,Caver::QuestsView::LabelGroup*>
                       ((LabelGroup *)param_2,*(LabelGroup **)(this + 8),pLVar7 + 0x38);
    pLVar7 = *(LabelGroup **)this;
    pLVar3 = *(LabelGroup **)(this + 8);
    if (pLVar7 != pLVar3) {
      do {
        Caver::QuestsView::LabelGroup::~LabelGroup(pLVar7);
                    /* try { // try from 005348fc to 00634967 has its CatchHandler @ 00534898 */
        pLVar7 = pLVar7 + 0x38;
      } while (pLVar3 != pLVar7);
      pLVar7 = *(LabelGroup **)this;
    }
    if (pLVar7 != (LabelGroup *)0x0) {
      operator_delete(pLVar7);
    }
    *(LabelGroup **)this = pLVar6;
    *(LabelGroup **)(this + 8) = pLVar8;
    *(LabelGroup **)(this + 0x10) = pLVar6 + uVar1 * 0x38;
  }
  else {
    __gnu_cxx::new_allocator<Caver::QuestsView::LabelGroup>::construct
              ((new_allocator<Caver::QuestsView::LabelGroup> *)this,pLVar6,pLVar6 + -0x38);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x38;
                    /* catch() { ... } // from try @ 0053441c with catch @ 0053456c */
    puVar9 = *(undefined8 **)param_3;
    puVar12 = *(undefined8 **)(param_3 + 8);
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    uVar13 = (long)puVar12 - (long)puVar9;
    puVar5 = (undefined8 *)0x0;
    if (uVar13 != 0) {
      if ((ulong)((long)uVar13 >> 4) >> 0x3c != 0) {
LAB_00534958:
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar5 = operator_new(uVar13);
      puVar9 = *(undefined8 **)param_3;
      puVar12 = *(undefined8 **)(param_3 + 8);
    }
    local_80 = puVar5 + ((long)uVar13 >> 4) * 2;
    local_88 = puVar5;
    puVar14 = puVar5;
    puVar15 = puVar9;
    if (puVar12 != puVar9) {
      do {
        *puVar14 = *puVar15;
        lVar16 = puVar15[1];
        puVar14[1] = lVar16;
        if (lVar16 != 0) {
          *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
        }
        puVar15 = puVar15 + 2;
        puVar14 = puVar14 + 2;
      } while (puVar15 != puVar12);
      local_88 = (undefined8 *)
                 ((long)puVar5 +
                 ((long)puVar12 + (-0x10 - (long)puVar9) & 0xfffffffffffffff0U) + 0x10);
    }
    local_78 = *(undefined8 *)(param_3 + 0x18);
    local_70 = *(long *)(param_3 + 0x20);
    if (local_70 != 0) {
      *(long *)(local_70 + 8) = *(long *)(local_70 + 8) + 1;
    }
    local_68 = *(undefined8 *)(param_3 + 0x28);
    local_60 = *(long *)(param_3 + 0x30);
    if (local_60 != 0) {
      *(long *)(local_60 + 8) = *(long *)(local_60 + 8) + 1;
    }
    uVar13 = (*(long *)(this + 8) + -0x70) - (long)param_2;
    local_90 = puVar5;
    if (0 < (long)uVar13) {
      lVar16 = uVar13 / 0x38 + 1;
      plVar18 = (long *)(*(long *)(this + 8) + -0x50);
      do {
        vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
        ::operator=((vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
                     *)(plVar18 + -4),(vector *)(plVar18 + -0xb));
        lVar10 = plVar18[-8];
        lVar2 = plVar18[-7];
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
        }
        plVar17 = (long *)*plVar18;
        plVar18[-1] = lVar10;
        *plVar18 = lVar2;
        if ((plVar17 != (long *)0x0) &&
           (lVar10 = plVar17[1], plVar17[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          lVar10 = plVar17[2];
          plVar17[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
        lVar10 = plVar18[-6];
        lVar2 = plVar18[-5];
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
        }
        plVar17 = (long *)plVar18[2];
        plVar18[1] = lVar10;
        plVar18[2] = lVar2;
        if ((plVar17 != (long *)0x0) &&
           (lVar10 = plVar17[1], plVar17[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          lVar10 = plVar17[2];
          plVar17[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
        lVar16 = lVar16 + -1;
        plVar18 = plVar18 + -7;
      } while (1 < lVar16);
    }
    vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::
    operator=(param_2,(vector *)&local_90);
    if (local_70 != 0) {
      *(long *)(local_70 + 8) = *(long *)(local_70 + 8) + 1;
    }
    plVar18 = *(long **)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = local_78;
    *(long *)(param_2 + 0x20) = local_70;
    if ((plVar18 != (long *)0x0) &&
       (lVar16 = plVar18[1], plVar18[1] = lVar16 + -1, lVar16 + -1 == 0)) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar16 = plVar18[2];
      plVar18[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    if (local_60 != 0) {
      *(long *)(local_60 + 8) = *(long *)(local_60 + 8) + 1;
    }
    plVar18 = *(long **)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = local_68;
    *(long *)(param_2 + 0x30) = local_60;
                    /* catch() { ... } // from try @ 00534804 with catch @ 005347d4 */
    if ((plVar18 != (long *)0x0) &&
       (lVar16 = plVar18[1], plVar18[1] = lVar16 + -1, lVar16 + -1 == 0)) {
                    /* try { // try from 005347f0 to 00634803 has its CatchHandler @ 00534828 */
      (**(code **)(*plVar18 + 0x10))(plVar18);
      lVar16 = plVar18[2];
      plVar18[2] = lVar16 + -1;
      if (lVar16 + -1 == 0) {
                    /* try { // try from 00534804 to 0063482b has its CatchHandler @ 005347d4 */
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    Caver::QuestsView::LabelGroup::~LabelGroup((LabelGroup *)&local_90);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


