/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030e1a4
 * Function: Caver::NewCaverShell
 * Signature: undefined __cdecl NewCaverShell(int param_1, char * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewCaverShell(int, char**) */

FWShell * Caver::NewCaverShell(int param_1,char **param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  FWShell *this;
  int *piVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this = operator_new(0xb0);
  FWShell::FWShell(this);
  puVar4 = PTR_vtable_007e76a0;
  puVar5 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined **)(this + 0x80) = puVar5 + 0x18;
  this[0xa8] = (FWShell)0x0;
  puVar4 = PTR_pthread_create_007e4e78;
  if (1 < param_1) {
    lVar8 = 1;
    do {
      FUN_00666bb8(local_68,param_2[lVar8],auStack_70);
      FWShell::AddArgument(this,(string *)local_68);
      if ((undefined *)(local_68[0] + -0x18) != puVar5) {
        piVar6 = (int *)(local_68[0] + -8);
        if (puVar4 == (undefined *)0x0) {
          iVar7 = *piVar6;
          *piVar6 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_68[0] + -0x18));
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < param_1);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


