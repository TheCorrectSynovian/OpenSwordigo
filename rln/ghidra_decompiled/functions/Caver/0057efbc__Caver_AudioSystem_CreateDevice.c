/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057efbc
 * Function: Caver::AudioSystem::CreateDevice
 * Signature: undefined __thiscall CreateDevice(AudioSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::CreateDevice() */

void __thiscall Caver::AudioSystem::CreateDevice(AudioSystem *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = alcOpenDevice(0);
  *(undefined8 *)this = uVar5;
  FUN_00666bb8(local_48,"alcOpenDevice",auStack_50);
  alGetError();
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) == PTR_DAT_007e5de8) {
LAB_0057f01c:
    lVar6 = *(long *)this;
    uVar5 = 0;
    if (lVar6 == 0) goto LAB_0057f0c0;
  }
  else {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar8) goto LAB_0057f01c;
    operator_delete((undefined *)(local_48[0] + -0x18));
    lVar6 = *(long *)this;
    if (lVar6 == 0) {
      uVar5 = 0;
      goto LAB_0057f0c0;
    }
  }
  uVar5 = alcCreateContext(lVar6,0);
  *(undefined8 *)(this + 8) = uVar5;
  FUN_00666bb8(local_48,"alcCreateContext",auStack_50);
  alGetError();
  if ((undefined *)(local_48[0] + -0x18) == puVar4) {
LAB_0057f058:
    uVar5 = 0;
    if (*(long *)(this + 8) == 0) goto LAB_0057f0c0;
  }
  else {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar8) goto LAB_0057f058;
                    /* catch() { ... } // from try @ 0057f220 with catch @ 0057f1b4 */
    operator_delete((undefined *)(local_48[0] + -0x18));
    if (*(long *)(this + 8) == 0) {
      uVar5 = 0;
      goto LAB_0057f0c0;
    }
  }
  alcMakeContextCurrent();
  FUN_00666bb8(local_48,"alcMakeContextCurrent",auStack_50);
  alGetError();
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  alDistanceModel(0);
  FUN_00666bb8(local_48,"alDistanceModel",auStack_50);
  alGetError();
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 0057f1f8 to 0067f21f has its CatchHandler @ 0057f2a4 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uVar5 = 1;
LAB_0057f0c0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


