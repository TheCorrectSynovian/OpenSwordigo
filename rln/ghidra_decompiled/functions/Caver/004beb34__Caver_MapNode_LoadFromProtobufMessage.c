/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004beb34
 * Function: Caver::MapNode::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&) */

void __thiscall Caver::MapNode::LoadFromProtobufMessage(MapNode *this,MapNode *param_1)

{
  undefined *puVar1;
  MapNode *pMVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined *local_90;
  undefined8 local_88;
  undefined2 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  pMVar2 = *(MapNode **)PTR_default_instance__007e5378;
  if (*(long *)(param_1 + 0x10) != 0) {
    pMVar2 = param_1;
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(pMVar2 + 0x10) + 0xc);
  FUN_0066a6a8(this + 0x10,*(undefined8 *)(param_1 + 0x18));
  FUN_0066a6a8(this + 0x18,*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x60);
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
  uVar7 = DAT_00689bc8;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar13 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      local_88 = uVar7;
      local_80 = 0;
      local_90 = puVar1;
      FUN_0066a6a8(&local_90,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + lVar13 * 8) + 0x10));
      lVar11 = *(long *)(*(long *)(param_1 + 0x28) + lVar13 * 8);
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(lVar11 + 0x18));
                    /* try { // try from 004bec68 to 005bec8f has its CatchHandler @ 004becc4 */
      if ((*(int *)(lVar11 + 0x1c) == 1) || (*(int *)(lVar11 + 0x1c) == 2)) {
        local_88 = *(undefined8 *)(lVar11 + 0x18);
      }
      local_80 = CONCAT11(local_80._1_1_,*(undefined1 *)(lVar11 + 0x20));
      lVar11 = *(long *)(this + 0x38);
      if (lVar11 == *(long *)(this + 0x40)) {
        std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux
                  ((vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>> *)
                   (this + 0x30),lVar11,&local_90);
      }
      else {
        FUN_0066a528(lVar11,&local_90);
                    /* try { // try from 004bec90 to 005becdf has its CatchHandler @ 004bec04 */
        *(undefined2 *)(lVar11 + 0x10) = local_80;
        *(undefined8 *)(lVar11 + 8) = local_88;
        *(long *)(this + 0x38) = *(long *)(this + 0x38) + 0x18;
      }
                    /* catch() { ... } // from try @ 004bec68 with catch @ 004becc4 */
      if (local_90 + -0x18 != puVar9) {
        piVar10 = (int *)(local_90 + -8);
        if (puVar8 == (undefined *)0x0) {
          iVar12 = *piVar10;
          *piVar10 = iVar12 + -1;
        }
        else {
          do {
            iVar12 = *piVar10;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar5) {
              *piVar10 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        if (iVar12 < 1) {
          operator_delete(local_90 + -0x18);
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x30));
  }
                    /* try { // try from 004bece0 to 005bee1f has its CatchHandler @ 004bece0
                       catch() { ... } // from try @ 004bece0 with catch @ 004bece0
                       catch() { ... } // from try @ 004bee48 with catch @ 004bece0 */
  uVar3 = *(uint *)(param_1 + 0x84);
  if ((uVar3 >> 5 & 1) != 0) {
    this[0x48] = *(MapNode *)(param_1 + 100);
  }
  if ((uVar3 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x68);
  }
  FUN_0066a6a8(this + 0x60,*(undefined8 *)(param_1 + 0x70));
  this[0x68] = *(MapNode *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x7c);
  this[0x70] = *(MapNode *)(param_1 + 0x80);
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


