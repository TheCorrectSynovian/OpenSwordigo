/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b3464
 * Function: Caver::PathForResourceOfTypeInDirectory
 * Signature: undefined __thiscall PathForResourceOfTypeInDirectory(Caver * this, string * param_1, string * param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PathForResourceOfTypeInDirectory(std::string const&, std::string const&, std::string
   const&) */

void __thiscall
Caver::PathForResourceOfTypeInDirectory(Caver *this,string *param_1,string *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  string *psVar8;
  Caver *in_x8;
  int *piVar9;
  int iVar10;
  string asStack_78 [8];
  long local_70;
  long local_68;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  psVar8 = param_2;
  ResourcesPath(this);
  StringByAppendingPathComponent((Caver *)&local_60,param_2,psVar8);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar1) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  bVar1 = *(long *)(*(long *)param_1 + -0x18) == 0;
  if (bVar1) {
    FUN_0066a528(&local_60,this);
  }
  else {
    FUN_0066a528(&local_68,this);
    psVar8 = (string *)0x1;
    FUN_006677d4(&local_68,".");
    FUN_0066a528(&local_60,&local_68);
    FUN_00667614(&local_60,param_1);
  }
  StringByAppendingPathComponent((Caver *)local_58,(string *)&local_60,psVar8);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar9 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((!bVar1) && ((undefined *)(local_68 + -0x18) != puVar5)) {
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar1) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  uVar6 = FUN_00668098();
  if (uVar6 == 0xffffffff) {
    FUN_00666bb8(&local_60,&DAT_0068fbeb,&local_70);
  }
  else {
    if (*(ulong *)(*(long *)in_x8 + -0x18) <
        (ulong)((long)(((ulong)uVar6 << 0x20) + 0x100000000) >> 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&DAT_00695c42);
    }
    FUN_00666784(&local_60);
  }
  iVar7 = FUN_006689e0(&local_60,&DAT_00697388);
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar9 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar1) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if (iVar7 == 0) {
    psVar8 = asStack_78;
    FUN_00666bb8(&local_70,&DAT_0069738c);
    StringByAppendingPathExtension(in_x8,(string *)&local_70,psVar8);
    FUN_0066a6a8();
    if ((undefined *)(local_60 + -0x18) != puVar5) {
      piVar9 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar1) {
            *piVar9 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
    if ((undefined *)(local_70 + -0x18) != puVar5) {
      piVar9 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar9;
        *piVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar9;
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar1) {
            *piVar9 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
  }
  if ((undefined *)(local_58[0] + -0x18) != puVar5) {
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar1) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


