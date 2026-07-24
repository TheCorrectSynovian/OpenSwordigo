/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9f24
 * Function: FUN_005f9f24
 * Signature: undefined FUN_005f9f24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_005f9f24(undefined8 param_1,int *param_2,size_t *param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  
  if (*param_2 == 0) {
    iVar1 = feof(*(FILE **)(param_2 + 2));
    if (iVar1 == 0) {
                    /* try { // try from 005f9f74 to 006f9fc7 has its CatchHandler @ 005f9c98 */
      sVar2 = fread(param_2 + 4,1,0x400,*(FILE **)(param_2 + 2));
      *param_3 = sVar2;
      piVar3 = (int *)0x0;
      if (sVar2 != 0) {
        piVar3 = param_2 + 4;
      }
    }
    else {
      piVar3 = (int *)0x0;
                    /* try { // try from 005f9f68 to 006f9f73 has its CatchHandler @ 005faf00 */
    }
  }
  else {
    *param_2 = 0;
    *param_3 = 1;
    piVar3 = (int *)&DAT_0068fbea;
  }
  return piVar3;
}


