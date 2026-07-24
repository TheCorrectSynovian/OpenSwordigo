/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1824
 * Function: Caver::BuildVertexList
 * Signature: undefined __cdecl BuildVertexList(Vector2 * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BuildVertexList(Caver::Vector2*, int) */

undefined8 * Caver::BuildVertexList(Vector2 *param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = malloc(0x18);
  if (param_2 == 0) {
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
  }
  else {
    puVar3 = malloc(-(ulong)((uint)param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)(uint)param_2 << 5
                   );
    *puVar2 = puVar3;
    *(int *)(puVar2 + 2) = param_2;
    if (0 < param_2) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1 + uVar5 * 8);
        plVar1 = (long *)((long)puVar3 + lVar4);
        *(int *)(plVar1 + 2) = (int)uVar5;
        *(undefined8 *)((long)plVar1 + 0x14) = uVar6;
        if (lVar4 != 0) {
          *plVar1 = (long)(plVar1 + -4);
          plVar1[-3] = (long)plVar1;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x20;
      } while ((uint)param_2 != uVar5);
    }
    *puVar3 = puVar3 + (long)param_2 * 4 + -4;
    puVar3[(long)param_2 * 4 + -3] = puVar3;
    puVar2[1] = puVar3;
  }
  return puVar2;
}


