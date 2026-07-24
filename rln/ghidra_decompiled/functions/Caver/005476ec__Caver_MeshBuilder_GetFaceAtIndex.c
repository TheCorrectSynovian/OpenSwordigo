/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005476ec
 * Function: Caver::MeshBuilder::GetFaceAtIndex
 * Signature: undefined __thiscall GetFaceAtIndex(MeshBuilder * this, int param_1, Vertex * param_2, Vertex * param_3, Vertex * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::GetFaceAtIndex(int, Caver::MeshBuilder::Vertex*, Caver::MeshBuilder::Vertex*,
   Caver::MeshBuilder::Vertex*) const */

void __thiscall
Caver::MeshBuilder::GetFaceAtIndex
          (MeshBuilder *this,int param_1,Vertex *param_2,Vertex *param_3,Vertex *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)(*(long *)(this + 0x18) + (long)param_1 * 0xcc);
  uVar4 = *puVar2;
  *(undefined8 *)(param_2 + 8) = puVar2[1];
  *(undefined8 *)param_2 = uVar4;
  uVar4 = puVar2[2];
                    /* try { // try from 00547704 to 0064770f has its CatchHandler @ 005475f0 */
  *(undefined8 *)(param_2 + 0x18) = puVar2[3];
  *(undefined8 *)(param_2 + 0x10) = uVar4;
                    /* catch() { ... } // from try @ 005476dc with catch @ 0054770c */
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar2 + 4);
  uVar4 = *(undefined8 *)((long)puVar2 + 0x24);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)((long)puVar2 + 0x2c);
  *(undefined8 *)(param_2 + 0x24) = uVar4;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((long)puVar2 + 0x34);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(puVar2 + 7);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)((long)puVar2 + 0x3c);
                    /* catch() { ... } // from try @ 005477a4 with catch @ 00547734
                       catch() { ... } // from try @ 00547848 with catch @ 00547734 */
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(puVar2 + 8);
  lVar3 = ((long)(param_1 * 3) + (long)(param_1 * 3) * 0x10) * 4;
  lVar1 = *(long *)(this + 0x18) + lVar3;
  uVar4 = *(undefined8 *)(lVar1 + 0x44);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar1 + 0x4c);
  *(undefined8 *)param_3 = uVar4;
  uVar4 = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(param_3 + 0x10) = uVar4;
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar1 + 100);
  uVar4 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(param_3 + 0x2c) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(param_3 + 0x24) = uVar4;
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(lVar1 + 0x78);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar1 + 0x7c);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(lVar1 + 0x80);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(lVar1 + 0x84);
  lVar3 = *(long *)(this + 0x18) + lVar3;
  uVar4 = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 *)(param_4 + 8) = *(undefined8 *)(lVar3 + 0x90);
  *(undefined8 *)param_4 = uVar4;
                    /* try { // try from 005477a0 to 006477a3 has its CatchHandler @ 00547800 */
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
                    /* try { // try from 005477a4 to 0064781f has its CatchHandler @ 00547734 */
  *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined8 *)(param_4 + 0x10) = uVar4;
  *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(lVar3 + 0xa8);
  uVar4 = *(undefined8 *)(lVar3 + 0xac);
  *(undefined8 *)(param_4 + 0x2c) = *(undefined8 *)(lVar3 + 0xb4);
  *(undefined8 *)(param_4 + 0x24) = uVar4;
  *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(lVar3 + 0xbc);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(lVar3 + 0xc0);
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(lVar3 + 0xc4);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(lVar3 + 200);
  return;
}


