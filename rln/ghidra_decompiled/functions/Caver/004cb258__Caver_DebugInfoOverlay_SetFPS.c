/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cb258
 * Function: Caver::DebugInfoOverlay::SetFPS
 * Signature: undefined __thiscall SetFPS(DebugInfoOverlay * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DebugInfoOverlay::SetFPS(float) */

void __thiscall Caver::DebugInfoOverlay::SetFPS(DebugInfoOverlay *this,float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  size_t *psVar7;
  GUILabel *this_00;
  void *pvVar8;
  long local_1c0;
  void *local_1b8 [2];
  long local_1a8;
  undefined *local_1a0 [2];
  uint auStack_190 [10];
  undefined1 auStack_168 [16];
  long local_158;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (_DAT_00684434 < ABS(param_1 - *(float *)(this + 0x154))) {
    *(float *)(this + 0x154) = param_1;
    FUN_00646a98(&local_1a8,0x10);
    *(uint *)((long)auStack_190 + *(long *)(local_1a8 + -0x18)) =
         *(uint *)((long)auStack_190 + *(long *)(local_1a8 + -0x18)) | 4;
    *(undefined8 *)((long)local_1a0 + *(long *)(local_1a8 + -0x18)) = 1;
    FUN_00641620((double)*(float *)(this + 0x154),&local_1a8);
    this_00 = *(GUILabel **)(this + 0xf0);
    FUN_006459d8(&local_1c0,local_1a0);
    FUN_0035a030(local_1b8,"FPS: ",&local_1c0);
    pvVar8 = local_1b8[0];
    psVar7 = (size_t *)((long)local_1b8[0] + -0x18);
    if ((*psVar7 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_1b8[0],*(void **)(this_00 + 0x100),*psVar7), iVar5 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,local_1b8);
      GUILabel::UpdateText(this_00);
      psVar7 = (size_t *)((long)local_1b8[0] + -0x18);
      pvVar8 = local_1b8[0];
    }
    puVar4 = PTR_DAT_007e5de8;
    if (psVar7 != (size_t *)PTR_DAT_007e5de8) {
      piVar6 = (int *)((long)pvVar8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar6;
        *piVar6 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete(psVar7);
      }
    }
    if ((undefined *)(local_1c0 + -0x18) != puVar4) {
      piVar6 = (int *)(local_1c0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar6;
        *piVar6 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_1c0 + -0x18));
      }
    }
    local_1a8 = *(long *)PTR_PTR_007e6d78;
    *(undefined8 *)((long)local_1a0 + *(long *)(local_1a8 + -0x18) + -8) =
         *(undefined8 *)(PTR_PTR_007e6d78 + 0x18);
    local_1a0[0] = PTR_DAT_007e5770 + 0x10;
    if ((undefined *)(local_158 + -0x18) != puVar4) {
      piVar6 = (int *)(local_158 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar6;
        *piVar6 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_158 + -0x18));
      }
    }
    local_1a0[0] = PTR_DAT_007e6a48 + 0x10;
    FUN_0063c0c8(auStack_168);
    FUN_006221dc(auStack_150);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


