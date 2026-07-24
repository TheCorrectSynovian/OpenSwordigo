/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054735c
 * Function: Caver::MeshBuilder::CopyDataToMesh
 * Signature: undefined __thiscall CopyDataToMesh(MeshBuilder * this, MeshData * param_1, float * param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData*, float const*, int, int) */

void __thiscall
Caver::MeshBuilder::CopyDataToMesh
          (MeshBuilder *this,MeshData *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (0 < param_4) {
    lVar3 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005473d8 with catch @ 00547368
                       catch() { ... } // from try @ 0054747c with catch @ 00547368 */
    iVar2 = 0;
    do {
      if ((*(int *)param_1 == 0x1406) && (0 < *(int *)(param_1 + 4))) {
        lVar4 = 0;
        do {
          lVar5 = lVar4 * 4;
          pfVar1 = param_2 + lVar4;
          lVar4 = lVar4 + 1;
          *(float *)(lVar3 + lVar5) = *pfVar1;
        } while (lVar4 < *(int *)(param_1 + 4));
      }
      iVar2 = iVar2 + 1;
      param_2 = (float *)((long)param_2 + (long)param_3);
      lVar3 = lVar3 + (ulong)*(uint *)(param_1 + 8);
    } while (iVar2 != param_4);
  }
  return;
}


