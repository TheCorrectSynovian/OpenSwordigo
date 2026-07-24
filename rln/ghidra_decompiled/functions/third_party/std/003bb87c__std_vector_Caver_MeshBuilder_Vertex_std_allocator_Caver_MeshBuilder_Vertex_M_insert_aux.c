/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bb87c
 * Function: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> * this, __normal_iterator param_1, Vertex * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MeshBuilder::Vertex, std::allocator<Caver::MeshBuilder::Vertex>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,
   std::vector<Caver::MeshBuilder::Vertex, std::allocator<Caver::MeshBuilder::Vertex> > >,
   Caver::MeshBuilder::Vertex const&) */

void __thiscall
std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_insert_aux
          (vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  
  puVar9 = *(undefined8 **)(this + 8);
  if (puVar9 == *(undefined8 **)(this + 0x10)) {
    lVar20 = *(long *)this;
    lVar12 = (long)puVar9 - lVar20;
    uVar13 = (lVar12 >> 2) * -0xf0f0f0f0f0f0f0f;
    uVar3 = uVar13;
    if (lVar12 == 0) {
      uVar3 = 1;
    }
    uVar2 = 0x3c3c3c3c3c3c3c3;
    if (!CARRY8(uVar3,uVar13) && uVar3 + uVar13 < 0x3c3c3c3c3c3c3c4) {
      uVar2 = uVar3 + uVar13;
    }
    if (uVar2 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      if (0x3c3c3c3c3c3c3c3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar9 = operator_new(uVar2 * 0x44);
    }
    uVar8 = *param_3;
    puVar14 = (undefined8 *)((long)puVar9 + ((long)param_2 - lVar20 >> 2) * 4);
    puVar14[1] = param_3[1];
    *puVar14 = uVar8;
    uVar8 = param_3[2];
    puVar14[3] = param_3[3];
    puVar14[2] = uVar8;
    *(undefined1 *)(puVar14 + 4) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)((long)puVar14 + 0x21) = *(undefined1 *)((long)param_3 + 0x21);
    *(undefined1 *)((long)puVar14 + 0x22) = *(undefined1 *)((long)param_3 + 0x22);
    *(undefined1 *)((long)puVar14 + 0x23) = *(undefined1 *)((long)param_3 + 0x23);
    uVar8 = *(undefined8 *)((long)param_3 + 0x24);
    *(undefined8 *)((long)puVar14 + 0x2c) = *(undefined8 *)((long)param_3 + 0x2c);
    *(undefined8 *)((long)puVar14 + 0x24) = uVar8;
    uVar8 = *(undefined8 *)((long)param_3 + 0x34);
    *(undefined8 *)((long)puVar14 + 0x3c) = *(undefined8 *)((long)param_3 + 0x3c);
    *(undefined8 *)((long)puVar14 + 0x34) = uVar8;
    puVar10 = *(undefined8 **)this;
    puVar1 = puVar9;
    for (puVar14 = puVar10; puVar14 != param_2; puVar14 = (undefined8 *)((long)puVar14 + 0x44)) {
      uVar8 = *puVar14;
      puVar1[1] = puVar14[1];
      *puVar1 = uVar8;
      uVar8 = puVar14[2];
      puVar1[3] = puVar14[3];
      puVar1[2] = uVar8;
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar14 + 4);
      *(undefined1 *)((long)puVar1 + 0x21) = *(undefined1 *)((long)puVar14 + 0x21);
      *(undefined1 *)((long)puVar1 + 0x22) = *(undefined1 *)((long)puVar14 + 0x22);
      *(undefined1 *)((long)puVar1 + 0x23) = *(undefined1 *)((long)puVar14 + 0x23);
      uVar8 = *(undefined8 *)((long)puVar14 + 0x24);
      *(undefined8 *)((long)puVar1 + 0x2c) = *(undefined8 *)((long)puVar14 + 0x2c);
      *(undefined8 *)((long)puVar1 + 0x24) = uVar8;
      uVar8 = *(undefined8 *)((long)puVar14 + 0x34);
      *(undefined8 *)((long)puVar1 + 0x3c) = *(undefined8 *)((long)puVar14 + 0x3c);
      *(undefined8 *)((long)puVar1 + 0x34) = uVar8;
      puVar1 = (undefined8 *)((long)puVar1 + 0x44);
    }
    puVar14 = *(undefined8 **)(this + 8);
    for (; puVar7 = (undefined8 *)((long)puVar1 + 0x44), puVar14 != param_2;
        param_2 = (undefined8 *)((long)param_2 + 0x44)) {
      uVar8 = *param_2;
      *(undefined8 *)((long)puVar1 + 0x4c) = param_2[1];
      *puVar7 = uVar8;
      uVar8 = param_2[2];
      *(undefined8 *)((long)puVar1 + 0x5c) = param_2[3];
      *(undefined8 *)((long)puVar1 + 0x54) = uVar8;
      *(undefined1 *)((long)puVar1 + 100) = *(undefined1 *)(param_2 + 4);
      *(undefined1 *)((long)puVar1 + 0x65) = *(undefined1 *)((long)param_2 + 0x21);
      *(undefined1 *)((long)puVar1 + 0x66) = *(undefined1 *)((long)param_2 + 0x22);
      *(undefined1 *)((long)puVar1 + 0x67) = *(undefined1 *)((long)param_2 + 0x23);
      uVar8 = *(undefined8 *)((long)param_2 + 0x24);
      puVar1[0xe] = *(undefined8 *)((long)param_2 + 0x2c);
      puVar1[0xd] = uVar8;
      uVar8 = *(undefined8 *)((long)param_2 + 0x34);
      puVar1[0x10] = *(undefined8 *)((long)param_2 + 0x3c);
      puVar1[0xf] = uVar8;
      puVar1 = puVar7;
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 **)(this + 8) = puVar7;
    *(void **)(this + 0x10) = (void *)((long)puVar9 + uVar2 * 0x44);
  }
  else {
    puVar14 = (undefined8 *)((long)puVar9 + -0x44);
    puVar9[1] = *(undefined8 *)((long)puVar9 + -0x3c);
    *puVar9 = *puVar14;
    puVar9[3] = *(undefined8 *)((long)puVar9 + -0x2c);
    puVar9[2] = *(undefined8 *)((long)puVar9 + -0x34);
    *(undefined4 *)(puVar9 + 4) = *(undefined4 *)((long)puVar9 + -0x24);
    *(undefined8 *)((long)puVar9 + 0x2c) = puVar9[-3];
    *(undefined8 *)((long)puVar9 + 0x24) = puVar9[-4];
    *(undefined8 *)((long)puVar9 + 0x3c) = puVar9[-1];
    *(undefined8 *)((long)puVar9 + 0x34) = puVar9[-2];
    *(long *)(this + 8) = (long)puVar9 + 0x44;
    uVar4 = *(undefined4 *)param_3;
    uVar19 = *(undefined8 *)((long)param_3 + 4);
    uVar8 = *(undefined8 *)((long)param_3 + 0xc);
    uVar11 = *(undefined8 *)((long)param_3 + 0x14);
    uVar5 = *(undefined4 *)((long)param_3 + 0x1c);
    uVar6 = *(undefined4 *)(param_3 + 4);
    uVar16 = *(undefined8 *)((long)param_3 + 0x24);
    uVar17 = *(undefined8 *)((long)param_3 + 0x2c);
    uVar18 = *(undefined8 *)((long)param_3 + 0x34);
    uVar15 = *(undefined8 *)((long)param_3 + 0x3c);
    if (0 < (long)puVar14 - (long)param_2) {
      lVar12 = (ulong)((long)puVar14 - (long)param_2) / 0x44 + 1;
      do {
        lVar12 = lVar12 + -1;
        puVar14[1] = *(undefined8 *)((long)puVar14 + -0x3c);
        *puVar14 = *(undefined8 *)((long)puVar14 + -0x44);
        puVar14[3] = *(undefined8 *)((long)puVar14 + -0x2c);
        puVar14[2] = *(undefined8 *)((long)puVar14 + -0x34);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)((long)puVar14 + -0x24);
        *(undefined8 *)((long)puVar14 + 0x2c) = puVar14[-3];
        *(undefined8 *)((long)puVar14 + 0x24) = puVar14[-4];
        *(undefined8 *)((long)puVar14 + 0x3c) = puVar14[-1];
        *(undefined8 *)((long)puVar14 + 0x34) = puVar14[-2];
        puVar14 = (undefined8 *)((long)puVar14 + -0x44);
      } while (1 < lVar12);
    }
    *(undefined4 *)param_2 = uVar4;
    *(undefined8 *)((long)param_2 + 4) = uVar19;
    *(undefined8 *)((long)param_2 + 0xc) = uVar8;
    *(undefined8 *)((long)param_2 + 0x14) = uVar11;
    *(undefined8 *)((long)param_2 + 0x24) = uVar16;
    *(undefined8 *)((long)param_2 + 0x2c) = uVar17;
    *(undefined8 *)((long)param_2 + 0x34) = uVar18;
    *(undefined4 *)((long)param_2 + 0x1c) = uVar5;
    *(undefined4 *)(param_2 + 4) = uVar6;
    *(undefined8 *)((long)param_2 + 0x3c) = uVar15;
  }
  return;
}


