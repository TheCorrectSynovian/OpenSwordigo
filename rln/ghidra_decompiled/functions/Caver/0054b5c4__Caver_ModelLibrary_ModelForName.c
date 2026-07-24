/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054b5c4
 * Function: Caver::ModelLibrary::ModelForName
 * Signature: undefined __cdecl ModelForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelLibrary::ModelForName(std::string const&) */

void Caver::ModelLibrary::ModelForName(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  PODLoader *pPVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  string *in_x1;
  long *in_x8;
  long lVar10;
  Model *pMVar11;
  int iVar12;
  long *plVar13;
  Model *local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  Model *local_68;
  PODLoader *local_60;
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  psVar5 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                   *)param_1,in_x1);
                    /* catch() { ... } // from try @ 0054b1c4 with catch @ 0054b5f8 */
                    /* catch() { ... } // from try @ 0054abd4 with catch @ 0054b5fc */
  if (param_1 + 8 != psVar5) {
    *in_x8 = *(long *)(psVar5 + 0x28);
    lVar10 = *(long *)(psVar5 + 0x30);
    in_x8[1] = lVar10;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
    goto LAB_0054b8f0;
  }
                    /* catch() { ... } // from try @ 0054b028 with catch @ 0054b628
                       catch() { ... } // from try @ 0054b068 with catch @ 0054b628 */
  pPVar6 = operator_new(0xb8);
  PODLoader::PODLoader(pPVar6);
  local_60 = pPVar6;
  boost::detail::shared_count::shared_count<Caver::PODLoader>((shared_count *)local_58,pPVar6);
  boost::detail::sp_enable_shared_from_this(&local_60,pPVar6,pPVar6);
  pPVar6 = local_60;
  FUN_00666bb8(&local_68,&DAT_0069524f,auStack_70);
  PathForResourceOfType(in_x1,(string *)&local_68);
  uVar7 = PODLoader::ReadModelFromFile(pPVar6,(string *)&local_80);
  puVar4 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0054b260 with catch @ 0054b690 */
                    /* catch() { ... } // from try @ 0054b108 with catch @ 0054b694 */
  if (local_80 + -0x18 != (Model *)PTR_DAT_007e5de8) {
    pMVar11 = local_80 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pMVar11;
      *(int *)pMVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pMVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pMVar11,0x10);
        if (bVar2) {
          *(int *)pMVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_80 + -0x18);
      uVar7 = uVar7 & 0xffffffff;
    }
  }
  if (local_68 + -0x18 == (Model *)puVar4) {
LAB_0054b6b8:
    if ((uVar7 & 1) == 0) goto LAB_0054b8a4;
LAB_0054b6bc:
    PODLoader::CreateModel();
    if (local_80 != (Model *)0x0) {
      FUN_0066a6a8();
      plVar8 = (long *)std::
                       map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                       ::operator[]((map<std::string,boost::shared_ptr<Caver::Model_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                                     *)param_1,in_x1);
      if (local_78 != (long *)0x0) {
        local_78[1] = local_78[1] + 1;
      }
      plVar13 = (long *)plVar8[1];
                    /* catch() { ... } // from try @ 0054b100 with catch @ 0054b6fc */
      *plVar8 = (long)local_80;
      plVar8[1] = (long)local_78;
      if ((plVar13 != (long *)0x0) &&
         (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar10 = plVar13[2];
        plVar13[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
                    /* catch() { ... } // from try @ 0054ae40 with catch @ 0054b748 */
      local_68 = local_80;
      puVar9 = (undefined8 *)
               std::
               map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
               ::operator[]((map<Caver::Model_const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                             *)(param_1 + 0x30),&local_68);
      if (local_58[0] != (long *)0x0) {
        local_58[0][1] = local_58[0][1] + 1;
      }
      plVar8 = (long *)puVar9[1];
      *puVar9 = local_60;
      puVar9[1] = local_58[0];
      if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)
         ) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* catch() { ... } // from try @ 0054b080 with catch @ 0054b798 */
        lVar10 = plVar8[2];
        plVar8[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
    }
                    /* try { // try from 0054b7c0 to 0064ba93 has its CatchHandler @ 0054aae4 */
    *in_x8 = (long)local_80;
    in_x8[1] = (long)local_78;
                    /* catch() { ... } // from try @ 0054b278 with catch @ 0054b7c4
                       catch() { ... } // from try @ 0054b2b8 with catch @ 0054b7c4 */
    if ((local_78 != (long *)0x0) && (local_78[1] == 0)) {
      (**(code **)(*local_78 + 0x10))(local_78);
      lVar10 = local_78[2];
      local_78[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_78 + 0x18))(local_78);
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 0054b244 with catch @ 0054b828
                       catch() { ... } // from try @ 0054b294 with catch @ 0054b828 */
                    /* catch() { ... } // from try @ 0054ac10 with catch @ 0054b82c */
                    /* catch() { ... } // from try @ 0054ac40 with catch @ 0054b830
                       catch() { ... } // from try @ 0054b194 with catch @ 0054b830
                       catch() { ... } // from try @ 0054b224 with catch @ 0054b830 */
    pMVar11 = local_68 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pMVar11;
      *(int *)pMVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pMVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pMVar11,0x10);
        if (bVar2) {
          *(int *)pMVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar12) goto LAB_0054b6b8;
    operator_delete(local_68 + -0x18);
                    /* catch() { ... } // from try @ 0054af44 with catch @ 0054b89c */
    if ((uVar7 & 1) != 0) goto LAB_0054b6bc;
LAB_0054b8a4:
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  if ((local_58[0] != (long *)0x0) &&
     (lVar10 = local_58[0][1], local_58[0][1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_58[0] + 0x10))(local_58[0]);
    lVar10 = local_58[0][2];
                    /* catch() { ... } // from try @ 0054af1c with catch @ 0054b8d4 */
    local_58[0][2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_58[0] + 0x18))(local_58[0]);
    }
  }
LAB_0054b8f0:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


