/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f8c0
 * Function: FUN_0065f8c0
 * Signature: undefined FUN_0065f8c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0065f8c0(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  
  plVar1 = param_1 + 0xd;
  cVar2 = FUN_0061f654(plVar1);
  if (cVar2 == '\0') {
    FUN_0061f5e8(plVar1,param_2,param_3,0x1b4);
    cVar2 = FUN_0061f654(plVar1);
    if (cVar2 != '\0') {
      if ((char)param_1[0x15] == '\0') {
        pvVar3 = (void *)param_1[0x13];
        if (pvVar3 == (void *)0x0) {
          pvVar3 = operator_new__(param_1[0x14]);
          param_1[0x13] = (long)pvVar3;
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
      }
      else {
        pvVar3 = (void *)param_1[0x13];
      }
      *(uint *)(param_1 + 0xf) = param_3;
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      *(undefined1 *)((long)param_1 + 0xaa) = 0;
      param_1[1] = (long)pvVar3;
      param_1[2] = (long)pvVar3;
      param_1[3] = (long)pvVar3;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
      if (((param_3 >> 1 & 1) == 0) ||
         (lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,2,param_3), lVar4 != -1)) {
        return param_1;
      }
      FUN_0065f390(param_1);
    }
  }
  return (long *)0x0;
}


