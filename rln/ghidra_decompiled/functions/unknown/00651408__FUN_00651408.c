/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651408
 * Function: FUN_00651408
 * Signature: undefined FUN_00651408(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00651408(undefined8 param_1,long *param_2,char param_3,long param_4,undefined8 param_5,
            undefined8 param_6,byte param_7,byte param_8)

{
  long *plVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined4 local_210;
  uint local_20c;
  uint local_208;
  undefined4 local_204;
  wchar_t awStack_200 [128];
  
  plVar1 = (long *)FUN_0064f6ac(param_4 + 0xd0);
  uVar2 = FUN_006513a0(param_4 + 0xd0);
  local_210 = (**(code **)(*plVar1 + 0x50))(plVar1,0x25);
  if (param_8 == 0) {
    local_208 = 0;
  }
  else {
    local_204 = 0;
    local_208 = (uint)param_7;
    param_7 = param_8;
  }
  local_20c = (uint)param_7;
  FUN_0064c178(uVar2,awStack_200,0x80,&local_210,param_6);
  sVar3 = wcslen(awStack_200);
  if (param_3 == '\0') {
    lVar4 = (**(code **)(*param_2 + 0x60))(param_2,awStack_200,(long)(int)sVar3);
    param_3 = (int)sVar3 != lVar4;
  }
  auVar5[8] = param_3;
  auVar5._0_8_ = param_2;
  auVar5._9_7_ = 0;
  return auVar5;
}


