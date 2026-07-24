/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c3cc
 * Function: PVRTTextureCreate
 * Signature: undefined __cdecl PVRTTextureCreate(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, bool param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureCreate(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool) */

void PVRTTextureCreate(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,bool param_6
                      )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    uVar3 = param_1 | param_2;
    uVar1 = param_1;
    if (param_1 <= param_3) {
      uVar1 = param_3;
    }
    uVar2 = param_2;
    if (param_2 <= param_4) {
      uVar2 = param_4;
    }
    param_1 = param_1 >> 1;
    lVar4 = lVar4 + (ulong)(uVar1 * uVar2);
    param_2 = param_2 >> 1;
  } while (uVar3 >> 1 != 0 && param_6);
  malloc((lVar4 * (ulong)param_5 >> 3) + 0x34);
  return;
}


