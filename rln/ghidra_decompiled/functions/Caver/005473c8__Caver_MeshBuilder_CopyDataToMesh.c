/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005473c8
 * Function: Caver::MeshBuilder::CopyDataToMesh
 * Signature: undefined __thiscall CopyDataToMesh(MeshBuilder * this, MeshData * param_1, uchar * param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData*, unsigned char const*, int, int) */

void __thiscall
Caver::MeshBuilder::CopyDataToMesh
          (MeshBuilder *this,MeshData *param_1,uchar *param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (0 < param_4) {
    lVar2 = *(long *)(param_1 + 0x10);
                    /* try { // try from 005473d4 to 006473d7 has its CatchHandler @ 00547434 */
    iVar1 = 0;
                    /* try { // try from 005473d8 to 00647453 has its CatchHandler @ 00547368 */
    do {
      if ((*(int *)param_1 == 0x1401) && (0 < *(int *)(param_1 + 4))) {
        lVar3 = 0;
        do {
          *(uchar *)(lVar2 + lVar3) = param_2[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_1 + 4));
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + param_3;
      lVar2 = lVar2 + (ulong)*(uint *)(param_1 + 8);
    } while (iVar1 != param_4);
  }
  return;
}


