/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005469f0
 * Function: Caver::MeshBuilder::CopyDataFromMesh
 * Signature: undefined __thiscall CopyDataFromMesh(MeshBuilder * this, int * param_1, int param_2, MeshData * param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataFromMesh(int*, int, Caver::MeshData const*, int) */

void __thiscall
Caver::MeshBuilder::CopyDataFromMesh
          (MeshBuilder *this,int *param_1,int param_2,MeshData *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (0 < param_4) {
    lVar3 = *(long *)(param_3 + 0x10);
    iVar1 = *(int *)param_3;
    iVar2 = 0;
    do {
      if ((iVar1 == 0x1403) && (0 < *(int *)(param_3 + 4))) {
        lVar4 = 0;
        do {
          param_1[lVar4] = (uint)*(ushort *)(lVar3 + lVar4 * 2);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_3 + 4));
      }
      iVar2 = iVar2 + 1;
      param_1 = (int *)((long)param_1 + (long)param_2);
      lVar3 = lVar3 + (ulong)*(uint *)(param_3 + 8);
    } while (iVar2 != param_4);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005468b8 with catch @ 00546a54
                        */
  return;
}


