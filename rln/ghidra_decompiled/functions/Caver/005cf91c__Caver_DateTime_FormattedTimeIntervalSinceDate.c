/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf91c
 * Function: Caver::DateTime::FormattedTimeIntervalSinceDate
 * Signature: undefined __cdecl FormattedTimeIntervalSinceDate(DateTime * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DateTime::FormattedTimeIntervalSinceDate(Caver::DateTime const&) */

void Caver::DateTime::FormattedTimeIntervalSinceDate(DateTime *param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  double dVar4;
  undefined *puVar5;
  bool bVar6;
  char *pcVar7;
  undefined *puVar8;
  double *in_x1;
  long *in_x8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  double dVar13;
  undefined *local_80;
  long local_78;
  long local_70 [4];
  char acStack_4c [4];
  long local_48;
  
  puVar5 = PTR_DAT_007e5de8;
  dVar4 = _DAT_00691418;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  dVar13 = (*(double *)param_1 - *in_x1) / _DAT_00691418;
  local_80 = PTR_DAT_007e5de8 + 0x18;
  bVar6 = _DAT_00691418 <= dVar13;
  *in_x8 = (long)local_80;
  if (bVar6) {
    dVar13 = dVar13 / dVar4;
    if (24.0 <= dVar13) {
      dVar13 = dVar13 / 24.0;
      if (30.0 <= dVar13) {
        dVar13 = dVar13 / 30.0;
        if (12.0 <= dVar13) {
          uVar12 = (uint)(dVar13 / 12.0);
          local_80 = puVar5 + 0x18;
          uVar1 = uVar12;
          if ((int)uVar12 < 2) {
            uVar1 = 1;
          }
          pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                             (uVar1,acStack_4c);
          FUN_00669e1c(&local_80,0,*(undefined8 *)puVar5,pcVar7,(long)acStack_4c - (long)pcVar7);
          FUN_0066a528(&local_78,&local_80);
          FUN_006677d4(&local_78,&DAT_006923a5,1);
          FUN_0066a528(local_70,&local_78);
          pcVar7 = "year";
          if (1 < (int)uVar12) {
            pcVar7 = "years";
          }
          uVar11 = 4;
          if (1 < (int)uVar12) {
            uVar11 = 5;
          }
          FUN_006677d4(local_70,pcVar7,uVar11);
          FUN_0066a6a8();
          if ((undefined *)(local_70[0] + -0x18) != puVar5) {
                    /* try { // try from 005d0024 to 006d00bb has its CatchHandler @ 005cfe74 */
            piVar9 = (int *)(local_70[0] + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar9;
              *piVar9 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar6) {
                  *piVar9 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_70[0] + -0x18));
            }
          }
          if ((undefined *)(local_78 + -0x18) != puVar5) {
            piVar9 = (int *)(local_78 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar9;
              *piVar9 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar6) {
                  *piVar9 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_78 + -0x18));
            }
          }
          puVar8 = local_80 + -0x18;
          if (puVar8 == puVar5) goto LAB_005cfe58;
          piVar9 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_005d008c;
          do {
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar6) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          uVar12 = (uint)dVar13;
          local_80 = puVar5 + 0x18;
          uVar1 = uVar12;
          if ((int)uVar12 < 2) {
            uVar1 = 1;
          }
          pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                             (uVar1,acStack_4c);
          FUN_00669e1c(&local_80,0,*(undefined8 *)puVar5,pcVar7,(long)acStack_4c - (long)pcVar7);
          FUN_0066a528(&local_78,&local_80);
          FUN_006677d4(&local_78,&DAT_006923a5,1);
          FUN_0066a528(local_70,&local_78);
          pcVar7 = "month";
          if (1 < (int)uVar12) {
            pcVar7 = "months";
          }
          uVar11 = 5;
          if (1 < (int)uVar12) {
            uVar11 = 6;
          }
          FUN_006677d4(local_70,pcVar7,uVar11);
          FUN_0066a6a8();
          if ((undefined *)(local_70[0] + -0x18) != puVar5) {
            piVar9 = (int *)(local_70[0] + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar9;
              *piVar9 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar6) {
                  *piVar9 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_70[0] + -0x18));
            }
          }
          if ((undefined *)(local_78 + -0x18) != puVar5) {
                    /* try { // try from 005cfffc to 006d0023 has its CatchHandler @ 005d01c4 */
            piVar9 = (int *)(local_78 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar10 = *piVar9;
              *piVar9 = iVar10 + -1;
            }
            else {
              do {
                iVar10 = *piVar9;
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                if (bVar6) {
                  *piVar9 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (iVar10 < 1) {
              operator_delete((undefined *)(local_78 + -0x18));
            }
          }
          puVar8 = local_80 + -0x18;
          if (puVar8 == puVar5) goto LAB_005cfe58;
          piVar9 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_005d008c:
            iVar10 = *piVar9;
            *piVar9 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar9;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar6) {
                *piVar9 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
      }
      else {
        uVar12 = (uint)dVar13;
        local_80 = puVar5 + 0x18;
        uVar1 = uVar12;
        if ((int)uVar12 < 2) {
          uVar1 = 1;
        }
        pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                           (uVar1,acStack_4c);
        FUN_00669e1c(&local_80,0,*(undefined8 *)puVar5,pcVar7,(long)acStack_4c - (long)pcVar7);
        FUN_0066a528(&local_78,&local_80);
        FUN_006677d4(&local_78,&DAT_006923a5,1);
        FUN_0066a528(local_70,&local_78);
        uVar11 = 3;
        puVar8 = &DAT_0069800a;
        if (1 < (int)uVar12) {
          uVar11 = 4;
          puVar8 = &DAT_0069800e;
        }
        FUN_006677d4(local_70,puVar8,uVar11);
        FUN_0066a6a8();
        if ((undefined *)(local_70[0] + -0x18) != puVar5) {
          piVar9 = (int *)(local_70[0] + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar9;
            *piVar9 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar9;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar6) {
                *piVar9 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
                    /* try { // try from 005d00bc to 006d00e3 has its CatchHandler @ 005d0174 */
          if (iVar10 < 1) {
            operator_delete((undefined *)(local_70[0] + -0x18));
          }
        }
        if ((undefined *)(local_78 + -0x18) != puVar5) {
          piVar9 = (int *)(local_78 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar10 = *piVar9;
            *piVar9 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar9;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar6) {
                *piVar9 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar10 < 1) {
                    /* try { // try from 005d00e4 to 006d0197 has its CatchHandler @ 005cfe74 */
            operator_delete((undefined *)(local_78 + -0x18));
          }
        }
        puVar8 = local_80 + -0x18;
        if (puVar8 == puVar5) goto LAB_005cfe58;
        piVar9 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_005d008c;
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      uVar12 = (uint)dVar13;
      local_80 = puVar5 + 0x18;
      uVar1 = uVar12;
      if ((int)uVar12 < 2) {
        uVar1 = 1;
      }
      pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                         (uVar1,acStack_4c);
      FUN_00669e1c(&local_80,0,*(undefined8 *)puVar5,pcVar7,(long)acStack_4c - (long)pcVar7);
      FUN_0066a528(&local_78,&local_80);
      FUN_006677d4(&local_78,&DAT_006923a5,1);
      FUN_0066a528(local_70,&local_78);
      pcVar7 = "hour";
      if (1 < (int)uVar12) {
        pcVar7 = "hours";
      }
      uVar11 = 4;
      if (1 < (int)uVar12) {
        uVar11 = 5;
      }
      FUN_006677d4(local_70,pcVar7,uVar11);
      FUN_0066a6a8();
      if ((undefined *)(local_70[0] + -0x18) != puVar5) {
        piVar9 = (int *)(local_70[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar9;
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar6) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_70[0] + -0x18));
        }
      }
      if ((undefined *)(local_78 + -0x18) != puVar5) {
        piVar9 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar10 = *piVar9;
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar6) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      puVar8 = local_80 + -0x18;
      if (puVar8 == puVar5) goto LAB_005cfe58;
      piVar9 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_005d008c;
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    uVar12 = (uint)dVar13;
    uVar1 = uVar12;
    if ((int)uVar12 < 2) {
      uVar1 = 1;
    }
                    /* catch() { ... } // from try @ 005ce860 with catch @ 005cf98c */
    pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_4c);
    FUN_00669e1c(&local_80,0,*(undefined8 *)puVar5,pcVar7,(long)acStack_4c - (long)pcVar7);
    FUN_0066a528(&local_78,&local_80);
    FUN_006677d4(&local_78,&DAT_006923a5,1);
    FUN_0066a528(local_70,&local_78);
                    /* catch() { ... } // from try @ 005ce618 with catch @ 005cf9e8 */
    uVar11 = 6;
    pcVar7 = "minute";
    if (1 < (int)uVar12) {
      uVar11 = 7;
      pcVar7 = "minutes";
    }
    FUN_006677d4(local_70,pcVar7,uVar11);
    FUN_0066a6a8();
    if ((undefined *)(local_70[0] + -0x18) != puVar5) {
      piVar9 = (int *)(local_70[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
                    /* try { // try from 005cff14 to 006cff17 has its CatchHandler @ 005d0218 */
                    /* try { // try from 005cff18 to 006cfffb has its CatchHandler @ 005cfe74 */
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_70[0] + -0x18));
      }
    }
    if ((undefined *)(local_78 + -0x18) != puVar5) {
      piVar9 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar6) {
            *piVar9 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    puVar8 = local_80 + -0x18;
    if (puVar8 == puVar5) goto LAB_005cfe58;
    piVar9 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_005d008c;
    do {
      iVar10 = *piVar9;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar6) {
        *piVar9 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar10 < 1) {
    operator_delete(puVar8);
  }
LAB_005cfe58:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005cfe74 to 006cff13 has its CatchHandler @ 005cfe74
                       catch() { ... } // from try @ 005cfe74 with catch @ 005cfe74
                       catch() { ... } // from try @ 005cff18 with catch @ 005cfe74
                       catch() { ... } // from try @ 005d0024 with catch @ 005cfe74
                       catch() { ... } // from try @ 005d00e4 with catch @ 005cfe74
                       catch() { ... } // from try @ 005d0210 with catch @ 005cfe74 */
  return;
}


