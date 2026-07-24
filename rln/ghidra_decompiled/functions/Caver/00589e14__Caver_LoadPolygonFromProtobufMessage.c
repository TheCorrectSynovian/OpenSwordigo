/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589e14
 * Function: Caver::LoadPolygonFromProtobufMessage
 * Signature: undefined __cdecl LoadPolygonFromProtobufMessage(Polygon * param_1, Polygon * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LoadPolygonFromProtobufMessage(Caver::Polygon*, Caver::Proto::Polygon const&) */

void Caver::LoadPolygonFromProtobufMessage(Polygon *param_1,Polygon *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  
  Polygon::SetVertices(param_1,*(int *)(param_2 + 0x18),(Vector2 *)0x0);
  iVar4 = *(int *)(param_2 + 0x18);
  if (0 < iVar4) {
    lVar6 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_2 + 0x10);
    lVar5 = 0;
    puVar8 = (undefined4 *)(lVar6 + 4);
    do {
                    /* catch() { ... } // from try @ 00589cd4 with catch @ 00589e50 */
      lVar9 = *(long *)(lVar7 + lVar5 * 8);
      uVar2 = *(undefined4 *)(lVar9 + 0xc);
      uVar3 = *(undefined4 *)(lVar9 + 0x10);
      puVar8[-1] = uVar2;
      *puVar8 = uVar3;
      if (lVar5 == 0) {
        puVar1 = (undefined4 *)(lVar6 + (long)*(int *)param_1 * 8);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
      }
      lVar5 = lVar5 + 1;
      puVar8 = puVar8 + 2;
    } while (lVar5 < iVar4);
  }
  param_1[0x20] = *(Polygon *)(param_2 + 0x48);
  param_1[0x21] = *(Polygon *)(param_2 + 0x49);
  return;
}


