/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ee7c
 * Function: FUN_0062ee7c
 * Signature: undefined FUN_0062ee7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0062ee7c(undefined8 param_1,long *param_2,char param_3,long param_4,undefined8 param_5,
            undefined8 param_6,char param_7,char param_8)

{
  long *plVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 local_88;
  char local_87;
  char local_86;
  undefined1 local_85;
  char acStack_80 [128];
  
                    /* catch() { ... } // from try @ 0062edb8 with catch @ 0062ee90 */
                    /* catch() { ... } // from try @ 0062ed90 with catch @ 0062ee94 */
  plVar1 = (long *)FUN_0062d354(param_4 + 0xd0);
                    /* try { // try from 0062eeb8 to 0072ef33 has its CatchHandler @ 0062ef3c */
  uVar2 = FUN_0062ee14(param_4 + 0xd0);
  if ((char)plVar1[7] == '\0') {
    FUN_0061fea0(plVar1);
    local_88 = (**(code **)(*plVar1 + 0x30))(plVar1,0x25);
  }
  else {
    local_88 = *(undefined1 *)((long)plVar1 + 0x5e);
  }
  if (param_8 == '\0') {
    local_86 = '\0';
    local_87 = param_7;
  }
  else {
    local_85 = 0;
    local_86 = param_7;
    local_87 = param_8;
  }
                    /* catch() { ... } // from try @ 0062ece8 with catch @ 0062eee4 */
                    /* catch() { ... } // from try @ 0062ecc4 with catch @ 0062eee8
                       catch() { ... } // from try @ 0062ed18 with catch @ 0062eee8
                       catch() { ... } // from try @ 0062edf4 with catch @ 0062eee8 */
  FUN_0064bd8c(uVar2,acStack_80,0x80,&local_88,param_6);
  sVar3 = strlen(acStack_80);
  if (param_3 == '\0') {
    lVar4 = (**(code **)(*param_2 + 0x60))(param_2,acStack_80,(long)(int)sVar3);
    param_3 = (int)sVar3 != lVar4;
                    /* try { // try from 0062ef34 to 0072ef3f has its CatchHandler @ 0062ec10 */
  }
  auVar5[8] = param_3;
  auVar5._0_8_ = param_2;
  auVar5._9_7_ = 0;
                    /* catch() { ... } // from try @ 0062eeb8 with catch @ 0062ef3c */
  return auVar5;
}


