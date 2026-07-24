/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cbf00
 * Function: Caver::DebugInfoOverlay::SetNumTriangles
 * Signature: undefined __thiscall SetNumTriangles(DebugInfoOverlay * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::SetNumTriangles(int) */

void __thiscall Caver::DebugInfoOverlay::SetNumTriangles(DebugInfoOverlay *this,int param_1)

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
  undefined *local_78;
  void *local_70 [4];
  char acStack_4c [4];
  long local_48;
  
                    /* try { // try from 004cbf08 to 005cbf0b has its CatchHandler @ 004cbf1c */
                    /* try { // try from 004cbf0c to 005cbf57 has its CatchHandler @ 004cbe44 */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 004cbf08 with catch @ 004cbf1c */
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 004cbebc with catch @ 004cbf24 */
  if (*(int *)(this + 0x160) != param_1) {
                    /* catch() { ... } // from try @ 004cbe98 with catch @ 004cbf34 */
    *(int *)(this + 0x160) = param_1;
    puVar5 = PTR_DAT_007e5de8;
    this_00 = *(GUILabel **)(this + 0x120);
    uVar1 = -param_1;
    if (-1 < param_1) {
      uVar1 = param_1;
    }
    puVar11 = PTR_DAT_007e5de8 + 0x18;
    local_78 = puVar11;
                    /* try { // try from 004cbf58 to 005cbfb3 has its CatchHandler @ 004cbfbc */
    pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_4c);
    if (param_1 < 0) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = '-';
      puVar11 = local_78;
    }
    FUN_00669e1c(&local_78,0,*(undefined8 *)(puVar11 + -0x18),pcVar7,(long)acStack_4c - (long)pcVar7
                );
    FUN_0035a030(local_70,"Triangles: ",&local_78);
    pvVar10 = local_70[0];
    psVar9 = (size_t *)((long)local_70[0] + -0x18);
                    /* try { // try from 004cbfb4 to 005cbfbf has its CatchHandler @ 004cbe44 */
                    /* catch() { ... } // from try @ 004cbf58 with catch @ 004cbfbc */
                    /* catch() { ... } // from try @ 004cbfd4 with catch @ 004cbfc0 */
    if ((*psVar9 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar6 = memcmp(local_70[0],*(void **)(this_00 + 0x100),*psVar9), iVar6 != 0)) {
                    /* try { // try from 004cbfd0 to 005cbfd3 has its CatchHandler @ 004cbfe4 */
                    /* try { // try from 004cbfd4 to 005cbff7 has its CatchHandler @ 004cbfc0 */
      FUN_0066a6a8(this_00 + 0x100,local_70);
      GUILabel::UpdateText(this_00);
                    /* catch() { ... } // from try @ 004cbfd0 with catch @ 004cbfe4 */
      psVar9 = (size_t *)((long)local_70[0] + -0x18);
      pvVar10 = local_70[0];
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
                    /* try { // try from 004cbff8 to 005cc013 has its CatchHandler @ 004cbff8
                       catch() { ... } // from try @ 004cbff8 with catch @ 004cbff8
                       catch() { ... } // from try @ 004cc018 with catch @ 004cbff8 */
    if (local_78 + -0x18 != puVar5) {
                    /* catch() { ... } // from try @ 004cc014 with catch @ 004cc054 */
      piVar8 = (int *)(local_78 + -8);
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
        operator_delete(local_78 + -0x18);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004cc014 to 005cc017 has its CatchHandler @ 004cc054 */
                    /* try { // try from 004cc018 to 005cc067 has its CatchHandler @ 004cbff8 */
  return;
}


