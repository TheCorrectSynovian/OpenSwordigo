/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c90b4
 * Function: Caver::Texture::InitWithResource
 * Signature: undefined __thiscall InitWithResource(Texture * this, string * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::InitWithResource(std::string const&, float) */

bool __thiscall Caver::Texture::InitWithResource(Texture *this,string *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_68 [8];
  long local_60;
  long local_58 [2];
  long local_48;
  
                    /* catch() { ... } // from try @ 005c8f74 with catch @ 005c90b4 */
                    /* catch() { ... } // from try @ 005c8ebc with catch @ 005c90c4 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (DAT_007e9fbc == '\0') {
                    /* try { // try from 005c9188 to 006c928f has its CatchHandler @ 005c9298 */
    FUN_00666bb8(&local_60,&DAT_00697388,auStack_68);
    PathForResourceOfType(param_1,(string *)&local_60);
    uVar6 = FileExistsAtPath((string *)local_58);
    bVar1 = (uVar6 & 1) != 0;
    if (bVar1) {
      FUN_0066a6a8(this + 0x20,local_58);
      *(undefined4 *)(this + 0x28) = 3;
      *(float *)(this + 0x6c) = param_2;
    }
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_58[0] + -8);
                    /* catch() { ... } // from try @ 005c92b4 with catch @ 005c92c8 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    if ((undefined *)(local_60 + -0x18) != puVar5) {
      piVar7 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
        *piVar7 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
    if (bVar1) {
LAB_005c9204:
      if (*(long *)(lVar4 + 0x28) == local_48) {
        return true;
      }
      goto LAB_005c9464;
    }
    if (DAT_007e9fbc == '\0') {
      FUN_00666bb8(&local_60,&DAT_00697ed4,auStack_68);
      PathForResourceOfType(param_1,(string *)&local_60);
      uVar6 = FileExistsAtPath((string *)local_58);
      bVar1 = (uVar6 & 1) != 0;
      if (bVar1) {
        FUN_0066a6a8(this + 0x20,local_58);
        *(float *)(this + 0x6c) = param_2;
        *(undefined4 *)(this + 0x28) = 2;
      }
      if ((undefined *)(local_58[0] + -0x18) != puVar5) {
        piVar7 = (int *)(local_58[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar7;
          *piVar7 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_58[0] + -0x18));
        }
      }
      if ((undefined *)(local_60 + -0x18) != puVar5) {
                    /* catch() { ... } // from try @ 005c9470 with catch @ 005c9400
                       catch() { ... } // from try @ 005c9514 with catch @ 005c9400 */
        piVar7 = (int *)(local_60 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar7;
          *piVar7 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_60 + -0x18));
        }
      }
      if (bVar1) goto LAB_005c9204;
    }
  }
                    /* try { // try from 005c90f4 to 006c911b has its CatchHandler @ 005c9138 */
  FUN_00666bb8(&local_60,&DAT_0069738c,auStack_68);
  PathForResourceOfType(param_1,(string *)&local_60);
  uVar6 = FileExistsAtPath((string *)local_58);
  bVar1 = (uVar6 & 1) != 0;
  if (bVar1) {
    FUN_0066a6a8(this + 0x20,local_58);
    *(undefined4 *)(this + 0x28) = 1;
                    /* catch() { ... } // from try @ 005c90f4 with catch @ 005c9138 */
    *(float *)(this + 0x6c) = param_2;
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 005c8f10 with catch @ 005c9154 */
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 005c9290 to 006c92a3 has its CatchHandler @ 005c8e60 */
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* catch() { ... } // from try @ 005c9188 with catch @ 005c9298 */
    }
  }
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar7 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 005c92b8 with catch @ 005c92a4 */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 005c92b4 to 006c92b7 has its CatchHandler @ 005c92c8 */
      operator_delete((undefined *)(local_60 + -0x18));
                    /* try { // try from 005c92b8 to 006c92db has its CatchHandler @ 005c92a4 */
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return bVar1;
  }
LAB_005c9464:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


