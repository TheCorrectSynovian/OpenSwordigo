/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cb89c
 * Function: Caver::DebugInfoOverlay::SetNumVertices
 * Signature: undefined __thiscall SetNumVertices(DebugInfoOverlay * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::SetNumVertices(int, int) */

void __thiscall
Caver::DebugInfoOverlay::SetNumVertices(DebugInfoOverlay *this,int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  GUILabel *this_00;
  size_t *psVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  void *local_80 [4];
  char acStack_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((*(int *)(this + 0x158) != param_1) || (*(int *)(this + 0x15c) != param_2)) {
    *(int *)(this + 0x158) = param_1;
    *(int *)(this + 0x15c) = param_2;
    puVar5 = PTR_DAT_007e5de8;
    this_00 = *(GUILabel **)(this + 0x110);
    uVar1 = -param_1;
    if (-1 < param_1) {
      uVar1 = param_1;
    }
    puVar11 = PTR_DAT_007e5de8 + 0x18;
    local_98 = puVar11;
    pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_5c);
    if (param_1 < 0) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = '-';
      puVar11 = local_98;
    }
    FUN_00669e1c(&local_98,0,*(undefined8 *)(puVar11 + -0x18),pcVar7,(long)acStack_5c - (long)pcVar7
                );
    FUN_0035a030(&local_90,"Static vertices: ",&local_98);
    FUN_0066a528(&local_88,&local_90);
    FUN_006677d4(&local_88,", Skinned vertices: ",0x14);
    uVar1 = -param_2;
    if (-1 < param_2) {
      uVar1 = param_2;
    }
    local_a0 = puVar5 + 0x18;
    pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_5c);
    puVar11 = puVar5 + 0x18;
    if (param_2 < 0) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = '-';
      puVar11 = local_a0;
    }
    FUN_00669e1c(&local_a0,0,*(undefined8 *)(puVar11 + -0x18),pcVar7,(long)acStack_5c - (long)pcVar7
                );
    FUN_0066a528(local_80,&local_88);
    FUN_00667614(local_80,&local_a0);
    pvVar10 = local_80[0];
    psVar9 = (size_t *)((long)local_80[0] + -0x18);
    if ((*psVar9 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar6 = memcmp(local_80[0],*(void **)(this_00 + 0x100),*psVar9), iVar6 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,local_80);
      GUILabel::UpdateText(this_00);
      psVar9 = (size_t *)((long)local_80[0] + -0x18);
      pvVar10 = local_80[0];
    }
    if (psVar9 != (size_t *)puVar5) {
      piVar8 = (int *)((long)pvVar10 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(psVar9);
      }
    }
    if (local_a0 + -0x18 != puVar5) {
      piVar8 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_a0 + -0x18);
      }
    }
    if ((undefined *)(local_88 + -0x18) != puVar5) {
      piVar8 = (int *)(local_88 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_88 + -0x18));
      }
    }
    if ((undefined *)(local_90 + -0x18) != puVar5) {
      piVar8 = (int *)(local_90 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_90 + -0x18));
      }
    }
    if (local_98 + -0x18 != puVar5) {
      piVar8 = (int *)(local_98 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_98 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


