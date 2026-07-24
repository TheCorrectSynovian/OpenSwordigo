/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00547094
 * Function: Caver::MeshBuilder::GenerateMesh
 * Signature: undefined __thiscall GenerateMesh(MeshBuilder * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::GenerateMesh() */

MeshBuilder * __thiscall Caver::MeshBuilder::GenerateMesh(MeshBuilder *this)

{
  int iVar1;
  Mesh *this_00;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
                    /* try { // try from 005470a0 to 006470ab has its CatchHandler @ 005470ac */
                    /* catch() { ... } // from try @ 005470a0 with catch @ 005470ac */
                    /* try { // try from 005470b0 to 006470b3 has its CatchHandler @ 005470b8 */
  Mesh::CreateInterleavedData
            (*(Mesh **)this,*(int *)(this + 0x10),*(int *)(this + 0x50),*(int *)(this + 0x30));
                    /* catch() { ... } // from try @ 005470b0 with catch @ 005470b8 */
  this_00 = *(Mesh **)this;
  uVar6 = (ulong)*(uint *)(this_00 + 0x24);
  if ((0 < (int)*(uint *)(this_00 + 0x24)) && (iVar1 = *(int *)(this + 0x10), 0 < iVar1)) {
    lVar4 = *(long *)(this + 0x18);
    lVar5 = *(long *)(this_00 + 0x30);
    iVar3 = 0;
                    /* catch() { ... } // from try @ 00547150 with catch @ 005470e0
                       catch() { ... } // from try @ 005471f4 with catch @ 005470e0 */
    do {
      if ((*(int *)(this_00 + 0x20) == 0x1406) && (0 < (int)uVar6)) {
        lVar9 = 0;
        do {
          lVar7 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
          uVar6 = (ulong)*(int *)(this_00 + 0x24);
        } while (lVar9 < (long)uVar6);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x44;
      lVar5 = lVar5 + (ulong)*(uint *)(this_00 + 0x28);
    } while (iVar3 != iVar1);
    this_00 = *(Mesh **)this;
  }
  uVar6 = (ulong)*(uint *)(this_00 + 0x3c);
  if ((0 < (int)*(uint *)(this_00 + 0x3c)) && (iVar1 = *(int *)(this + 0x10), 0 < iVar1)) {
                    /* try { // try from 0054714c to 0064714f has its CatchHandler @ 005471ac */
                    /* try { // try from 00547150 to 006471cb has its CatchHandler @ 005470e0 */
    lVar5 = *(long *)(this_00 + 0x48);
    iVar3 = 0;
    lVar4 = *(long *)(this + 0x18) + 0x10;
    do {
      if ((*(int *)(this_00 + 0x38) == 0x1406) && (0 < (int)uVar6)) {
        lVar9 = 0;
        do {
          lVar7 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
          uVar6 = (ulong)*(int *)(this_00 + 0x3c);
        } while (lVar9 < (long)uVar6);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x44;
      lVar5 = lVar5 + (ulong)*(uint *)(this_00 + 0x40);
    } while (iVar3 != iVar1);
                    /* catch() { ... } // from try @ 0054714c with catch @ 005471ac */
    this_00 = *(Mesh **)this;
  }
  uVar6 = (ulong)*(uint *)(this_00 + 0x5c);
  if ((0 < (int)*(uint *)(this_00 + 0x5c)) && (iVar1 = *(int *)(this + 0x10), 0 < iVar1)) {
                    /* try { // try from 005471cc to 006471f3 has its CatchHandler @ 005471fc */
    lVar5 = *(long *)(this_00 + 0x68);
    iVar3 = 0;
    lVar4 = *(long *)(this + 0x18) + 0x20;
    do {
      if ((*(int *)(this_00 + 0x58) == 0x1401) && (0 < (int)uVar6)) {
        lVar9 = 0;
        do {
                    /* try { // try from 005471f4 to 006471ff has its CatchHandler @ 005470e0 */
          *(undefined1 *)(lVar5 + lVar9) = *(undefined1 *)(lVar4 + lVar9);
                    /* catch() { ... } // from try @ 005471cc with catch @ 005471fc */
          uVar6 = (ulong)*(int *)(this_00 + 0x5c);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)uVar6);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x44;
      lVar5 = lVar5 + (ulong)*(uint *)(this_00 + 0x60);
    } while (iVar3 != iVar1);
                    /* catch() { ... } // from try @ 00547294 with catch @ 00547224
                       catch() { ... } // from try @ 00547338 with catch @ 00547224 */
    this_00 = *(Mesh **)this;
  }
  if (0 < *(int *)(this_00 + 0x140)) {
    lVar4 = 0;
    do {
      iVar1 = *(int *)(this + 0x10);
      if (0 < iVar1) {
        iVar3 = 0;
        piVar8 = (int *)(*(long *)(this_00 + 0x50) + lVar4 * 0x18);
        lVar9 = *(long *)(piVar8 + 4);
        lVar5 = *(long *)(this + 0x18) + lVar4 * 0x10 + 0x24;
        do {
          if ((*piVar8 == 0x1406) && (0 < piVar8[1])) {
            lVar7 = 0;
            do {
              lVar2 = lVar7 * 4;
                    /* try { // try from 00547290 to 00647293 has its CatchHandler @ 005472f0 */
                    /* try { // try from 00547294 to 0064730f has its CatchHandler @ 00547224 */
              lVar7 = lVar7 + 1;
              *(undefined4 *)(lVar9 + lVar2) = *(undefined4 *)(lVar5 + lVar2);
            } while (lVar7 < piVar8[1]);
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 0x44;
          lVar9 = lVar9 + (ulong)(uint)piVar8[2];
        } while (iVar3 != iVar1);
        this_00 = *(Mesh **)this;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this_00 + 0x140));
  }
  uVar6 = (ulong)*(uint *)(this_00 + 0xc);
  if ((0 < (int)*(uint *)(this_00 + 0xc)) && (iVar1 = *(int *)(this + 0x30), 0 < iVar1)) {
    lVar4 = *(long *)(this + 0x38);
                    /* catch() { ... } // from try @ 00547290 with catch @ 005472f0 */
    lVar5 = *(long *)(this_00 + 0x18);
    iVar3 = 0;
    do {
      if ((*(int *)(this_00 + 8) == 0x1403) && (0 < (int)uVar6)) {
                    /* try { // try from 00547310 to 00647337 has its CatchHandler @ 00547340 */
        lVar9 = 0;
        do {
          *(short *)(lVar5 + lVar9 * 2) = (short)*(undefined4 *)(lVar4 + lVar9 * 4);
          uVar6 = (ulong)*(int *)(this_00 + 0xc);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)uVar6);
      }
      iVar3 = iVar3 + 1;
                    /* try { // try from 00547338 to 00647343 has its CatchHandler @ 00547224 */
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + (ulong)*(uint *)(this_00 + 0x10);
                    /* catch() { ... } // from try @ 00547310 with catch @ 00547340 */
    } while (iVar3 != iVar1);
    this_00 = *(Mesh **)this;
  }
  Mesh::UpdateBoundingBox(this_00);
  return this;
}


