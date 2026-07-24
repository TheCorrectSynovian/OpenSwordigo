/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603204
 * Function: PVRTFixInterleavedEndianness
 * Signature: undefined __cdecl PVRTFixInterleavedEndianness(SPODMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTFixInterleavedEndianness(SPODMesh&) */

void PVRTFixInterleavedEndianness(SPODMesh *param_1)

{
  undefined *puVar1;
  uchar *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_bLittleEndian_007e7e30;
  if (*(uchar **)(param_1 + 0xe8) != (uchar *)0x0) {
    if (*PTR_bIsInit_007e58f8 == '\0') {
      *PTR_bIsInit_007e58f8 = 1;
      *puVar1 = 1;
    }
    else if (*PTR_bLittleEndian_007e7e30 == '\0') {
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0x38),*(uint *)param_1);
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0x50),*(uint *)param_1);
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0x68),*(uint *)param_1);
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0x80),*(uint *)param_1);
      puVar2 = *(uchar **)(param_1 + 0xe8);
      if (*(int *)(param_1 + 8) != 0) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          PVRTFixInterleavedEndiannessUsingCPODData
                    (puVar2,(CPODData *)(*(long *)(param_1 + 0x98) + lVar3),*(uint *)param_1);
          puVar2 = *(uchar **)(param_1 + 0xe8);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar4 < *(uint *)(param_1 + 8));
      }
      PVRTFixInterleavedEndiannessUsingCPODData
                (puVar2,(CPODData *)(param_1 + 0xa0),*(uint *)param_1);
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0xb8),*(uint *)param_1);
      PVRTFixInterleavedEndiannessUsingCPODData
                (*(uchar **)(param_1 + 0xe8),(CPODData *)(param_1 + 0xd0),*(uint *)param_1);
      return;
    }
  }
  return;
}


