/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bad18
 * Function: Caver::Map::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Map * this, Map * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&) */

void __thiscall Caver::Map::LoadFromProtobufMessage(Map *this,Map *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  MapZone *pMVar6;
  long *plVar7;
  MapNode *pMVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  MapZone *pMVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  long local_a0;
  MapNode *local_98;
  long *local_90 [2];
  MapZone *local_80;
  undefined8 local_78;
  undefined2 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar23 = 0;
    lVar18 = 0;
    puVar20 = PTR_pthread_create_007e4e78;
    do {
      pMVar21 = *(MapZone **)(*(long *)(param_1 + 0x10) + lVar23 * 8);
      pMVar6 = operator_new(0x38);
      MapZone::MapZone(pMVar6);
      local_80 = pMVar6;
      boost::detail::shared_count::shared_count<Caver::MapZone>((shared_count *)&local_78,pMVar6);
      boost::detail::sp_enable_shared_from_this(&local_80,pMVar6,pMVar6);
      MapZone::LoadFromProtobufMessage(local_80,pMVar21);
      FUN_0066a528(&local_98,local_80);
      plVar7 = (long *)std::
                       map<std::string,boost::shared_ptr<Caver::MapZone>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                       ::operator[]((map<std::string,boost::shared_ptr<Caver::MapZone>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                                     *)(this + 0x48),(string *)&local_98);
      if (local_78 != (long *)0x0) {
        local_78[1] = local_78[1] + 1;
      }
      plVar22 = (long *)plVar7[1];
      *plVar7 = (long)local_80;
      plVar7[1] = (long)local_78;
      if ((plVar22 != (long *)0x0) &&
         (lVar11 = plVar22[1], plVar22[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        lVar11 = plVar22[2];
        plVar22[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
        }
      }
      if (local_98 + -0x18 != (MapNode *)PTR_DAT_007e5de8) {
        pMVar8 = local_98 + -8;
        if (puVar20 == (undefined *)0x0) {
          iVar15 = *(int *)pMVar8;
          *(int *)pMVar8 = iVar15 + -1;
        }
        else {
          do {
            iVar15 = *(int *)pMVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pMVar8,0x10);
            if (bVar2) {
              *(int *)pMVar8 = iVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar15 < 1) {
          operator_delete(local_98 + -0x18);
        }
      }
      if (0 < *(int *)(pMVar21 + 0x28)) {
        lVar11 = 0;
        lVar18 = (long)(int)lVar18;
        do {
          pMVar8 = operator_new(0x78);
          MapNode::MapNode(pMVar8);
          local_98 = pMVar8;
          boost::detail::shared_count::shared_count<Caver::MapNode>((shared_count *)local_90,pMVar8)
          ;
          boost::detail::sp_enable_shared_from_this(&local_98,pMVar8,pMVar8);
          *(long *)local_98 = lVar18;
          *(MapZone **)(local_98 + 0x28) = local_80;
          MapNode::LoadFromProtobufMessage
                    (local_98,*(MapNode **)(*(long *)(pMVar21 + 0x20) + lVar11 * 8));
          puVar5 = *(undefined8 **)(this + 8);
          if (puVar5 == *(undefined8 **)(this + 0x10)) {
            std::
            vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
            ::_M_insert_aux((vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                             *)this,puVar5,&local_98);
          }
          else {
            *puVar5 = local_98;
            puVar5[1] = local_90[0];
            if (local_90[0] != (long *)0x0) {
              local_90[0][1] = local_90[0][1] + 1;
            }
            *(undefined8 **)(this + 8) = puVar5 + 2;
          }
          FUN_0066a528(&local_a0,local_98 + 0x10);
          plVar7 = (long *)std::
                           map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                           ::operator[]((map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                                         *)(this + 0x18),(string *)&local_a0);
          if (local_90[0] != (long *)0x0) {
            local_90[0][1] = local_90[0][1] + 1;
          }
          plVar22 = (long *)plVar7[1];
          *plVar7 = (long)local_98;
          plVar7[1] = (long)local_90[0];
          if ((plVar22 != (long *)0x0) &&
             (lVar13 = plVar22[1], plVar22[1] = lVar13 + -1, lVar13 + -1 == 0)) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            lVar13 = plVar22[2];
            plVar22[2] = lVar13 + -1;
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar22 + 0x18))(plVar22);
            }
          }
          if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
            piVar12 = (int *)(local_a0 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar15 = *piVar12;
              *piVar12 = iVar15 + -1;
            }
            else {
              do {
                iVar15 = *piVar12;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar2) {
                  *piVar12 = iVar15 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar15 < 1) {
              operator_delete((undefined *)(local_a0 + -0x18));
            }
          }
          plVar7 = *(long **)(local_80 + 0x18);
          if (plVar7 == *(long **)(local_80 + 0x20)) {
            std::
            vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
            ::_M_insert_aux((vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                             *)(local_80 + 0x10),plVar7,&local_98);
            plVar7 = local_90[0];
          }
          else {
            *plVar7 = (long)local_98;
            plVar7[1] = (long)local_90[0];
            if (local_90[0] != (long *)0x0) {
              local_90[0][1] = local_90[0][1] + 1;
            }
            *(long **)(local_80 + 0x18) = plVar7 + 2;
            plVar7 = local_90[0];
          }
          local_90[0] = plVar7;
          if ((plVar7 != (long *)0x0) &&
             (lVar13 = plVar7[1], plVar7[1] = lVar13 + -1, lVar13 + -1 == 0)) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            lVar13 = plVar7[2];
            plVar7[2] = lVar13 + -1;
            if (lVar13 + -1 == 0) {
              (**(code **)(*plVar7 + 0x18))(plVar7);
            }
          }
          lVar11 = lVar11 + 1;
          lVar18 = lVar18 + 1;
          puVar20 = PTR_pthread_create_007e4e78;
        } while (lVar11 < *(int *)(pMVar21 + 0x28));
      }
      plVar7 = local_78;
      if ((local_78 != (long *)0x0) &&
         (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        lVar11 = plVar7[2];
        plVar7[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < *(int *)(param_1 + 0x18));
  }
  plVar22 = *(long **)(this + 8);
  plVar7 = *(long **)this;
  if ((long)plVar22 - (long)plVar7 != 0) {
    if (plVar7 != plVar22) {
      uVar19 = (((long)plVar22 - (long)plVar7) - 0x10U >> 4) + 1;
      plVar10 = plVar7;
      if (2 < uVar19) {
        uVar16 = uVar19 & 0x1ffffffffffffffe;
        plVar10 = plVar7 + 2;
        uVar17 = uVar16;
        do {
          lVar18 = *plVar10;
          uVar17 = uVar17 - 2;
          *(undefined1 *)(plVar10[-2] + 0x5c) = 0;
          *(undefined1 *)(lVar18 + 0x5c) = 0;
          plVar10 = plVar10 + 4;
        } while (uVar17 != 0);
        plVar10 = plVar7 + uVar16 * 2;
        if (uVar19 == uVar16) goto LAB_004bae08;
      }
      do {
        plVar9 = plVar10 + 2;
        *(undefined1 *)(*plVar10 + 0x5c) = 0;
        plVar10 = plVar9;
      } while (plVar22 != plVar9);
    }
LAB_004bae08:
    pMVar8 = (MapNode *)*plVar7;
    *(undefined8 *)(pMVar8 + 8) = 0;
    pMVar8[0x5c] = (MapNode)0x1;
    RecursivelySetNodePositions(this,pMVar8);
    plVar7 = *(long **)this;
    plVar22 = *(long **)(this + 8);
    if (plVar7 == plVar22) goto LAB_004bb098;
    fVar24 = 3.4028235e+38;
    fVar25 = 3.4028235e+38;
    uVar26 = NEON_fmov(0xc1800000,4);
    plVar10 = plVar7;
    do {
      plVar9 = plVar10 + 2;
      uVar28 = *(undefined8 *)(*plVar10 + 8);
      *(undefined1 *)(*plVar10 + 0x5c) = 0;
      fVar27 = (float)uVar28;
      fVar29 = (float)((ulong)uVar28 >> 0x20);
      fVar24 = (float)((uint)fVar24 ^
                      ((uint)fVar24 ^ (uint)(fVar27 + (float)uVar26)) & -(uint)(fVar27 < fVar24));
      fVar25 = (float)((uint)fVar25 ^
                      ((uint)fVar25 ^ (uint)(fVar29 + (float)((ulong)uVar26 >> 0x20))) &
                      -(uint)(fVar29 < fVar25));
      plVar10 = plVar9;
    } while (plVar22 != plVar9);
    plVar10 = plVar7;
    if (plVar7 == plVar22) goto LAB_004bb098;
    do {
      plVar9 = plVar10 + 2;
      uVar26 = *(undefined8 *)(*plVar10 + 8);
      *(ulong *)(*plVar10 + 8) =
           CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar25,(float)uVar26 - fVar24);
      plVar10 = plVar9;
    } while (plVar22 != plVar9);
  }
  puVar20 = PTR_DAT_007e5de8;
  if (plVar7 != plVar22) {
    do {
      lVar23 = *plVar7;
      lVar18 = *(long *)(lVar23 + 0x38) - *(long *)(lVar23 + 0x30);
      if (lVar18 != 0) {
        uVar19 = 0;
        while( true ) {
          if (*(char *)(*(long *)(lVar23 + 0x30) + uVar19 * 0x18 + 0x11) == '\0') {
            lVar23 = *(long *)(lVar23 + 0x30) + uVar19 * 0x18;
            FUN_0066a528(&local_80,lVar23);
            uVar14 = 1;
            local_70 = CONCAT11(1,(char)*(undefined2 *)(lVar23 + 0x10));
            uVar3 = *(int *)(*(long *)(*plVar7 + 0x30) + uVar19 * 0x18 + 8) - 1;
            if (uVar3 < 8) {
              uVar14 = *(undefined4 *)(&DAT_00691f30 + (long)(int)uVar3 * 4);
            }
            local_78 = (long *)CONCAT44((int)((ulong)*(undefined8 *)(lVar23 + 8) >> 0x20),uVar14);
            FUN_0066a528(&local_98,*plVar7 + 0x10);
            FUN_0066a6a8(&local_80,&local_98);
            if (local_98 + -0x18 != (MapNode *)puVar20) {
              pMVar8 = local_98 + -8;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar15 = *(int *)pMVar8;
                *(int *)pMVar8 = iVar15 + -1;
              }
              else {
                do {
                  iVar15 = *(int *)pMVar8;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pMVar8,0x10);
                  if (bVar2) {
                    *(int *)pMVar8 = iVar15 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (iVar15 < 1) {
                operator_delete(local_98 + -0x18);
              }
            }
            puVar5 = (undefined8 *)
                     std::
                     map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                     ::operator[]((map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapNode>>>>
                                   *)(this + 0x18),
                                  (string *)(*(long *)(*plVar7 + 0x30) + uVar19 * 0x18));
            pMVar8 = (MapNode *)*puVar5;
            plVar10 = (long *)puVar5[1];
            if (plVar10 != (long *)0x0) {
              plVar10[1] = plVar10[1] + 1;
            }
            if (pMVar8 != (MapNode *)0x0) {
              MapNode::AddPortal(pMVar8,(Portal *)&local_80);
            }
            if ((plVar10 != (long *)0x0) &&
               (lVar23 = plVar10[1], plVar10[1] = lVar23 + -1, lVar23 + -1 == 0)) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              lVar23 = plVar10[2];
              plVar10[2] = lVar23 + -1;
              if (lVar23 + -1 == 0) {
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
            }
            if (local_80 + -0x18 != (MapZone *)puVar20) {
              pMVar6 = local_80 + -8;
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar15 = *(int *)pMVar6;
                *(int *)pMVar6 = iVar15 + -1;
              }
              else {
                do {
                  iVar15 = *(int *)pMVar6;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pMVar6,0x10);
                  if (bVar2) {
                    *(int *)pMVar6 = iVar15 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (iVar15 < 1) {
                operator_delete(local_80 + -0x18);
              }
            }
          }
          uVar19 = uVar19 + 1;
          if ((ulong)((lVar18 >> 3) * -0x5555555555555555) <= uVar19) break;
          lVar23 = *plVar7;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar22);
  }
LAB_004bb098:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


