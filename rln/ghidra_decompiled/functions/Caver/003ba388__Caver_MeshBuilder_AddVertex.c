/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ba388
 * Function: Caver::MeshBuilder::AddVertex
 * Signature: undefined __thiscall AddVertex(MeshBuilder * this, Vertex * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::AddVertex(Caver::MeshBuilder::Vertex const&) */

void __thiscall Caver::MeshBuilder::AddVertex(MeshBuilder *this,Vertex *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == *(undefined8 **)(this + 0x28)) {
    std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::
    _M_insert_aux((vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *)
                  (this + 0x18),puVar2,param_1);
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *puVar2 = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = uVar3;
    *(Vertex *)(puVar2 + 4) = param_1[0x20];
    *(Vertex *)((long)puVar2 + 0x21) = param_1[0x21];
    *(Vertex *)((long)puVar2 + 0x22) = param_1[0x22];
    *(Vertex *)((long)puVar2 + 0x23) = param_1[0x23];
    uVar3 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((long)puVar2 + 0x24) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)((long)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)((long)puVar2 + 0x34) = uVar3;
    *(long *)(this + 0x20) = (long)puVar2 + 0x44;
  }
  iVar1 = *(int *)(this + 0x10) + 1;
  *(int *)(this + 0x10) = iVar1;
  if ((iVar1 == (iVar1 / 3) * 3) && (*(int *)(*(long *)this + 0xc) < 1)) {
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  }
  return;
}


