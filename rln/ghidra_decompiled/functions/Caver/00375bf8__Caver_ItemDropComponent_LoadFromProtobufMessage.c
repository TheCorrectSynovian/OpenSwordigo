/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00375bf8
 * Function: Caver::ItemDropComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ItemDropComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ItemDropComponent::LoadFromProtobufMessage(ItemDropComponent *this,Component *param_1)

{
  FastVector<Caver::ItemDropComponent::ItemDropEntry> *this_00;
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *local_90;
  undefined *puStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar7 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5880,
                     *(MessageLite **)(PTR_extension_007e5880 + 8));
  FUN_0066a6a8(this + 0x78,*(undefined8 *)(lVar7 + 0x10));
  FUN_0066a6a8(this + 0x80,*(undefined8 *)(lVar7 + 0x18));
  uVar2 = *(uint *)(lVar7 + 0x5c);
  if ((uVar2 >> 3 & 1) != 0) {
    this[0x70] = *(ItemDropComponent *)(lVar7 + 0x58);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    this[0x71] = *(ItemDropComponent *)(lVar7 + 0x59);
  }
  iVar8 = *(int *)(lVar7 + 0x28);
  this_00 = (FastVector<Caver::ItemDropComponent::ItemDropEntry> *)(this + 0x88);
  if (*(int *)(this + 0x8c) < iVar8) {
    FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(this_00,iVar8);
    iVar8 = *(int *)(lVar7 + 0x28);
  }
  puVar6 = PTR_DAT_007e5de8;
  if (0 < iVar8) {
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    lVar12 = 0;
    do {
      lVar10 = *(long *)(*(long *)(lVar7 + 0x20) + lVar12 * 8);
      local_90 = puVar1;
      puStack_88 = puVar1;
      FUN_0066a6a8(&local_90,*(undefined8 *)(lVar10 + 0x10));
      FUN_0066a6a8((ulong)&local_90 | 8,*(undefined8 *)(lVar10 + 0x18));
      local_80 = (undefined4)*(undefined8 *)(lVar10 + 0x20);
      uStack_7c = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
      local_78 = *(undefined4 *)(lVar10 + 0x28);
      iVar8 = *(int *)(this + 0x88);
      if (*(int *)(this + 0x8c) <= iVar8) {
        iVar8 = *(int *)(this + 0x8c) * 2;
        if (iVar8 < 0xb) {
          iVar8 = 10;
        }
        FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(this_00,iVar8);
        iVar8 = *(int *)this_00;
      }
      lVar11 = *(long *)(this + 0x90);
      lVar10 = lVar11 + (long)iVar8 * 0x20;
      FUN_0066a6a8(lVar10,&local_90);
      FUN_0066a6a8(lVar10 + 8,(ulong)&local_90 | 8);
      lVar11 = lVar11 + (long)iVar8 * 0x20;
      *(undefined4 *)(lVar11 + 0x18) = local_78;
      *(ulong *)(lVar11 + 0x10) = CONCAT44(uStack_7c,local_80);
      *(int *)this_00 = *(int *)this_00 + 1;
      if (puStack_88 + -0x18 != puVar6) {
        piVar9 = (int *)(puStack_88 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar9;
          *piVar9 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(puStack_88 + -0x18);
        }
      }
      if (local_90 + -0x18 != puVar6) {
        piVar9 = (int *)(local_90 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar9;
          *piVar9 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_90 + -0x18);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(lVar7 + 0x28));
  }
  puVar6 = PTR_DAT_007e5de8;
  if ((*(long *)(**(long **)(lVar7 + 0x10) + -0x18) != 0) && (*(int *)this_00 == 0)) {
    local_90 = PTR_DAT_007e5de8 + 0x18;
    puStack_88 = local_90;
    FUN_0066a6a8(&local_90);
    FUN_0066a6a8((ulong)&local_90 | 8,*(undefined8 *)(lVar7 + 0x18));
    local_80 = 0x3f800000;
    uStack_7c = 1;
    local_78 = 1;
    iVar8 = *(int *)(this + 0x88);
    if (*(int *)(this + 0x8c) <= iVar8) {
      iVar8 = *(int *)(this + 0x8c) * 2;
      if (iVar8 < 0xb) {
        iVar8 = 10;
      }
      FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(this_00,iVar8);
      iVar8 = *(int *)this_00;
    }
    lVar12 = *(long *)(this + 0x90);
    lVar7 = lVar12 + (long)iVar8 * 0x20;
    FUN_0066a6a8(lVar7,&local_90);
    FUN_0066a6a8(lVar7 + 8,(ulong)&local_90 | 8);
    lVar12 = lVar12 + (long)iVar8 * 0x20;
    *(undefined4 *)(lVar12 + 0x18) = local_78;
    *(ulong *)(lVar12 + 0x10) = CONCAT44(uStack_7c,local_80);
    *(int *)this_00 = *(int *)this_00 + 1;
    if (puStack_88 + -0x18 != puVar6) {
      piVar9 = (int *)(puStack_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(puStack_88 + -0x18);
      }
    }
    if (local_90 + -0x18 != puVar6) {
      piVar9 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar9;
        *piVar9 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_90 + -0x18);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


