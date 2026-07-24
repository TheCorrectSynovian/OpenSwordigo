/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a684
 * Function: DataFromJByteArray
 * Signature: undefined __cdecl DataFromJByteArray(_JNIEnv * param_1, _jbyteArray * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* DataFromJByteArray(_JNIEnv*, _jbyteArray*) */

void DataFromJByteArray(_JNIEnv *param_1,_jbyteArray *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long *in_x8;
  int *piVar6;
  long local_60;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 == (_jbyteArray *)0x0) {
    *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
  }
  else {
    uVar5 = (**(code **)(*(long *)param_1 + 0x5c0))(param_1,param_2,auStack_54);
    iVar4 = (**(code **)(*(long *)param_1 + 0x558))(param_1,param_2);
    FUN_00666a7c(&local_60,uVar5,(long)iVar4,auStack_50);
    (**(code **)(*(long *)param_1 + 0x600))(param_1,param_2,uVar5,2);
    FUN_0066a528();
    if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar6;
        *piVar6 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


