/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589464
 * Function: Caver::SaveByteBufferToFile
 * Signature: undefined __cdecl SaveByteBufferToFile(uchar * param_1, uint param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SaveByteBufferToFile(unsigned char const*, unsigned int, std::string const&) */

undefined4 Caver::SaveByteBufferToFile(uchar *param_1,uint param_2,string *param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  FILE *__s;
  size_t sVar7;
  char *pcVar8;
  ulong uVar9;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  char *local_80;
  long local_70 [2];
  char acStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0058948c to 0068948f has its CatchHandler @ 005899c8 */
  psVar10 = param_3;
  TemporaryDirectoryPath((Caver *)param_1);
  LastPathComponent((Caver *)param_3,extraout_x1);
  StringByAppendingPathComponent((Caver *)local_70,(string *)&local_88,psVar10);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 005894d0 to 006894db has its CatchHandler @ 0058991c */
  if (local_88 + -0x18 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00589780 with catch @ 00589894 */
                    /* catch() { ... } // from try @ 0058975c with catch @ 00589898 */
    piVar11 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar11;
      *piVar11 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar11;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
                    /* catch() { ... } // from try @ 00589530 with catch @ 00589918 */
      operator_delete(local_88 + -0x18);
                    /* catch() { ... } // from try @ 005894d0 with catch @ 0058991c */
    }
  }
  if ((undefined *)(local_70[0] + -0x18) != puVar4) {
    piVar11 = (int *)(local_70[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar11;
      *piVar11 = iVar6 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005896e8 with catch @ 005898c8 */
        iVar6 = *piVar11;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_70[0] + -0x18));
    }
  }
  __s = fopen(local_80,"wb");
  if (__s != (FILE *)0x0) {
                    /* try { // try from 005894fc to 00689523 has its CatchHandler @ 00589890 */
    sVar7 = fwrite(param_1,1,(ulong)param_2,__s);
    fclose(__s);
    if (sVar7 == param_2) {
      local_88 = puVar4 + 0x18;
                    /* try { // try from 00589530 to 00689543 has its CatchHandler @ 00589918 */
      auVar14 = FileExistsAtPath(param_3);
      puVar3 = PTR_pthread_create_007e4e78;
      psVar10 = auVar14._8_8_;
      if ((auVar14._0_8_ & 1) == 0) {
        bVar5 = false;
LAB_005897e0:
        iVar6 = rename(local_80,*(char **)param_3);
        if (iVar6 != 0) {
          if (bVar5) {
            rename(local_88,*(char **)param_3);
          }
          goto LAB_00589800;
        }
        if (bVar5) {
          remove(local_88);
        }
        uVar12 = 1;
      }
      else {
        uVar13 = 0;
                    /* try { // try from 00589550 to 00689563 has its CatchHandler @ 00589a08 */
        do {
          StringByRemovingPathExtension((Caver *)param_3,psVar10);
          FUN_0066a528(&local_a0,&local_a8);
          FUN_006677d4(&local_a0,&DAT_00696a07,2);
          local_b0 = puVar4 + 0x18;
          pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                             (uVar13,acStack_5c);
          psVar10 = *(string **)puVar4;
                    /* try { // try from 0058959c to 006895c3 has its CatchHandler @ 0058983c */
          FUN_00669e1c(&local_b0,0,psVar10,pcVar8,(long)acStack_5c - (long)pcVar8);
          FUN_0066a528(&local_98,&local_a0);
          FUN_00667614(&local_98,&local_b0);
          PathExtension((Caver *)param_3,extraout_x1_00);
          StringByAppendingPathExtension((Caver *)&local_98,(string *)local_70,psVar10);
                    /* try { // try from 005895e4 to 0068960b has its CatchHandler @ 00589a08 */
          FUN_0066a6a8(&local_88,&local_90);
          if ((undefined *)(local_90 + -0x18) != puVar4) {
            piVar11 = (int *)(local_90 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                    /* try { // try from 0058967c to 006896bb has its CatchHandler @ 00589a74 */
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar6 < 1) {
              operator_delete((undefined *)(local_90 + -0x18));
            }
          }
          if ((undefined *)(local_70[0] + -0x18) != puVar4) {
            piVar11 = (int *)(local_70[0] + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar6 < 1) {
              operator_delete((undefined *)(local_70[0] + -0x18));
            }
          }
          if ((undefined *)(local_98 + -0x18) != puVar4) {
            piVar11 = (int *)(local_98 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
                    /* try { // try from 0058975c to 00689767 has its CatchHandler @ 00589898 */
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar6 < 1) {
              operator_delete((undefined *)(local_98 + -0x18));
            }
          }
          if (local_b0 + -0x18 != puVar4) {
            piVar11 = (int *)(local_b0 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
                    /* try { // try from 00589780 to 00689787 has its CatchHandler @ 00589894 */
            if (iVar6 < 1) {
                    /* try { // try from 00589788 to 00689863 has its CatchHandler @ 0058935c */
              operator_delete(local_b0 + -0x18);
            }
          }
          if ((undefined *)(local_a0 + -0x18) != puVar4) {
            piVar11 = (int *)(local_a0 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                    /* try { // try from 005896e8 to 006896ef has its CatchHandler @ 005898c8 */
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar6 < 1) {
              operator_delete((undefined *)(local_a0 + -0x18));
            }
          }
          if ((undefined *)(local_a8 + -0x18) != puVar4) {
            piVar11 = (int *)(local_a8 + -8);
            if (puVar3 == (undefined *)0x0) {
              iVar6 = *piVar11;
              *piVar11 = iVar6 + -1;
            }
            else {
              do {
                iVar6 = *piVar11;
                cVar1 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = iVar6 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar6 < 1) {
              operator_delete((undefined *)(local_a8 + -0x18));
            }
          }
          auVar14 = FileExistsAtPath((string *)&local_88);
          psVar10 = auVar14._8_8_;
        } while (((auVar14._0_8_ & 1) != 0) && (bVar5 = uVar13 < 99, uVar13 = uVar13 + 1, bVar5));
        uVar9 = FileExistsAtPath((string *)&local_88);
        if ((uVar9 & 1) != 0) {
          remove(local_88);
        }
        iVar6 = rename(*(char **)param_3,local_88);
        if (iVar6 == 0) {
          bVar5 = true;
                    /* catch() { ... } // from try @ 005894fc with catch @ 00589890 */
          goto LAB_005897e0;
        }
LAB_00589800:
        uVar12 = 0;
      }
      if (local_88 + -0x18 != puVar4) {
        piVar11 = (int *)(local_88 + -8);
                    /* catch() { ... } // from try @ 0058945c with catch @ 0058996c */
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar11;
          *piVar11 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar11;
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar6 < 1) {
                    /* catch() { ... } // from try @ 00589434 with catch @ 0058999c */
          operator_delete(local_88 + -0x18);
                    /* catch() { ... } // from try @ 0058942c with catch @ 005899a0 */
        }
      }
      goto LAB_00589828;
    }
  }
  uVar12 = 0;
LAB_00589828:
  if (local_80 + -0x18 != puVar4) {
    piVar11 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar11;
      *piVar11 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar11;
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_80 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 00589710 with catch @ 00589838 */
                    /* catch() { ... } // from try @ 0058959c with catch @ 0058983c */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00589864 to 00689b0f has its CatchHandler @ 00589b18 */
  return uVar12;
}


