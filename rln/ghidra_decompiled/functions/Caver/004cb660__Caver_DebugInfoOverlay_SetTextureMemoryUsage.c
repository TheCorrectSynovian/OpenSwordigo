/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cb660
 * Function: Caver::DebugInfoOverlay::SetTextureMemoryUsage
 * Signature: undefined __thiscall SetTextureMemoryUsage(DebugInfoOverlay * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::SetTextureMemoryUsage(int) */

void __thiscall Caver::DebugInfoOverlay::SetTextureMemoryUsage(DebugInfoOverlay *this,int param_1)

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
  long local_50;
  void *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x148) != param_1) {
    this_00 = *(GUILabel **)(this + 0x100);
                    /* try { // try from 004cb690 to 005cb69b has its CatchHandler @ 004cb750 */
    *(int *)(this + 0x148) = param_1;
    FormatByteSize((int)this);
    FUN_0035a030(local_48,&DAT_006922ea,&local_50);
    pvVar8 = local_48[0];
    psVar7 = (size_t *)((long)local_48[0] + -0x18);
                    /* try { // try from 004cb6bc to 005cb6d3 has its CatchHandler @ 004cb738 */
    if ((*psVar7 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_48[0],*(void **)(this_00 + 0x100),*psVar7), iVar5 != 0)) {
      FUN_0066a6a8(this_00 + 0x100,local_48);
      GUILabel::UpdateText(this_00);
      psVar7 = (size_t *)((long)local_48[0] + -0x18);
      pvVar8 = local_48[0];
    }
    puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 004cb6f8 to 005cb703 has its CatchHandler @ 004cb744 */
    if (psVar7 != (size_t *)PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 004cb4e0 with catch @ 004cb738
                       catch() { ... } // from try @ 004cb5ec with catch @ 004cb738
                       catch() { ... } // from try @ 004cb654 with catch @ 004cb738
                       catch() { ... } // from try @ 004cb6bc with catch @ 004cb738 */
      piVar6 = (int *)((long)pvVar8 + -8);
                    /* catch() { ... } // from try @ 004cb6f8 with catch @ 004cb744 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar6;
        *piVar6 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar6;
                    /* catch() { ... } // from try @ 004cb690 with catch @ 004cb750 */
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
                    /* try { // try from 004cb704 to 005cb77b has its CatchHandler @ 004cb43c */
    if ((undefined *)(local_50 + -0x18) != puVar4) {
                    /* catch() { ... } // from try @ 004cb628 with catch @ 004cb75c */
      piVar6 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004cb7a4 to 005cb7af has its CatchHandler @ 004cb43c */
        iVar5 = *piVar6;
                    /* catch() { ... } // from try @ 004cb77c with catch @ 004cb7ac */
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
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


