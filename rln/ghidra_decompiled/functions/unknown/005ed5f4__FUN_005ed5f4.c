/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed5f4
 * Function: FUN_005ed5f4
 * Signature: undefined FUN_005ed5f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed5f4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x98);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    do {
      while( true ) {
        puVar3 = (undefined8 *)puVar2[2];
        if (puVar3 < param_2) {
          return;
        }
        *(undefined8 *)(param_1 + 0x98) = *puVar2;
        if ((*(byte *)((long)puVar2 + 9) & (*(byte *)(lVar4 + 0x20) ^ 0xff) & 3) == 0) break;
        if (puVar3 != puVar2 + 3) {
          *(undefined8 *)(puVar2[4] + 0x18) = puVar2[3];
          *(undefined8 *)(puVar2[3] + 0x20) = puVar2[4];
        }
        FUN_005eed74(param_1,puVar2,0x28,0);
        puVar2 = *(undefined8 **)(param_1 + 0x98);
        if (puVar2 == (undefined8 *)0x0) {
          return;
        }
      }
      *(undefined8 *)(puVar2[4] + 0x18) = puVar2[3];
      *(undefined8 *)(puVar2[3] + 0x20) = puVar2[4];
      puVar2[3] = *(undefined8 *)puVar2[2];
      uVar1 = *(undefined4 *)((undefined8 *)puVar2[2] + 1);
      puVar2[2] = puVar2 + 3;
      *(undefined4 *)(puVar2 + 4) = uVar1;
      FUN_005ee4b0(param_1,puVar2);
      puVar2 = *(undefined8 **)(param_1 + 0x98);
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


