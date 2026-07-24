/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055ac60
 * Function: Caver::ObjectLibrary::LibraryWithName
 * Signature: undefined __thiscall LibraryWithName(ObjectLibrary * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::LibraryWithName(std::string const&) */

void __thiscall Caver::ObjectLibrary::LibraryWithName(ObjectLibrary *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ObjectLibrary *pOVar8;
  undefined8 *puVar9;
  long *in_x8;
  int *piVar10;
  int iVar11;
  ObjectLibrary *pOVar12;
  long lVar13;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  long local_168 [2];
  ObjectLibrary *local_158;
  long *aplStack_150 [31];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)std::
                   map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                   ::operator[]((map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                                 *)&DAT_007e9bb8,(string *)this);
  lVar13 = plVar6[1];
  *in_x8 = 0;
  in_x8[1] = lVar13;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 8) == 0) {
      in_x8[1] = 0;
    }
    else {
      *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
      lVar13 = *plVar6;
      *in_x8 = lVar13;
      if (lVar13 != 0) goto LAB_0055af3c;
    }
  }
                    /* try { // try from 0055ace0 to 0065aceb has its CatchHandler @ 0055aed4 */
  FUN_0066a528(local_168,&DAT_007e9bb0);
  puVar4 = PTR_DAT_007e5de8;
  local_170 = PTR_DAT_007e5de8 + 0x18;
  if (*(long *)(local_168[0] + -0x18) == 0) {
    FUN_00666bb8(&local_178,&DAT_0069591e,auStack_180);
    PathForResourceOfType((string *)this,(string *)&local_178);
    FUN_0066a6a8(&local_170,&local_158);
    if (local_158 + -0x18 != (ObjectLibrary *)puVar4) {
      pOVar8 = local_158 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *(int *)pOVar8;
        *(int *)pOVar8 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *(int *)pOVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pOVar8,0x10);
          if (bVar2) {
            *(int *)pOVar8 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
                    /* try { // try from 0055b0b0 to 0065b0b7 has its CatchHandler @ 0055b2d0 */
        operator_delete(local_158 + -0x18);
      }
    }
    puVar7 = (undefined *)(local_178 + -0x18);
    if (puVar7 != puVar4) {
      piVar10 = (int *)(local_178 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0055b05c;
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0055b068;
    }
  }
  else {
    FUN_0066a528(&local_178,this);
                    /* try { // try from 0055ad10 to 0065ad23 has its CatchHandler @ 0055aed0 */
    FUN_006677d4(&local_178,&DAT_0069591d,4);
                    /* try { // try from 0055ad24 to 0065ad33 has its CatchHandler @ 0055ae74 */
    FindFile((string *)&local_178,(string *)local_168);
    FUN_0066a6a8(&local_170,&local_158);
                    /* try { // try from 0055ad48 to 0065ad5b has its CatchHandler @ 0055af50 */
    if (local_158 + -0x18 != (ObjectLibrary *)puVar4) {
      pOVar8 = local_158 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *(int *)pOVar8;
        *(int *)pOVar8 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *(int *)pOVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pOVar8,0x10);
          if (bVar2) {
            *(int *)pOVar8 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(local_158 + -0x18);
      }
    }
    puVar7 = (undefined *)(local_178 + -0x18);
    if (puVar7 != puVar4) {
                    /* try { // try from 0055ad5c to 0065af73 has its CatchHandler @ 0055ac54 */
      piVar10 = (int *)(local_178 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0055b05c:
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
LAB_0055b068:
      if (iVar11 < 1) {
        operator_delete(puVar7);
      }
    }
  }
  if (*(long *)(local_170 + -0x18) == 0) {
    printf("Could not find object library: %s",*(undefined8 *)this);
  }
  else {
    pOVar8 = operator_new(0x88);
    *(undefined **)pOVar8 = puVar4 + 0x18;
    pOVar12 = pOVar8 + 0x10;
    *(undefined8 *)pOVar12 = 0;
    *(undefined8 *)(pOVar8 + 0x18) = 0;
    *(ObjectLibrary **)(pOVar8 + 0x20) = pOVar12;
    *(ObjectLibrary **)(pOVar8 + 0x28) = pOVar12;
    *(undefined8 *)(pOVar8 + 0x30) = 0;
    memset(pOVar8 + 0x38,0,0x4a);
    local_158 = pOVar8;
    boost::detail::shared_count::shared_count<Caver::ObjectLibrary>
              ((shared_count *)aplStack_150,pOVar8);
    boost::detail::sp_enable_shared_from_this(&local_158,pOVar8,pOVar8);
    plVar5 = aplStack_150[0];
    pOVar12 = local_158;
    pOVar8 = (ObjectLibrary *)*in_x8;
    plVar6 = (long *)in_x8[1];
    *in_x8 = (long)local_158;
    in_x8[1] = (long)aplStack_150[0];
    local_158 = pOVar8;
    aplStack_150[0] = plVar6;
    if ((plVar6 != (long *)0x0) && (lVar13 = plVar6[1], plVar6[1] = lVar13 + -1, lVar13 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar13 = plVar6[2];
      plVar6[2] = lVar13 + -1;
                    /* catch() { ... } // from try @ 0055ad24 with catch @ 0055ae74 */
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    Proto::ObjectLibrary::ObjectLibrary((ObjectLibrary *)&local_158);
    LoadProtobufMessageFromFile((MessageLite *)&local_158,(string *)&local_170);
    LoadFromProtobufMessage(pOVar12,(ObjectLibrary *)&local_158);
    Proto::ObjectLibrary::~ObjectLibrary((ObjectLibrary *)&local_158);
    puVar9 = (undefined8 *)
             std::
             map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
             ::operator[]((map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                           *)&DAT_007e9bb8,(string *)this);
    plVar6 = (long *)puVar9[1];
    *puVar9 = pOVar12;
                    /* catch() { ... } // from try @ 0055ad10 with catch @ 0055aed0 */
    if (plVar6 != plVar5) {
                    /* catch() { ... } // from try @ 0055ace0 with catch @ 0055aed4 */
      if (plVar5 != (long *)0x0) {
        plVar5[2] = plVar5[2] + 1;
      }
      if ((plVar6 != (long *)0x0) && (lVar13 = plVar6[2], plVar6[2] = lVar13 + -1, lVar13 + -1 == 0)
         ) {
        (**(code **)(*plVar6 + 0x18))();
      }
      puVar9[1] = plVar5;
    }
  }
  if (local_170 + -0x18 != puVar4) {
    piVar10 = (int *)(local_170 + -8);
                    /* try { // try from 0055af74 to 0065af9b has its CatchHandler @ 0055afa4 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_170 + -0x18);
    }
  }
  if ((undefined *)(local_168[0] + -0x18) != puVar4) {
    piVar10 = (int *)(local_168[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0055aff4 to 0065aff7 has its CatchHandler @ 0055b380 */
      iVar11 = *piVar10;
                    /* try { // try from 0055aff8 to 0065b0af has its CatchHandler @ 0055afa8 */
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
                    /* try { // try from 0055af9c to 0065afa7 has its CatchHandler @ 0055ac54 */
        iVar11 = *piVar10;
                    /* catch() { ... } // from try @ 0055af74 with catch @ 0055afa4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 0055aff8 with catch @ 0055afa8
                       catch() { ... } // from try @ 0055b16c with catch @ 0055afa8
                       catch() { ... } // from try @ 0055b318 with catch @ 0055afa8
                       catch() { ... } // from try @ 0055b3c8 with catch @ 0055afa8 */
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_168[0] + -0x18));
    }
  }
LAB_0055af3c:
                    /* catch() { ... } // from try @ 0055acc8 with catch @ 0055af44 */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0055ad48 with catch @ 0055af50 */
  return;
}


