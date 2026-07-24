/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603110
 * Function: PVRTFixInterleavedEndiannessUsingCPODData
 * Signature: undefined __cdecl PVRTFixInterleavedEndiannessUsingCPODData(uchar * param_1, CPODData * param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTFixInterleavedEndiannessUsingCPODData(unsigned char*, CPODData&, unsigned int) */

void PVRTFixInterleavedEndiannessUsingCPODData(uchar *param_1,CPODData *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uchar *puVar3;
  ulong uVar4;
  uchar *puVar5;
  
  uVar1 = (ulong)*(uint *)(param_2 + 4);
  if ((*(uint *)(param_2 + 4) != 0) && (*(uint *)param_2 < 0xd)) {
    uVar2 = 1 << (ulong)(*(uint *)param_2 & 0x1f);
    if ((uVar2 & 0x3f6) == 0) {
      if (((uVar2 & 0x1808) != 0) && (param_3 != 0)) {
        uVar2 = 0;
        puVar3 = param_1 + *(long *)(param_2 + 0x10);
        do {
          if ((int)uVar1 != 0) {
            uVar4 = 0;
            puVar5 = puVar3;
            do {
              uVar4 = uVar4 + 1;
              *(undefined2 *)puVar5 = *(undefined2 *)puVar5;
              uVar1 = (ulong)*(uint *)(param_2 + 4);
              puVar5 = puVar5 + 2;
            } while (uVar4 < uVar1);
          }
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + *(uint *)(param_2 + 8);
        } while (uVar2 != param_3);
      }
    }
    else if (param_3 != 0) {
      uVar2 = 0;
      do {
        if ((int)uVar1 != 0) {
          uVar4 = 0;
          do {
            uVar1 = (ulong)*(uint *)(param_2 + 4);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_3);
    }
  }
  return;
}


