/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bee30
 * Function: Caver::MapNode::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode*) const */

void __thiscall Caver::MapNode::SaveToProtobufMessage(MapNode *this,MapNode *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  MapNode MVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  Vector2 *this_00;
  long lVar11;
  MapNode_Portal *this_01;
  
                    /* try { // try from 004bee48 to 005bef33 has its CatchHandler @ 004bece0 */
  this_00 = *(Vector2 **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
  if (this_00 == (Vector2 *)0x0) {
    this_00 = operator_new(0x18);
    Proto::Vector2::Vector2(this_00);
    *(Vector2 **)(param_1 + 0x10) = this_00;
  }
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)(this + 8);
  *(uint *)(this_00 + 0x14) = *(uint *)(this_00 + 0x14) | 3;
  puVar7 = PTR__default_level_name__007e5878;
  plVar8 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 2;
  if (plVar8 == (long *)puVar7) {
    plVar8 = operator_new(8);
    *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar8;
  }
  FUN_0066a6a8(plVar8,this + 0x10);
  puVar7 = PTR__default_title__007e6348;
  if (*(long *)(*(long *)(this + 0x18) + -0x18) != 0) {
    plVar8 = *(long **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    if (plVar8 == (long *)puVar7) {
      plVar8 = operator_new(8);
                    /* catch() { ... } // from try @ 004bee20 with catch @ 004bef18 */
      *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x20) = plVar8;
    }
    FUN_0066a6a8(plVar8,this + 0x18);
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x20);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  puVar7 = PTR__default_destination_name__007e6b58;
  lVar11 = *(long *)(this + 0x30);
  lVar3 = *(long *)(this + 0x38);
  if (lVar11 != lVar3) {
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      if (*(char *)(lVar11 + 0x11) == '\0') {
        iVar2 = *(int *)(param_1 + 0x30);
        iVar9 = *(int *)(param_1 + 0x34);
        if (iVar2 < iVar9) {
          *(int *)(param_1 + 0x30) = iVar2 + 1;
          this_01 = *(MapNode_Portal **)(*(long *)(param_1 + 0x28) + (long)iVar2 * 8);
        }
        else {
                    /* try { // try from 004bef94 to 005befff has its CatchHandler @ 004bef94
                       catch() { ... } // from try @ 004bef94 with catch @ 004bef94
                       catch() { ... } // from try @ 004bf004 with catch @ 004bef94
                       catch() { ... } // from try @ 004bf094 with catch @ 004bef94 */
          if (iVar9 == *(int *)(param_1 + 0x38)) {
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                      ((RepeatedPtrFieldBase *)(param_1 + 0x28),iVar9 + 1);
            iVar9 = *(int *)(param_1 + 0x34);
          }
          *(int *)(param_1 + 0x34) = iVar9 + 1;
          this_01 = operator_new(0x28);
          Proto::MapNode_Portal::MapNode_Portal(this_01);
          iVar2 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x30) = iVar2 + 1;
          *(MapNode_Portal **)(*(long *)(param_1 + 0x28) + (long)iVar2 * 8) = this_01;
        }
        plVar8 = *(long **)(this_01 + 0x10);
        *(uint *)(this_01 + 0x24) = *(uint *)(this_01 + 0x24) | 1;
        if (plVar8 == (long *)puVar7) {
          plVar8 = operator_new(8);
          *plVar8 = (long)puVar1;
                    /* try { // try from 004bf000 to 005bf003 has its CatchHandler @ 004bf0b4 */
          *(long **)(this_01 + 0x10) = plVar8;
        }
                    /* try { // try from 004bf004 to 005bf08f has its CatchHandler @ 004bef94 */
        FUN_0066a6a8(plVar8,lVar11);
        uVar4 = *(uint *)(this_01 + 0x24);
        uVar5 = *(undefined4 *)(lVar11 + 8);
        uVar10 = uVar4 | 2;
        *(uint *)(this_01 + 0x24) = uVar10;
        *(undefined4 *)(this_01 + 0x18) = uVar5;
        iVar2 = *(int *)(lVar11 + 0xc);
        if ((iVar2 == 2) || (iVar2 == 1)) {
          uVar10 = uVar4 | 6;
          *(uint *)(this_01 + 0x24) = uVar10;
          *(int *)(this_01 + 0x1c) = iVar2;
        }
        if (*(char *)(lVar11 + 0x10) != '\0') {
          *(uint *)(this_01 + 0x24) = uVar10 | 8;
          this_01[0x20] = (MapNode_Portal)0x1;
        }
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar3 != lVar11);
  }
  if (this[0x48] != (MapNode)0x0) {
    param_1[100] = (MapNode)0x1;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x20;
  }
  if (*(int *)(this + 0x58) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(this + 0x58);
                    /* try { // try from 004bf090 to 005bf093 has its CatchHandler @ 004bf0b0 */
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x40;
  }
                    /* try { // try from 004bf094 to 005bf0c7 has its CatchHandler @ 004bef94 */
  puVar7 = PTR__default_music__007e7748;
  if (*(long *)(*(long *)(this + 0x60) + -0x18) != 0) {
    plVar8 = *(long **)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 004bf090 with catch @ 004bf0b0 */
                    /* catch() { ... } // from try @ 004bf000 with catch @ 004bf0b4 */
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x80;
    if (plVar8 == (long *)puVar7) {
                    /* try { // try from 004bf0c8 to 005bf0f7 has its CatchHandler @ 004bf0c8
                       catch() { ... } // from try @ 004bf0c8 with catch @ 004bf0c8
                       catch() { ... } // from try @ 004bf3a4 with catch @ 004bf0c8 */
      plVar8 = operator_new(8);
      *plVar8 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x70) = plVar8;
    }
    FUN_0066a6a8(plVar8,this + 0x60);
  }
  uVar4 = *(uint *)(param_1 + 0x84);
  MVar6 = this[0x68];
  *(uint *)(param_1 + 0x84) = uVar4 | 0x100;
                    /* try { // try from 004bf0f8 to 005bf10b has its CatchHandler @ 004bf8ac */
  *(MapNode *)(param_1 + 0x78) = MVar6;
  uVar5 = *(undefined4 *)(this + 0x6c);
  *(uint *)(param_1 + 0x84) = uVar4 | 0x300;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  if (this[0x70] != (MapNode)0x0) {
                    /* try { // try from 004bf118 to 005bf123 has its CatchHandler @ 004bf840 */
    *(uint *)(param_1 + 0x84) = uVar4 | 0x700;
    param_1[0x80] = (MapNode)0x1;
  }
  return;
}


