/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055c5fc
 * Function: Caver::ObjectLibrary::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ObjectLibrary * this, ObjectLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&) */

void __thiscall
Caver::ObjectLibrary::LoadFromProtobufMessage(ObjectLibrary *this,ObjectLibrary *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  Program *pPVar5;
  ObjectTemplate *pOVar6;
  undefined8 *puVar7;
  ObjectLibrary *extraout_x1;
  ObjectLibrary *extraout_x1_00;
  ObjectLibrary *extraout_x1_01;
  ObjectLibrary *extraout_x1_02;
  ObjectLibrary *extraout_x1_03;
  ObjectLibrary *extraout_x1_04;
  ObjectLibrary *extraout_x1_05;
  ObjectLibrary *extraout_x1_06;
  ObjectLibrary *extraout_x1_07;
  ObjectLibrary *pOVar8;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  long lVar9;
  ObjectTemplate *pOVar10;
  long lVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  Program *local_78;
  long *local_70;
  long local_68;
  
                    /* try { // try from 0055c600 to 0065c627 has its CatchHandler @ 0055c8a4 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pOVar8 = param_1;
  if (((byte)param_1[0xf8] & 1) != 0) {
    FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
    pOVar8 = extraout_x1;
  }
                    /* try { // try from 0055c644 to 0065c6b3 has its CatchHandler @ 0055cbec */
  if (0 < *(int *)(param_1 + 200)) {
    lVar11 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      pPVar5 = operator_new(0x28);
      *(undefined8 *)(pPVar5 + 0x18) = 0;
      *(undefined8 *)(pPVar5 + 0x20) = 0;
      *(undefined8 *)(pPVar5 + 8) = 0;
      *(undefined8 *)(pPVar5 + 0x10) = 0;
      *(undefined **)pPVar5 = puVar1;
      local_78 = pPVar5;
      boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_70,pPVar5);
      boost::detail::sp_enable_shared_from_this(&local_78,pPVar5,pPVar5);
      Program::LoadFromProtobufMessage
                (local_78,*(Program **)(*(long *)(param_1 + 0xc0) + lVar11 * 8));
                    /* try { // try from 0055c6b4 to 0065c8c3 has its CatchHandler @ 0055c2e4 */
      pOVar8 = *(ObjectLibrary **)(this + 0x70);
      if (pOVar8 == *(ObjectLibrary **)(this + 0x78)) {
        std::
        vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::Program>,std::allocator<boost::shared_ptr<Caver::Program>>>
                         *)(this + 0x68),pOVar8,&local_78);
        pOVar8 = extraout_x1_00;
        plVar4 = local_70;
      }
      else {
        *(Program **)pOVar8 = local_78;
        *(long **)(pOVar8 + 8) = local_70;
        if (local_70 != (long *)0x0) {
          local_70[1] = local_70[1] + 1;
        }
        *(ObjectLibrary **)(this + 0x70) = pOVar8 + 0x10;
        plVar4 = local_70;
      }
      local_70 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        pOVar8 = extraout_x1_01;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          pOVar8 = extraout_x1_02;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 200));
  }
  puVar1 = PTR_default_instance__007e4a98;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar11 = 0;
    do {
      pOVar10 = *(ObjectTemplate **)(*(long *)(param_1 + 0x18) + lVar11 * 8);
      pOVar6 = operator_new(0x20);
      Proto::ObjectTemplate::ObjectTemplate(pOVar6,pOVar10);
      boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>
                ((shared_ptr<Caver::Proto::ObjectTemplate> *)&local_78,pOVar6);
      plVar4 = local_70;
      pPVar5 = local_78;
      local_78 = (Program *)0x0;
      pOVar6 = *(ObjectTemplate **)puVar1;
      if (*(long *)(pOVar10 + 0x10) != 0) {
        pOVar6 = pOVar10;
      }
      auVar13 = std::
                map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                ::operator[]((map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                              *)(this + 8),*(string **)(*(long *)(pOVar6 + 0x10) + 0x18));
      pOVar8 = auVar13._8_8_;
      puVar7 = auVar13._0_8_;
      if (plVar4 != (long *)0x0) {
        plVar4[1] = plVar4[1] + 1;
      }
      plVar12 = (long *)puVar7[1];
      *puVar7 = pPVar5;
      puVar7[1] = plVar4;
      if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar9 = plVar12[2];
        plVar12[2] = lVar9 + -1;
        pOVar8 = extraout_x1_03;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
          pOVar8 = extraout_x1_04;
        }
      }
      plVar12 = (long *)puVar7[2];
      puVar7[2] = 0;
      if ((plVar12 != (long *)0x0) &&
         (iVar2 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar12 + 8))();
        pOVar8 = extraout_x1_05;
      }
      if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        pOVar8 = extraout_x1_06;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          pOVar8 = extraout_x1_07;
        }
      }
      lVar11 = lVar11 + 1;
                    /* catch() { ... } // from try @ 0055c600 with catch @ 0055c8a4 */
    } while (lVar11 < *(int *)(param_1 + 0x20));
  }
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar11 = 0;
    do {
                    /* try { // try from 0055c8c4 to 0065cb1b has its CatchHandler @ 0055cc40 */
      LibraryWithName(*(ObjectLibrary **)(*(long *)(param_1 + 0x50) + lVar11 * 8),(string *)pOVar8);
      pOVar8 = *(ObjectLibrary **)(this + 0x40);
      if (pOVar8 == (ObjectLibrary *)*(string **)(this + 0x48)) {
        std::
        vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>
                         *)(this + 0x38),pOVar8,&local_78);
        pOVar8 = (ObjectLibrary *)extraout_x1_08;
        plVar4 = local_70;
      }
      else {
        *(Program **)pOVar8 = local_78;
        *(long **)(pOVar8 + 8) = local_70;
        if (local_70 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0055c538 with catch @ 0055c8f0 */
          local_70[1] = local_70[1] + 1;
        }
        *(string **)(this + 0x40) = (string *)(pOVar8 + 0x10);
        plVar4 = local_70;
      }
      local_70 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar9 = plVar4[1], plVar4[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0055c448 with catch @ 0055c93c */
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* catch() { ... } // from try @ 0055c4ec with catch @ 0055c940 */
        lVar9 = plVar4[2];
        plVar4[2] = lVar9 + -1;
        pOVar8 = (ObjectLibrary *)extraout_x1_09;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          pOVar8 = (ObjectLibrary *)extraout_x1_10;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x58));
  }
                    /* catch() { ... } // from try @ 0055c4e0 with catch @ 0055c978 */
                    /* catch() { ... } // from try @ 0055c460 with catch @ 0055c97c */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0055c3e0 with catch @ 0055c980 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


