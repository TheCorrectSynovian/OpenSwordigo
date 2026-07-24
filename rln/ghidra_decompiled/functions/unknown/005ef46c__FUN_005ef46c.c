/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ef46c
 * Function: FUN_005ef46c
 * Signature: undefined FUN_005ef46c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ef46c(char *param_1,char *param_2,size_t param_3)

{
  long lVar1;
  undefined8 uVar2;
  size_t sVar3;
  size_t sVar4;
  
                    /* try { // try from 005ef488 to 006ef4c7 has its CatchHandler @ 005ef488
                       catch() { ... } // from try @ 005ef488 with catch @ 005ef488
                       catch() { ... } // from try @ 005ef4dc with catch @ 005ef488
                       catch() { ... } // from try @ 005ef638 with catch @ 005ef488
                       catch() { ... } // from try @ 005ef708 with catch @ 005ef488 */
  if (*param_2 == '=') {
    strncpy(param_1,param_2 + 1,param_3);
    param_1[param_3 - 1] = '\0';
  }
  else {
    if (*param_2 == '@') {
      param_2 = param_2 + 1;
      sVar3 = strlen(param_2);
      lVar1 = sVar3 - (param_3 - 8);
      *param_1 = '\0';
      if (param_3 - 8 <= sVar3 && lVar1 != 0) {
        param_2 = param_2 + lVar1;
        sVar3 = strlen(param_1);
                    /* try { // try from 005ef4c8 to 006ef4db has its CatchHandler @ 005ef65c */
        builtin_strncpy(param_1 + sVar3,"...",4);
      }
                    /* try { // try from 005ef4dc to 006ef5a3 has its CatchHandler @ 005ef488 */
      strcat(param_1,param_2);
      return;
    }
    sVar4 = strcspn(param_2,"\n\r");
    uVar2 = s__string___00699ce2._0_8_;
    sVar3 = param_3 - 0x11;
    if (sVar4 <= param_3 - 0x11) {
      sVar3 = sVar4;
    }
    param_1[8] = '\"';
    param_1[9] = '\0';
    *(undefined8 *)param_1 = uVar2;
    if (param_2[sVar3] == '\0') {
      strcat(param_1,param_2);
    }
    else {
      strncat(param_1,param_2,sVar3);
      sVar3 = strlen(param_1);
      builtin_strncpy(param_1 + sVar3,"...",4);
    }
    sVar3 = strlen(param_1);
    param_1 = param_1 + sVar3;
    param_1[2] = '\0';
    param_1[0] = '\"';
    param_1[1] = ']';
  }
  return;
}


