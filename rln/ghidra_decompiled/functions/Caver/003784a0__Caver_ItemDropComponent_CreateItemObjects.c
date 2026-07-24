/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003784a0
 * Function: Caver::ItemDropComponent::CreateItemObjects
 * Signature: undefined __thiscall CreateItemObjects(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemDropComponent::CreateItemObjects() */

void __thiscall Caver::ItemDropComponent::CreateItemObjects(ItemDropComponent *this)

{
  string *psVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  SceneObject *this_00;
  GameState *this_01;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  SceneObject *local_b8;
  long *local_b0;
  long *plStack_a8;
  undefined8 local_98;
  long local_90;
  long local_88;
  
  puVar6 = PTR_DAT_007e5de8;
  fVar24 = DAT_00683488;
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  local_98 = 0;
  local_90 = 0;
  iVar9 = *(int *)(this + 0x88);
  if (0 < iVar9) {
    if (this[0x70] == (ItemDropComponent)0x0) {
      lVar18 = *(long *)(this + 0x90);
      iVar11 = fastrandom();
      lVar21 = 0;
      lVar20 = 0;
      fVar24 = 0.0;
      do {
        fVar24 = fVar24 + *(float *)(lVar18 + 0x10 + lVar21);
        if ((float)iVar11 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 < fVar24 + DAT_00683488) {
          if (-1 < (int)lVar20) {
            lVar18 = *(long *)(this + 0x90);
            lVar20 = lVar18 + lVar21;
            iVar9 = *(int *)(lVar20 + 0x14);
            iVar10 = fastrandom();
            puVar6 = PTR_DAT_007e5de8;
            iVar12 = (*(int *)(lVar20 + 0x18) + 1) - *(int *)(lVar20 + 0x14);
            iVar11 = 0;
            if (iVar12 != 0) {
              iVar11 = iVar10 / iVar12;
            }
            iVar9 = (iVar10 - iVar11 * iVar12) + iVar9;
            if (0 < iVar9) {
              lVar18 = lVar18 + lVar21;
              plVar16 = (long *)(PTR_DAT_007e5de8 + 0x18);
              iVar11 = 0;
              do {
                local_b0 = plVar16;
                plStack_a8 = plVar16;
                FUN_0066a6a8(&local_b0,lVar18);
                FUN_0066a6a8((ulong)&local_b0 | 8,lVar18 + 8);
                iVar12 = (int)local_98;
                if (local_98._4_4_ <= (int)local_98) {
                  iVar12 = local_98._4_4_ * 2;
                  if (iVar12 < 0xb) {
                    iVar12 = 10;
                  }
                  FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                            ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar12);
                  iVar12 = (int)local_98;
                }
                lVar20 = local_90;
                FUN_0066a6a8(local_90 + (long)iVar12 * 0x10,&local_b0);
                FUN_0066a6a8(lVar20 + (long)iVar12 * 0x10 + 8,(ulong)&local_b0 | 8);
                local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
                if (plStack_a8 + -3 != (long *)puVar6) {
                  plVar17 = plStack_a8 + -1;
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar12 = (int)*plVar17;
                    *(int *)plVar17 = iVar12 + -1;
                  }
                  else {
                    do {
                      iVar12 = (int)*plVar17;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar4) {
                        *(int *)plVar17 = iVar12 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar12 < 1) {
                    operator_delete(plStack_a8 + -3);
                  }
                }
                if (local_b0 + -3 != (long *)puVar6) {
                  plVar17 = local_b0 + -1;
                  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    iVar12 = (int)*plVar17;
                    *(int *)plVar17 = iVar12 + -1;
                  }
                  else {
                    do {
                      iVar12 = (int)*plVar17;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar4) {
                        *(int *)plVar17 = iVar12 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  if (iVar12 < 1) {
                    operator_delete(local_b0 + -3);
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar9);
            }
          }
          break;
        }
        lVar20 = lVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while (lVar20 < iVar9);
    }
    else {
      plVar16 = (long *)(PTR_DAT_007e5de8 + 0x18);
      lVar20 = 0;
      do {
        iVar9 = fastrandom();
        lVar18 = *(long *)(this + 0x90);
        lVar21 = lVar18 + lVar20 * 0x20;
        if ((float)iVar9 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 <
            *(float *)(lVar21 + 0x10) + fVar24) {
          piVar19 = (int *)(lVar21 + 0x14);
          iVar9 = *piVar19;
          iVar10 = fastrandom();
          lVar18 = lVar18 + lVar20 * 0x20;
          iVar12 = (*(int *)(lVar18 + 0x18) + 1) - *piVar19;
          iVar11 = 0;
          if (iVar12 != 0) {
            iVar11 = iVar10 / iVar12;
          }
          iVar9 = (iVar10 - iVar11 * iVar12) + iVar9;
          if (0 < iVar9) {
            iVar11 = 0;
            do {
              local_b0 = plVar16;
              plStack_a8 = plVar16;
              FUN_0066a6a8(&local_b0,lVar18);
              FUN_0066a6a8((ulong)&local_b0 | 8,lVar18 + 8);
              iVar12 = (int)local_98;
              if (local_98._4_4_ <= (int)local_98) {
                iVar12 = local_98._4_4_ * 2;
                if (iVar12 < 0xb) {
                  iVar12 = 10;
                }
                FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                          ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar12);
                iVar12 = (int)local_98;
              }
              lVar21 = local_90;
              FUN_0066a6a8(local_90 + (long)iVar12 * 0x10,&local_b0);
              FUN_0066a6a8(lVar21 + (long)iVar12 * 0x10 + 8,(ulong)&local_b0 | 8);
              local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
              if (plStack_a8 + -3 != (long *)puVar6) {
                plVar17 = plStack_a8 + -1;
                if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                  iVar12 = (int)*plVar17;
                  *(int *)plVar17 = iVar12 + -1;
                }
                else {
                  do {
                    iVar12 = (int)*plVar17;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar4) {
                      *(int *)plVar17 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                if (iVar12 < 1) {
                  operator_delete(plStack_a8 + -3);
                }
              }
              if (local_b0 + -3 != (long *)puVar6) {
                plVar17 = local_b0 + -1;
                if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                  iVar12 = (int)*plVar17;
                  *(int *)plVar17 = iVar12 + -1;
                }
                else {
                  do {
                    iVar12 = (int)*plVar17;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar4) {
                      *(int *)plVar17 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                if (iVar12 < 1) {
                  operator_delete(local_b0 + -3);
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar9);
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(this + 0x88));
    }
  }
  if ((this[0x71] == (ItemDropComponent)0x0) ||
     (((int)local_98 != 0 && (this[0x70] == (ItemDropComponent)0x0)))) goto LAB_00378cac;
  lVar20 = SceneObject::ComponentWithInterface
                     (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e4ff0);
  fVar24 = DAT_006882c0;
  fVar22 = DAT_006884c8;
  if (lVar20 != 0) {
    FUN_0066a528(&local_b0,lVar20 + 0x78);
    iVar9 = FUN_006689e0(&local_b0,&DAT_00688550);
    if (local_b0 + -3 != (long *)PTR_DAT_007e5de8) {
      plVar16 = local_b0 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = (int)*plVar16;
        *(int *)plVar16 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = (int)*plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete(local_b0 + -3);
      }
    }
    fVar24 = *(float *)(&DAT_00688480 + (ulong)(iVar9 == 0) * 4);
    fVar22 = 0.25;
    if (iVar9 != 0) {
      fVar22 = DAT_006884c8;
    }
  }
  lVar18 = *(long *)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
  lVar21 = 0;
  if (lVar18 != 0) {
    lVar21 = lVar18 + 0x10;
  }
  iVar9 = fastrandom();
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_FASTRANDOM_MAX_007e4b68;
  fVar23 = (float)iVar9 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68;
  if (fVar23 < fVar22 + 0.0 + DAT_00683488) {
    if (lVar20 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(lVar20 + 0x90);
    }
    lVar20 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7450);
    if (lVar20 == 0) {
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(lVar20 + 0x84);
    }
    iVar12 = fastrandom();
    iVar10 = *(int *)puVar6;
    if (0x13 < iVar11) {
      iVar11 = 0x14;
    }
    iVar13 = fastrandom();
    if (DAT_00687988 <= (float)iVar13 / (float)*(int *)puVar6) {
      iVar13 = fastrandom();
      fVar22 = 0.5;
    }
    else {
      iVar13 = fastrandom();
      fVar22 = 1.5;
    }
    puVar8 = PTR_DAT_007e5de8;
    puVar7 = PTR_pthread_create_007e4e78;
    fVar23 = DAT_00684320;
    fVar24 = fVar24 * (((float)iVar9 * DAT_006884cc) / 20.0 + 1.0) *
             (((((float)iVar12 / (float)iVar10) * (float)iVar11) / 20.0) * 3.0 + 1.0) *
             (fVar22 + (float)iVar13 / (float)*(int *)puVar6);
    if (fVar24 <= 1.0) {
      fVar24 = 1.0;
    }
    if (DAT_00684320 <= fVar24) {
      plVar16 = (long *)(PTR_DAT_007e5de8 + 0x18);
      do {
        local_b0 = plVar16;
        plStack_a8 = plVar16;
        FUN_0066918c(&local_b0,"sshard_yellow",0xd);
        iVar9 = (int)local_98;
        if (local_98._4_4_ <= (int)local_98) {
          iVar9 = local_98._4_4_ * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                    ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar9);
          iVar9 = (int)local_98;
        }
        lVar20 = local_90;
        FUN_0066a6a8(local_90 + (long)iVar9 * 0x10,&local_b0);
        FUN_0066a6a8(lVar20 + (long)iVar9 * 0x10 + 8,(ulong)&local_b0 | 8);
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
        if (plStack_a8 + -3 != (long *)puVar8) {
          plVar17 = plStack_a8 + -1;
          if (puVar7 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(plStack_a8 + -3);
          }
        }
        if (local_b0 + -3 != (long *)puVar8) {
          plVar17 = local_b0 + -1;
          if (puVar7 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_b0 + -3);
          }
        }
        fVar24 = fVar24 + -20.0;
      } while (fVar23 <= fVar24);
    }
    puVar7 = PTR_DAT_007e5de8;
    puVar6 = PTR_pthread_create_007e4e78;
    if (5.0 <= fVar24) {
      plVar16 = (long *)(PTR_DAT_007e5de8 + 0x18);
      do {
        local_b0 = plVar16;
        plStack_a8 = plVar16;
        FUN_0066918c(&local_b0,"sshard_red",10);
        iVar9 = (int)local_98;
        if (local_98._4_4_ <= (int)local_98) {
          iVar9 = local_98._4_4_ * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                    ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar9);
          iVar9 = (int)local_98;
        }
        lVar20 = local_90;
        FUN_0066a6a8(local_90 + (long)iVar9 * 0x10,&local_b0);
        FUN_0066a6a8(lVar20 + (long)iVar9 * 0x10 + 8,(ulong)&local_b0 | 8);
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
        if (plStack_a8 + -3 != (long *)puVar7) {
          plVar17 = plStack_a8 + -1;
          if (puVar6 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(plStack_a8 + -3);
          }
        }
        if (local_b0 + -3 != (long *)puVar7) {
          plVar17 = local_b0 + -1;
          if (puVar6 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_b0 + -3);
          }
        }
        fVar24 = fVar24 + -5.0;
      } while (5.0 <= fVar24);
    }
    puVar7 = PTR_DAT_007e5de8;
    puVar6 = PTR_pthread_create_007e4e78;
    if (1.0 <= fVar24) {
      plVar16 = (long *)(PTR_DAT_007e5de8 + 0x18);
      do {
        local_b0 = plVar16;
        plStack_a8 = plVar16;
        FUN_0066918c(&local_b0,"sshard_blue",0xb);
        iVar9 = (int)local_98;
        if (local_98._4_4_ <= (int)local_98) {
          iVar9 = local_98._4_4_ * 2;
          if (iVar9 < 0xb) {
            iVar9 = 10;
          }
          FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                    ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar9);
          iVar9 = (int)local_98;
        }
        lVar20 = local_90;
        FUN_0066a6a8(local_90 + (long)iVar9 * 0x10,&local_b0);
        FUN_0066a6a8(lVar20 + (long)iVar9 * 0x10 + 8,(ulong)&local_b0 | 8);
        local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
        if (plStack_a8 + -3 != (long *)puVar7) {
          plVar17 = plStack_a8 + -1;
          if (puVar6 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(plStack_a8 + -3);
          }
        }
        if (local_b0 + -3 != (long *)puVar7) {
          plVar17 = local_b0 + -1;
          if (puVar6 == (undefined *)0x0) {
            iVar9 = (int)*plVar17;
            *(int *)plVar17 = iVar9 + -1;
          }
          else {
            do {
              iVar9 = (int)*plVar17;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar4) {
                *(int *)plVar17 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar9 < 1) {
            operator_delete(local_b0 + -3);
          }
        }
        fVar24 = fVar24 + -1.0;
      } while (1.0 <= fVar24);
    }
    goto LAB_00378cac;
  }
  fVar24 = fVar22 + 0.0 + DAT_00684318;
  if (fVar24 + DAT_00683488 <= fVar23) {
    if (((fVar24 + _DAT_00684434 + DAT_00683488 <= fVar23) || (lVar21 == 0)) ||
       (*(int *)(lVar21 + 0xb4) * 0x14 + 10 <= *(int *)(lVar21 + 0x9c))) goto LAB_00378cac;
    local_b0 = (long *)(PTR_DAT_007e5de8 + 0x18);
    plStack_a8 = local_b0;
    FUN_0066918c(&local_b0,"nugget_mana",0xb);
    iVar9 = (int)local_98;
    if (local_98._4_4_ <= (int)local_98) {
      iVar9 = local_98._4_4_ * 2;
      if (iVar9 < 0xb) {
        iVar9 = 10;
      }
      FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar9);
      iVar9 = (int)local_98;
    }
    lVar20 = local_90;
    FUN_0066a6a8(local_90 + (long)iVar9 * 0x10,&local_b0);
    FUN_0066a6a8(lVar20 + (long)iVar9 * 0x10 + 8,(ulong)&local_b0 | 8);
    local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
    if (plStack_a8 + -3 != (long *)puVar7) {
      plVar16 = plStack_a8 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = (int)*plVar16;
        *(int *)plVar16 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = (int)*plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(plStack_a8 + -3);
      }
    }
    plVar16 = local_b0 + -3;
    if (plVar16 == (long *)puVar7) goto LAB_00378cac;
    plVar17 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_003792d4;
    do {
      iVar9 = (int)*plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if ((lVar18 == 0) || (*(int *)(lVar21 + 0xac) * 2 + 4 <= *(int *)(lVar21 + 0x98)))
    goto LAB_00378cac;
    local_b0 = (long *)(PTR_DAT_007e5de8 + 0x18);
    plStack_a8 = local_b0;
    FUN_0066918c(&local_b0,&DAT_0068857f,0xd);
    iVar9 = (int)local_98;
    if (local_98._4_4_ <= (int)local_98) {
      iVar9 = local_98._4_4_ * 2;
      if (iVar9 < 0xb) {
        iVar9 = 10;
      }
      FastVector<Caver::ItemDropComponent::ItemDrop>::Resize
                ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98,iVar9);
      iVar9 = (int)local_98;
    }
    lVar20 = local_90;
    FUN_0066a6a8(local_90 + (long)iVar9 * 0x10,&local_b0);
    FUN_0066a6a8(lVar20 + (long)iVar9 * 0x10 + 8,(ulong)&local_b0 | 8);
    local_98 = CONCAT44(local_98._4_4_,(int)local_98 + 1);
    if (plStack_a8 + -3 != (long *)puVar7) {
      plVar16 = plStack_a8 + -1;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = (int)*plVar16;
        *(int *)plVar16 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = (int)*plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(plStack_a8 + -3);
      }
    }
    plVar16 = local_b0 + -3;
    if (plVar16 == (long *)puVar7) goto LAB_00378cac;
    plVar17 = local_b0 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_003792d4:
      iVar9 = (int)*plVar17;
      *(int *)plVar17 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = (int)*plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (iVar9 < 1) {
    operator_delete(plVar16);
  }
LAB_00378cac:
  puVar6 = PTR_Interface_007e57a8;
  if (0 < (int)local_98) {
    lVar20 = 0;
    lVar21 = 8;
    do {
      ObjectLibrary::TemplateForName
                (*(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0),
                 (bool)((char)local_90 + (char)lVar21 + -8));
      if (local_b0 != (long *)0x0) {
        this_00 = operator_new(0x128);
        SceneObject::SceneObject(this_00);
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        local_b8 = this_00;
        SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)&local_b0);
        SceneObject::SetIdentifier(local_b8,(string *)(local_90 + lVar21));
        lVar18 = SceneObject::ComponentWithInterface(local_b8,(long)puVar6);
        if ((lVar18 == 0) ||
           (psVar1 = (string *)(local_90 + lVar21), *(long *)(*(long *)psVar1 + -0x18) == 0)) {
LAB_00378da4:
          puVar2 = *(undefined8 **)(this + 0xa0);
          if (puVar2 == *(undefined8 **)(this + 0xa8)) {
            std::
            vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
            ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                             *)(this + 0x98),puVar2,&local_b8);
          }
          else {
            *puVar2 = local_b8;
            if (local_b8 != (SceneObject *)0x0) {
              *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
            }
            *(undefined8 **)(this + 0xa0) = puVar2 + 1;
          }
        }
        else {
          this_01 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
          if (this_01 == (GameState *)0x0) {
            lVar14 = local_90 + lVar20 * 0x10 + 8;
LAB_00378d9c:
            FUN_0066a6a8(lVar18 + 0x80,lVar14);
            goto LAB_00378da4;
          }
          lVar14 = GameState::CurrentLevelState(this_01,true);
          uVar15 = StateProperties::HasFlag((StateProperties *)(lVar14 + 0x10),psVar1);
          if ((uVar15 & 1) == 0) {
            lVar14 = local_90 + lVar21;
            goto LAB_00378d9c;
          }
        }
        if ((local_b8 != (SceneObject *)0x0) &&
           (iVar9 = *(int *)(local_b8 + 8), *(int *)(local_b8 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*(long *)local_b8 + 8))();
        }
        if ((local_b0 != (long *)0x0) &&
           (iVar9 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar9, iVar9 == 0)) {
          (**(code **)(*local_b0 + 8))();
        }
      }
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 0x10;
    } while (lVar20 < (int)local_98);
  }
  FastVector<Caver::ItemDropComponent::ItemDrop>::~FastVector
            ((FastVector<Caver::ItemDropComponent::ItemDrop> *)&local_98);
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


