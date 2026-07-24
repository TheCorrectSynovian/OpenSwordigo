/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c3480
 * Function: Caver::FontLibrary::FontWithName
 * Signature: undefined __cdecl FontWithName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontLibrary::FontWithName(std::string const&) */

void Caver::FontLibrary::FontWithName(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  Font *pFVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  string *in_x1;
  long *in_x8;
  long lVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  Font *pFVar15;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long local_78;
  Font *local_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long local_58;
  
                    /* try { // try from 005c3484 to 006c3587 has its CatchHandler @ 005c378c */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  psVar5 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
                   *)param_1,in_x1);
  if (param_1 + 8 == psVar5) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(psVar5 + 0x30);
    if ((plVar13 == (long *)0x0) || (lVar10 = plVar13[1], lVar10 == 0)) {
      plVar13 = (long *)0x0;
      *in_x8 = 0;
      in_x8[1] = 0;
    }
    else {
      lVar14 = *(long *)(psVar5 + 0x28);
      plVar13[1] = lVar10 + 2;
      *in_x8 = lVar14;
      in_x8[1] = (long)plVar13;
      plVar13[1] = lVar10 + 1;
      if (lVar10 + 1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar10 = plVar13[2];
        plVar13[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      if (lVar14 != 0) goto LAB_005c3788;
    }
  }
  pFVar15 = (Font *)0x0;
  pFVar6 = operator_new(0x60);
  memset(pFVar6,0,0x60);
  puVar4 = PTR_DAT_007e5de8;
  *(undefined8 *)(pFVar6 + 0x54) = 0;
  *(undefined8 *)(pFVar6 + 0x4c) = 0;
  *(undefined8 *)(pFVar6 + 0x38) = 0;
  *(undefined8 *)(pFVar6 + 0x40) = 0;
  *(undefined8 *)(pFVar6 + 0x28) = 0;
  *(undefined8 *)(pFVar6 + 0x30) = 0;
  *(undefined8 *)(pFVar6 + 0x18) = 0;
  *(undefined8 *)(pFVar6 + 0x20) = 0;
                    /* try { // try from 005c3588 to 006c378f has its CatchHandler @ 005c2f98 */
  *(undefined8 *)(pFVar6 + 8) = 0;
  *(undefined8 *)(pFVar6 + 0x10) = 0;
  *(undefined **)pFVar6 = puVar4 + 0x18;
  local_70 = pFVar6;
  boost::detail::shared_count::shared_count<Caver::Font>((shared_count *)&plStack_68,pFVar6);
  boost::detail::sp_enable_shared_from_this(&local_70,pFVar6,pFVar6);
  pFVar6 = local_70;
  *in_x8 = (long)local_70;
  in_x8[1] = (long)plStack_68;
  local_70 = pFVar15;
  plStack_68 = plVar13;
  if ((plVar13 != (long *)0x0) && (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar10 = plVar13[2];
    plVar13[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if (param_1[0x30] == (string)0x0) {
LAB_005c36b4:
    FUN_0035a030(&local_78,"font_");
    FUN_00666bb8(&local_80,&DAT_00697cf7,auStack_60);
    PathForResourceOfType((string *)&local_78,(string *)&local_80);
    uVar7 = Font::LoadFromFile(pFVar6,(string *)&local_70);
    if (local_70 + -0x18 != (Font *)puVar4) {
      pFVar6 = local_70 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *(int *)pFVar6;
        *(int *)pFVar6 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *(int *)pFVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pFVar6,0x10);
          if (bVar2) {
            *(int *)pFVar6 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_70 + -0x18);
      }
    }
    if ((undefined *)(local_80 + -0x18) != puVar4) {
      piVar11 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar4) {
      piVar11 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if ((uVar7 & 1) == 0) goto LAB_005c3788;
  }
  else {
    FUN_0035a030(&local_80,"font_");
    FUN_0066a528(&local_78,&local_80);
    FUN_006677d4(&local_78,&DAT_00697cf3,3);
    FUN_00666bb8(&local_88,&DAT_00697cf7,auStack_90);
    PathForResourceOfType((string *)&local_78,(string *)&local_88);
    uVar7 = Font::LoadFromFile(pFVar6,(string *)&local_70);
    if (local_70 + -0x18 != (Font *)puVar4) {
      pFVar6 = local_70 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *(int *)pFVar6;
        *(int *)pFVar6 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *(int *)pFVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pFVar6,0x10);
          if (bVar2) {
            *(int *)pFVar6 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete(local_70 + -0x18);
      }
    }
    if ((undefined *)(local_88 + -0x18) != puVar4) {
      piVar11 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_88 + -0x18));
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar4) {
      piVar11 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if ((undefined *)(local_80 + -0x18) != puVar4) {
      piVar11 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((uVar7 & 1) == 0) {
      pFVar6 = (Font *)*in_x8;
      goto LAB_005c36b4;
    }
  }
  plVar8 = (long *)std::
                   map<std::string,boost::weak_ptr<Caver::Font>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
                   ::operator[]((map<std::string,boost::weak_ptr<Caver::Font>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::Font>>>>
                                 *)param_1,in_x1);
  plVar13 = (long *)in_x8[1];
  plVar9 = (long *)plVar8[1];
  *plVar8 = *in_x8;
  if (plVar13 != plVar9) {
    if (plVar13 != (long *)0x0) {
      plVar13[2] = plVar13[2] + 1;
    }
    if ((plVar9 != (long *)0x0) && (lVar10 = plVar9[2], plVar9[2] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar9 + 0x18))();
    }
    plVar8[1] = (long)plVar13;
  }
LAB_005c3788:
                    /* catch() { ... } // from try @ 005c3484 with catch @ 005c378c */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


