/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055b81c
 * Function: Caver::ObjectLibrary::SaveModifiedLibraries
 * Signature: undefined __cdecl SaveModifiedLibraries(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::SaveModifiedLibraries() */

void Caver::ObjectLibrary::SaveModifiedLibraries(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  char *__format;
  undefined8 *puVar7;
  undefined8 uVar8;
  string *psVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ObjectLibrary *this;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78 [2];
  long local_68;
  
                    /* try { // try from 0055b820 to 0065b82b has its CatchHandler @ 0055c158 */
                    /* try { // try from 0055b82c to 0065b837 has its CatchHandler @ 0055bfc8 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = puts("Saving modified libraries..");
  puVar4 = PTR_DAT_007e5de8;
  puVar7 = (undefined8 *)(ulong)uVar5;
                    /* try { // try from 0055b858 to 0065b87f has its CatchHandler @ 0055c158 */
  puVar13 = DAT_007e9bd0;
  if (DAT_007e9bd0 != &DAT_007e9bc0) {
    do {
      plVar12 = (long *)puVar13[6];
      if (plVar12 == (long *)0x0) {
LAB_0055b9e4:
        this = (ObjectLibrary *)0x0;
      }
      else {
        if (plVar12[1] == 0) {
          plVar12 = (long *)0x0;
          goto LAB_0055b9e4;
        }
        plVar12[1] = plVar12[1] + 1;
        this = (ObjectLibrary *)puVar13[5];
      }
      printf("Checking \'%s\'\n",puVar13[4]);
      if (this != (ObjectLibrary *)0x0) {
                    /* try { // try from 0055b9fc to 0065ba0f has its CatchHandler @ 0055c018 */
        uVar8 = *(undefined8 *)this;
        if (this[0x81] == (ObjectLibrary)0x0) {
          __format = "\'%s\' Not Modified\n";
                    /* try { // try from 0055bb6c to 0065bb77 has its CatchHandler @ 0055c0d0 */
        }
        else {
          printf("\'%s\' Modified\n",uVar8);
          FUN_0066a528(local_78,&DAT_007e9bb0);
          plVar6 = (long *)(local_78[0] + -0x18);
          lVar14 = *plVar6;
          if (plVar6 != (long *)puVar4) {
                    /* try { // try from 0055bb78 to 0065bbab has its CatchHandler @ 0055b604 */
            piVar10 = (int *)(local_78[0] + -8);
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
              operator_delete(plVar6);
            }
          }
          if (lVar14 != 0) {
            FUN_0066a528(&local_88,this);
                    /* try { // try from 0055ba40 to 0065ba4f has its CatchHandler @ 0055bf40 */
            FUN_006677d4(&local_88,&DAT_0069591d,4);
                    /* try { // try from 0055ba50 to 0065ba7f has its CatchHandler @ 0055b604 */
            FUN_0066a528(&local_90,&DAT_007e9bb0);
            FindFile((string *)&local_88,(string *)&local_90);
            if ((undefined *)(local_90 + -0x18) != puVar4) {
              piVar10 = (int *)(local_90 + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar11 = *piVar10;
                *piVar10 = iVar11 + -1;
              }
              else {
                do {
                  iVar11 = *piVar10;
                    /* try { // try from 0055bbac to 0065bbb3 has its CatchHandler @ 0055c098 */
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar2) {
                    *piVar10 = iVar11 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (iVar11 < 1) {
                operator_delete((undefined *)(local_90 + -0x18));
              }
            }
                    /* try { // try from 0055ba80 to 0065ba93 has its CatchHandler @ 0055c28c */
            if ((undefined *)(local_88 + -0x18) != puVar4) {
              piVar10 = (int *)(local_88 + -8);
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
                operator_delete((undefined *)(local_88 + -0x18));
              }
            }
                    /* try { // try from 0055ba94 to 0065ba9f has its CatchHandler @ 0055c1dc */
            if (*(long *)(local_80 + -0x18) == 0) {
                    /* try { // try from 0055baa0 to 0065badb has its CatchHandler @ 0055b604 */
              printf("WARNING: Existing library \'%s\' not found. Saving to \'Libraries\' root\n",
                     *(undefined8 *)this);
              FUN_0066a528(&local_90,&DAT_007e9bb0);
              FUN_0066a528(&local_98,this);
              psVar9 = (string *)0x4;
              FUN_006677d4(&local_98,&DAT_0069591d);
                    /* try { // try from 0055badc to 0065bae3 has its CatchHandler @ 0055c1a4 */
              StringByAppendingPathComponent((Caver *)&local_90,(string *)&local_98,psVar9);
                    /* try { // try from 0055bae4 to 0065bb23 has its CatchHandler @ 0055b604 */
              FUN_0066a6a8(&local_80,&local_88);
              if ((undefined *)(local_88 + -0x18) != puVar4) {
                piVar10 = (int *)(local_88 + -8);
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
                  operator_delete((undefined *)(local_88 + -0x18));
                }
              }
              if ((undefined *)(local_98 + -0x18) != puVar4) {
                    /* try { // try from 0055b91c to 0065b943 has its CatchHandler @ 0055c10c */
                piVar10 = (int *)(local_98 + -8);
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
                  operator_delete((undefined *)(local_98 + -0x18));
                }
              }
              if ((undefined *)(local_90 + -0x18) != puVar4) {
                    /* try { // try from 0055b944 to 0065b9fb has its CatchHandler @ 0055b604 */
                piVar10 = (int *)(local_90 + -8);
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
                  operator_delete((undefined *)(local_90 + -0x18));
                }
              }
            }
                    /* try { // try from 0055bb24 to 0065bb37 has its CatchHandler @ 0055c21c */
            SaveToFile(this,(string *)&local_80);
            this[0x81] = (ObjectLibrary)0x0;
            if ((undefined *)(local_80 + -0x18) != puVar4) {
              piVar10 = (int *)(local_80 + -8);
              if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                iVar11 = *piVar10;
                *piVar10 = iVar11 + -1;
              }
              else {
                do {
                  iVar11 = *piVar10;
                    /* try { // try from 0055bb58 to 0065bb6b has its CatchHandler @ 0055c108 */
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar2) {
                    *piVar10 = iVar11 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              if (iVar11 < 1) {
                    /* try { // try from 0055b8e4 to 0065b8ef has its CatchHandler @ 0055c10c */
                operator_delete((undefined *)(local_80 + -0x18));
              }
            }
            goto joined_r0x0055bc0c;
          }
          uVar8 = *(undefined8 *)this;
          __format = "ERROR: Trying to save library \'%s\' but no library search path is set\n";
        }
        printf(__format,uVar8);
      }
joined_r0x0055bc0c:
      if ((plVar12 != (long *)0x0) &&
         (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar14 = plVar12[2];
        plVar12[2] = lVar14 + -1;
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      puVar7 = (undefined8 *)FUN_0064c640(puVar13);
      puVar13 = puVar7;
    } while (puVar7 != &DAT_007e9bc0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar7);
}


