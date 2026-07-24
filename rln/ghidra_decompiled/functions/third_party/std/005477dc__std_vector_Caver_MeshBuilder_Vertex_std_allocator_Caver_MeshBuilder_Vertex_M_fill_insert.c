/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005477dc
 * Function: std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert
 * Signature: undefined __thiscall _M_fill_insert(vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> * this, __normal_iterator param_1, ulong param_2, Vertex * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MeshBuilder::Vertex, std::allocator<Caver::MeshBuilder::Vertex>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::MeshBuilder::Vertex*,
   std::vector<Caver::MeshBuilder::Vertex, std::allocator<Caver::MeshBuilder::Vertex> > >, unsigned
   long, Caver::MeshBuilder::Vertex const&) */

void __thiscall
std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::_M_fill_insert
          (vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *this,
          undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  
                    /* catch() { ... } // from try @ 005477a0 with catch @ 00547800 */
  if (param_3 != 0) {
    puVar26 = *(undefined8 **)(this + 8);
                    /* try { // try from 00547820 to 00647847 has its CatchHandler @ 00547850 */
    if ((ulong)((*(long *)(this + 0x10) - (long)puVar26 >> 2) * -0xf0f0f0f0f0f0f0f) < param_3) {
      lVar32 = *(long *)this;
      lVar29 = (long)puVar26 - lVar32 >> 2;
      uVar30 = lVar29 * -0xf0f0f0f0f0f0f0f;
                    /* try { // try from 00547848 to 00647853 has its CatchHandler @ 00547734 */
      if (lVar29 * 0xf0f0f0f0f0f0f0f + 0x3c3c3c3c3c3c3c3U < param_3) {
                    /* try { // try from 00547c98 to 00647c9b has its CatchHandler @ 00547e88 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00547c9c to 00647d87 has its CatchHandler @ 00547c68 */
        FUN_0066554c("vector::_M_fill_insert");
      }
                    /* catch() { ... } // from try @ 00547820 with catch @ 00547850 */
      uVar1 = param_3;
      if (param_3 <= uVar30) {
        uVar1 = uVar30;
      }
      uVar2 = 0x3c3c3c3c3c3c3c3;
      if (!CARRY8(uVar1,uVar30) && uVar1 + uVar30 < 0x3c3c3c3c3c3c3c4) {
        uVar2 = uVar1 + uVar30;
      }
      if (uVar2 == 0) {
        puVar26 = (undefined8 *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 005478e8 with catch @ 00547878
                       catch() { ... } // from try @ 0054798c with catch @ 00547878 */
        if (0x3c3c3c3c3c3c3c3 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00665294();
        }
        puVar26 = operator_new(uVar2 * 0x44);
      }
      puVar28 = (undefined8 *)((long)puVar26 + ((long)param_2 - lVar32 >> 2) * 4);
      uVar30 = param_3;
      do {
        uVar33 = *param_4;
        uVar30 = uVar30 - 1;
        puVar28[1] = param_4[1];
        *puVar28 = uVar33;
        uVar33 = param_4[2];
        puVar28[3] = param_4[3];
        puVar28[2] = uVar33;
        *(undefined1 *)(puVar28 + 4) = *(undefined1 *)(param_4 + 4);
        *(undefined1 *)((long)puVar28 + 0x21) = *(undefined1 *)((long)param_4 + 0x21);
        *(undefined1 *)((long)puVar28 + 0x22) = *(undefined1 *)((long)param_4 + 0x22);
        *(undefined1 *)((long)puVar28 + 0x23) = *(undefined1 *)((long)param_4 + 0x23);
                    /* try { // try from 00547b6c to 00647b6f has its CatchHandler @ 00547bcc */
        uVar33 = *(undefined8 *)((long)param_4 + 0x24);
                    /* try { // try from 00547b70 to 00647beb has its CatchHandler @ 00547b00 */
        *(undefined8 *)((long)puVar28 + 0x2c) = *(undefined8 *)((long)param_4 + 0x2c);
        *(undefined8 *)((long)puVar28 + 0x24) = uVar33;
        uVar33 = *(undefined8 *)((long)param_4 + 0x34);
        *(undefined8 *)((long)puVar28 + 0x3c) = *(undefined8 *)((long)param_4 + 0x3c);
        *(undefined8 *)((long)puVar28 + 0x34) = uVar33;
        puVar28 = (undefined8 *)((long)puVar28 + 0x44);
      } while (uVar30 != 0);
      puVar27 = *(undefined8 **)this;
      puVar31 = puVar26;
      for (puVar28 = puVar27; puVar28 != param_2; puVar28 = (undefined8 *)((long)puVar28 + 0x44)) {
        uVar33 = *puVar28;
        puVar31[1] = puVar28[1];
        *puVar31 = uVar33;
        uVar33 = puVar28[2];
        puVar31[3] = puVar28[3];
        puVar31[2] = uVar33;
        *(undefined1 *)(puVar31 + 4) = *(undefined1 *)(puVar28 + 4);
        *(undefined1 *)((long)puVar31 + 0x21) = *(undefined1 *)((long)puVar28 + 0x21);
        *(undefined1 *)((long)puVar31 + 0x22) = *(undefined1 *)((long)puVar28 + 0x22);
        *(undefined1 *)((long)puVar31 + 0x23) = *(undefined1 *)((long)puVar28 + 0x23);
                    /* catch() { ... } // from try @ 00547b6c with catch @ 00547bcc */
        uVar33 = *(undefined8 *)((long)puVar28 + 0x24);
        *(undefined8 *)((long)puVar31 + 0x2c) = *(undefined8 *)((long)puVar28 + 0x2c);
        *(undefined8 *)((long)puVar31 + 0x24) = uVar33;
        uVar33 = *(undefined8 *)((long)puVar28 + 0x34);
        *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)((long)puVar28 + 0x3c);
        *(undefined8 *)((long)puVar31 + 0x34) = uVar33;
        puVar31 = (undefined8 *)((long)puVar31 + 0x44);
      }
                    /* try { // try from 00547bec to 00647c13 has its CatchHandler @ 00547c1c */
      puVar28 = *(undefined8 **)(this + 8);
      puVar31 = (undefined8 *)((long)puVar31 + param_3 * 0x44);
      for (; puVar28 != param_2; param_2 = (undefined8 *)((long)param_2 + 0x44)) {
        uVar33 = *param_2;
        puVar31[1] = param_2[1];
        *puVar31 = uVar33;
        uVar33 = param_2[2];
        puVar31[3] = param_2[3];
        puVar31[2] = uVar33;
                    /* try { // try from 00547c14 to 00647c1f has its CatchHandler @ 00547b00 */
        *(undefined1 *)(puVar31 + 4) = *(undefined1 *)(param_2 + 4);
                    /* catch() { ... } // from try @ 00547bec with catch @ 00547c1c */
        *(undefined1 *)((long)puVar31 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
        *(undefined1 *)((long)puVar31 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
        *(undefined1 *)((long)puVar31 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
        uVar33 = *(undefined8 *)((long)param_2 + 0x24);
        *(undefined8 *)((long)puVar31 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
        *(undefined8 *)((long)puVar31 + 0x24) = uVar33;
        uVar33 = *(undefined8 *)((long)param_2 + 0x34);
        *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
        *(undefined8 *)((long)puVar31 + 0x34) = uVar33;
        puVar31 = (undefined8 *)((long)puVar31 + 0x44);
      }
      if (puVar27 != (undefined8 *)0x0) {
        operator_delete(puVar27);
      }
      *(undefined8 **)this = puVar26;
      *(undefined8 **)(this + 8) = puVar31;
      *(void **)(this + 0x10) = (void *)((long)puVar26 + uVar2 * 0x44);
    }
    else {
      uVar3 = *(undefined4 *)param_4;
      uVar11 = *(undefined4 *)((long)param_4 + 4);
      uVar4 = *(undefined4 *)(param_4 + 1);
      uVar12 = *(undefined4 *)((long)param_4 + 0xc);
      uVar5 = *(undefined4 *)(param_4 + 2);
      uVar13 = *(undefined4 *)((long)param_4 + 0x14);
      uVar6 = *(undefined4 *)(param_4 + 3);
      uVar14 = *(undefined4 *)((long)param_4 + 0x1c);
      puVar28 = param_4 + 4;
      uVar19 = *(undefined1 *)puVar28;
      uVar20 = *(undefined1 *)((long)param_4 + 0x21);
      uVar21 = *(undefined1 *)((long)param_4 + 0x22);
      uVar22 = *(undefined1 *)((long)param_4 + 0x23);
      uVar24 = *(undefined4 *)puVar28;
      uVar23 = *(undefined4 *)puVar28;
      uVar7 = *(undefined4 *)((long)param_4 + 0x24);
      uVar15 = *(undefined4 *)(param_4 + 5);
      uVar8 = *(undefined4 *)((long)param_4 + 0x2c);
      uVar16 = *(undefined4 *)(param_4 + 6);
      uVar9 = *(undefined4 *)((long)param_4 + 0x34);
      uVar17 = *(undefined4 *)(param_4 + 7);
      uVar10 = *(undefined4 *)((long)param_4 + 0x3c);
      uVar18 = *(undefined4 *)(param_4 + 8);
      lVar32 = (long)puVar26 - (long)param_2 >> 2;
      uVar30 = lVar32 * -0xf0f0f0f0f0f0f0f;
      lVar29 = uVar30 - param_3;
      if (uVar30 < param_3 || lVar29 == 0) {
        lVar32 = param_3 + lVar32 * 0xf0f0f0f0f0f0f0f;
        puVar28 = puVar26;
        lVar25 = lVar32;
        while (lVar25 != 0) {
          *(undefined4 *)puVar28 = uVar3;
          *(undefined4 *)((long)puVar28 + 4) = uVar11;
                    /* try { // try from 00547a28 to 00647a2b has its CatchHandler @ 00547a88 */
          *(undefined4 *)(puVar28 + 1) = uVar4;
          *(undefined4 *)((long)puVar28 + 0xc) = uVar12;
                    /* try { // try from 00547a2c to 00647aa7 has its CatchHandler @ 005479bc */
          *(undefined4 *)(puVar28 + 2) = uVar5;
          *(undefined4 *)((long)puVar28 + 0x14) = uVar13;
          *(undefined4 *)(puVar28 + 3) = uVar6;
          *(undefined4 *)((long)puVar28 + 0x1c) = uVar14;
          *(undefined1 *)(puVar28 + 4) = uVar19;
          *(undefined1 *)((long)puVar28 + 0x21) = uVar20;
          *(undefined1 *)((long)puVar28 + 0x22) = uVar21;
          *(undefined1 *)((long)puVar28 + 0x23) = uVar22;
          *(undefined4 *)((long)puVar28 + 0x24) = uVar7;
          *(undefined4 *)(puVar28 + 5) = uVar15;
          *(undefined4 *)((long)puVar28 + 0x2c) = uVar8;
          *(undefined4 *)(puVar28 + 6) = uVar16;
          *(undefined4 *)((long)puVar28 + 0x34) = uVar9;
          *(undefined4 *)(puVar28 + 7) = uVar17;
          *(undefined4 *)((long)puVar28 + 0x3c) = uVar10;
          *(undefined4 *)(puVar28 + 8) = uVar18;
          puVar28 = (undefined8 *)((long)puVar28 + 0x44);
          lVar29 = lVar29 + 1;
          lVar25 = lVar29;
        }
        puVar28 = (undefined8 *)((long)puVar26 + lVar32 * 0x44);
        *(undefined8 **)(this + 8) = puVar28;
        puVar31 = param_2;
        if (puVar26 == param_2) {
          *(undefined4 **)(this + 8) = (undefined4 *)((long)param_2 + param_3 * 0x44);
        }
        else {
          do {
            uVar33 = *puVar31;
            puVar28[1] = puVar31[1];
            *puVar28 = uVar33;
            uVar33 = puVar31[2];
            puVar28[3] = puVar31[3];
            puVar28[2] = uVar33;
                    /* catch() { ... } // from try @ 00547a28 with catch @ 00547a88 */
            *(undefined1 *)(puVar28 + 4) = *(undefined1 *)(puVar31 + 4);
            *(undefined1 *)((long)puVar28 + 0x21) = *(undefined1 *)((long)puVar31 + 0x21);
            *(undefined1 *)((long)puVar28 + 0x22) = *(undefined1 *)((long)puVar31 + 0x22);
            *(undefined1 *)((long)puVar28 + 0x23) = *(undefined1 *)((long)puVar31 + 0x23);
                    /* try { // try from 00547aa8 to 00647acf has its CatchHandler @ 00547ad8 */
            uVar33 = *(undefined8 *)((long)puVar31 + 0x24);
            *(undefined8 *)((long)puVar28 + 0x2c) = *(undefined8 *)((long)puVar31 + 0x2c);
            *(undefined8 *)((long)puVar28 + 0x24) = uVar33;
            uVar33 = *(undefined8 *)((long)puVar31 + 0x34);
            puVar27 = (undefined8 *)((long)puVar31 + 0x44);
            *(undefined8 *)((long)puVar28 + 0x3c) = *(undefined8 *)((long)puVar31 + 0x3c);
            *(undefined8 *)((long)puVar28 + 0x34) = uVar33;
            puVar28 = (undefined8 *)((long)puVar28 + 0x44);
            puVar31 = puVar27;
          } while (puVar27 != puVar26);
                    /* try { // try from 00547ad0 to 00647adb has its CatchHandler @ 005479bc */
                    /* catch() { ... } // from try @ 00547aa8 with catch @ 00547ad8 */
          *(undefined4 **)(this + 8) = (undefined4 *)((long)puVar26 + param_3 * 0x44);
          do {
            *(undefined4 *)param_2 = uVar3;
            *(undefined4 *)((long)param_2 + 4) = uVar11;
            *(undefined4 *)(param_2 + 1) = uVar4;
            *(undefined4 *)((long)param_2 + 0xc) = uVar12;
            *(undefined4 *)(param_2 + 2) = uVar5;
            *(undefined4 *)((long)param_2 + 0x14) = uVar13;
            *(undefined4 *)(param_2 + 3) = uVar6;
            *(undefined4 *)((long)param_2 + 0x1c) = uVar14;
            *(undefined4 *)(param_2 + 4) = uVar24;
            *(undefined4 *)((long)param_2 + 0x24) = uVar7;
            *(undefined4 *)(param_2 + 5) = uVar15;
            *(undefined4 *)((long)param_2 + 0x2c) = uVar8;
            *(undefined4 *)(param_2 + 6) = uVar16;
            *(undefined4 *)((long)param_2 + 0x34) = uVar9;
            *(undefined4 *)(param_2 + 7) = uVar17;
            *(undefined4 *)((long)param_2 + 0x3c) = uVar10;
                    /* catch() { ... } // from try @ 00547b70 with catch @ 00547b00
                       catch() { ... } // from try @ 00547c14 with catch @ 00547b00 */
            *(undefined4 *)(param_2 + 8) = uVar18;
            param_2 = (undefined8 *)((long)param_2 + 0x44);
          } while (param_2 != puVar26);
        }
      }
      else {
                    /* try { // try from 005478e4 to 006478e7 has its CatchHandler @ 00547944 */
        lVar29 = 0;
                    /* try { // try from 005478e8 to 00647963 has its CatchHandler @ 00547878 */
        do {
          puVar28 = (undefined8 *)((long)puVar26 + lVar29 + param_3 * -0x44);
          uVar33 = *puVar28;
          puVar31 = (undefined8 *)((long)puVar26 + lVar29);
          lVar29 = lVar29 + 0x44;
          puVar31[1] = puVar28[1];
          *puVar31 = uVar33;
          uVar33 = puVar28[2];
          puVar31[3] = puVar28[3];
          puVar31[2] = uVar33;
          *(undefined1 *)(puVar31 + 4) = *(undefined1 *)(puVar28 + 4);
          *(undefined1 *)((long)puVar31 + 0x21) = *(undefined1 *)((long)puVar28 + 0x21);
          *(undefined1 *)((long)puVar31 + 0x22) = *(undefined1 *)((long)puVar28 + 0x22);
          *(undefined1 *)((long)puVar31 + 0x23) = *(undefined1 *)((long)puVar28 + 0x23);
          uVar33 = *(undefined8 *)((long)puVar28 + 0x24);
          *(undefined8 *)((long)puVar31 + 0x2c) = *(undefined8 *)((long)puVar28 + 0x2c);
          *(undefined8 *)((long)puVar31 + 0x24) = uVar33;
          uVar33 = *(undefined8 *)((long)puVar28 + 0x34);
          *(undefined8 *)((long)puVar31 + 0x3c) = *(undefined8 *)((long)puVar28 + 0x3c);
          *(undefined8 *)((long)puVar31 + 0x34) = uVar33;
        } while (param_3 * 0x44 - lVar29 != 0);
                    /* catch() { ... } // from try @ 005478e4 with catch @ 00547944 */
        uVar30 = (long)puVar26 + (param_3 * -0x44 - (long)param_2);
        *(undefined4 **)(this + 8) = (undefined4 *)((long)puVar26 + param_3 * 0x44);
        if (0 < (long)uVar30) {
                    /* try { // try from 00547964 to 0064798b has its CatchHandler @ 00547994 */
          puVar26 = puVar26 + -4;
          lVar29 = uVar30 / 0x44 + 1;
          do {
            puVar28 = (undefined8 *)((long)puVar26 + param_3 * -0x44);
            uVar33 = *(undefined8 *)((long)puVar28 + -0x24);
            lVar29 = lVar29 + -1;
                    /* try { // try from 0054798c to 00647997 has its CatchHandler @ 00547878 */
            *(undefined8 *)((long)puVar26 + -0x1c) = *(undefined8 *)((long)puVar28 + -0x1c);
            *(undefined8 *)((long)puVar26 + -0x24) = uVar33;
            uVar33 = *(undefined8 *)((long)puVar28 + -0x14);
                    /* catch() { ... } // from try @ 00547964 with catch @ 00547994 */
            *(undefined8 *)((long)puVar26 + -0xc) = *(undefined8 *)((long)puVar28 + -0xc);
            *(undefined8 *)((long)puVar26 + -0x14) = uVar33;
            *(undefined4 *)((long)puVar26 + -4) = *(undefined4 *)((long)puVar28 + -4);
            uVar33 = *puVar28;
            puVar26[1] = puVar28[1];
            *puVar26 = uVar33;
            *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar28 + 2);
            *(undefined4 *)((long)puVar26 + 0x14) = *(undefined4 *)((long)puVar28 + 0x14);
                    /* catch() { ... } // from try @ 00547a2c with catch @ 005479bc
                       catch() { ... } // from try @ 00547ad0 with catch @ 005479bc */
            *(undefined4 *)(puVar26 + 3) = *(undefined4 *)(puVar28 + 3);
            *(undefined4 *)((long)puVar26 + 0x1c) = *(undefined4 *)((long)puVar28 + 0x1c);
            puVar26 = (undefined8 *)((long)puVar26 + -0x44);
          } while (1 < lVar29);
        }
        puVar26 = (undefined8 *)((long)param_2 + param_3 * 0x44);
        do {
          *(undefined4 *)param_2 = uVar3;
          *(undefined4 *)((long)param_2 + 4) = uVar11;
          *(undefined4 *)(param_2 + 1) = uVar4;
          *(undefined4 *)((long)param_2 + 0xc) = uVar12;
          *(undefined4 *)(param_2 + 2) = uVar5;
          *(undefined4 *)((long)param_2 + 0x14) = uVar13;
          *(undefined4 *)(param_2 + 3) = uVar6;
          *(undefined4 *)((long)param_2 + 0x1c) = uVar14;
          *(undefined4 *)(param_2 + 4) = uVar23;
          *(undefined4 *)((long)param_2 + 0x24) = uVar7;
          *(undefined4 *)(param_2 + 5) = uVar15;
          *(undefined4 *)((long)param_2 + 0x2c) = uVar8;
          *(undefined4 *)(param_2 + 6) = uVar16;
          *(undefined4 *)((long)param_2 + 0x34) = uVar9;
          *(undefined4 *)(param_2 + 7) = uVar17;
          *(undefined4 *)((long)param_2 + 0x3c) = uVar10;
          *(undefined4 *)(param_2 + 8) = uVar18;
          param_2 = (undefined8 *)((long)param_2 + 0x44);
        } while (param_2 != puVar26);
      }
    }
  }
                    /* try { // try from 00547c68 to 00647c97 has its CatchHandler @ 00547c68
                       catch() { ... } // from try @ 00547c68 with catch @ 00547c68
                       catch() { ... } // from try @ 00547c9c with catch @ 00547c68
                       catch() { ... } // from try @ 00547dc8 with catch @ 00547c68
                       catch() { ... } // from try @ 00547e7c with catch @ 00547c68 */
  return;
}


