/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050dc14
 * Function: Caver::InventoryTrinketSlot::SetTrinket
 * Signature: undefined __thiscall SetTrinket(InventoryTrinketSlot * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::SetTrinket(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::InventoryTrinketSlot::SetTrinket(InventoryTrinketSlot *this,shared_ptr *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  GUILabel GVar9;
  int *piVar10;
  GUILabel *this_00;
  size_t *psVar11;
  void *pvVar12;
  undefined *puVar13;
  undefined *local_88;
  void *local_80 [4];
  char acStack_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
                    /* try { // try from 0050dc34 to 0060dc37 has its CatchHandler @ 0050dde4 */
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0050dc38 to 0060ddf7 has its CatchHandler @ 0050db18 */
  MenuItemSlot::SetItem(*(MenuItemSlot **)(this + 0x110),param_1);
  uVar6 = CharacterState::ItemCount((CharacterState *)(*(long *)(this + 0x100) + 0x10),param_1);
  puVar5 = PTR_DAT_007e5de8;
  this_00 = *(GUILabel **)(this + 0x120);
  if (*(float *)(this + 0x140) <= DAT_0068493c) {
    GVar9 = (GUILabel)0x1;
  }
  else {
    puVar13 = PTR_DAT_007e5de8 + 0x18;
    uVar1 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    local_88 = puVar13;
    pcVar8 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_5c);
    if ((int)uVar6 < 0) {
      pcVar8 = pcVar8 + -1;
      *pcVar8 = '-';
      puVar13 = local_88;
    }
    FUN_00669e1c(&local_88,0,*(undefined8 *)(puVar13 + -0x18),pcVar8,(long)acStack_5c - (long)pcVar8
                );
    FUN_0035a030(local_80,"Level ",&local_88);
    pvVar12 = local_80[0];
    psVar11 = (size_t *)((long)local_80[0] + -0x18);
    if ((*psVar11 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar7 = memcmp(local_80[0],*(void **)(this_00 + 0x100),*psVar11), iVar7 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,local_80);
      GUILabel::UpdateText(this_00);
      psVar11 = (size_t *)((long)local_80[0] + -0x18);
      pvVar12 = local_80[0];
    }
    if (psVar11 != (size_t *)puVar5) {
      piVar10 = (int *)((long)pvVar12 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar10;
        *piVar10 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(psVar11);
                    /* catch() { ... } // from try @ 0050dc34 with catch @ 0050dde4 */
      }
    }
    if (local_88 + -0x18 != puVar5) {
      piVar10 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar10;
        *piVar10 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(local_88 + -0x18);
      }
    }
    this_00 = *(GUILabel **)(this + 0x120);
    GVar9 = (GUILabel)0x0;
  }
  this_00[0xe4] = GVar9;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


