/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ba260
 * Function: Caver::GroundMeshGenerator::InsertPlainSurfaceVertices
 * Signature: undefined __cdecl InsertPlainSurfaceVertices(Vector2 * param_1, float param_2, float param_3, Vector2 param_4, float param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::InsertPlainSurfaceVertices(Caver::Vector2 const&, float, float,
   Caver::Vector2, float) */

void Caver::GroundMeshGenerator::InsertPlainSurfaceVertices
               (undefined4 param_2,undefined4 param_3,long param_1,undefined4 *param_4,
               undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vector3 *pVVar4;
  long lVar5;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  local_d8 = *param_4;
  uStack_d4 = param_4[1];
  local_50 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_c8 = *param_5;
  local_c4 = param_5[1];
  local_78 = 0;
  local_c0 = 0;
  local_84 = 0;
  local_cc = 0;
  pVVar4 = *(Vector3 **)(param_1 + 0x18);
  local_d0 = param_3;
  local_90 = local_d8;
  uStack_8c = uStack_d4;
  local_88 = param_2;
  uStack_80 = uStack_c8;
  local_7c = local_c4;
  if ((pVVar4 != (Vector3 *)0x0) && (*(long *)pVVar4 != 0)) {
    TextureMapping::TexCoordForPosition(pVVar4);
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_6c = (undefined4)local_e0;
    uVar2 = uStack_6c;
    uStack_68 = (undefined4)((ulong)local_e0 >> 0x20);
    uVar3 = uStack_68;
    TextureMapping::TexCoordForPosition(*(Vector3 **)(param_1 + 0x18));
    uStack_b4 = uVar2;
    uStack_b0 = uVar3;
  }
  uStack_a8 = 0;
  uStack_ac = 0;
  MeshBuilder::AddVertex((MeshBuilder *)(param_1 + 0x20),(Vertex *)&local_90);
  MeshBuilder::AddVertex((MeshBuilder *)(param_1 + 0x20),(Vertex *)&local_d8);
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


