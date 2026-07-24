/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00547430
 * Function: Caver::MeshBuilder::CopyDataToMesh
 * Signature: undefined __thiscall CopyDataToMesh(MeshBuilder * this, MeshData * param_1, int * param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::CopyDataToMesh(Caver::MeshData*, int const*, int, int) */

void __thiscall
Caver::MeshBuilder::CopyDataToMesh
          (MeshBuilder *this,MeshData *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 005473d4 with catch @ 00547434 */
  if (0 < param_4) {
    lVar2 = *(long *)(param_1 + 0x10);
    iVar1 = 0;
    do {
                    /* try { // try from 00547454 to 0064747b has its CatchHandler @ 00547484 */
      if ((*(int *)param_1 == 0x1403) && (0 < *(int *)(param_1 + 4))) {
        lVar3 = 0;
        do {
          *(short *)(lVar2 + lVar3 * 2) = (short)param_2[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(param_1 + 4));
      }
                    /* try { // try from 0054747c to 00647487 has its CatchHandler @ 00547368 */
      iVar1 = iVar1 + 1;
                    /* catch() { ... } // from try @ 00547454 with catch @ 00547484 */
      param_2 = (int *)((long)param_2 + (long)param_3);
      lVar2 = lVar2 + (ulong)*(uint *)(param_1 + 8);
    } while (iVar1 != param_4);
  }
  return;
}


