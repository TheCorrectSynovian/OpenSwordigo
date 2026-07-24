/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065857c
 * Function: FUN_0065857c
 * Signature: undefined FUN_0065857c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065857c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
            undefined8 param_5,char param_6,undefined8 param_7,_Ios_Iostate *param_8,
            longdouble *param_9)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int *local_8;
  
  puVar4 = PTR_DAT_007e5de8;
  pcVar1 = PTR_DAT_007e5de8 + 0x18;
  if (param_6 == '\0') {
    auVar7 = FUN_006569ec();
  }
  else {
    auVar7 = FUN_006577b8();
  }
  local_8 = (int *)FUN_0063be10();
  std::__convert_to_v<long_double>(pcVar1,param_9,param_8,&local_8);
  if (puVar4 != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)(puVar4 + 0x10);
      *(int *)(puVar4 + 0x10) = iVar6 + -1;
    }
    else {
      piVar5 = (int *)(puVar4 + 0x10);
      do {
        iVar6 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(puVar4);
    }
  }
  auVar7._8_8_ = param_3 & 0xffffffff00000000 | auVar7._8_8_ & 0xffffffff;
  return auVar7;
}


