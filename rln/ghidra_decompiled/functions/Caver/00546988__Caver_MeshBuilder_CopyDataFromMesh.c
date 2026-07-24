/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546988
 * Function: Caver::MeshBuilder::CopyDataFromMesh
 * Signature: undefined __thiscall CopyDataFromMesh(MeshBuilder * this, uchar * param_1, int param_2, MeshData * param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataFromMesh(unsigned char*, int, Caver::MeshData const*, int) */

void __thiscall
Caver::MeshBuilder::CopyDataFromMesh
          (MeshBuilder *this,uchar *param_1,int param_2,MeshData *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_4) {
    lVar2 = *(long *)(param_3 + 0x10);
    iVar1 = 0;
    do {
      if ((*(int *)param_3 == 0x1401) && (0 < *(int *)(param_3 + 4))) {
        lVar3 = 0;
        do {
          param_1[lVar3] = *(uchar *)(lVar2 + lVar3);
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_3 + 4));
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + param_2;
      lVar2 = lVar2 + (ulong)*(uint *)(param_3 + 8);
    } while (iVar1 != param_4);
  }
  return;
}


