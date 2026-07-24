/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00373368
 * Function: Caver::GameEvent::NewCounterEvent
 * Signature: undefined __cdecl NewCounterEvent(string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::NewCounterEvent(std::string const&, int) */

undefined4 * Caver::GameEvent::NewCounterEvent(string *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar5 = operator_new(0x68);
  *puVar5 = 2;
  puVar9 = (undefined8 *)(puVar5 + 4);
  *puVar9 = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 **)(puVar5 + 8) = puVar9;
  *(undefined8 **)(puVar5 + 10) = puVar9;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  puVar9 = (undefined8 *)(puVar5 + 0x10);
  *puVar9 = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 **)(puVar5 + 0x14) = puVar9;
  *(undefined8 **)(puVar5 + 0x16) = puVar9;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  FUN_00666bb8(local_48,"name",auStack_50);
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)(puVar5 + 2),(string *)local_48);
  FUN_0066a6a8(uVar6,param_1);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
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
  FUN_00666bb8(local_48,"amount",auStack_50);
  piVar7 = (int *)std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)(puVar5 + 0xe),(string *)local_48);
  *piVar7 = param_2;
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
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}


