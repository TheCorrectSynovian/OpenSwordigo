/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00489c70
 * Function: Caver::BadgeCountView::SetCount
 * Signature: undefined __thiscall SetCount(BadgeCountView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BadgeCountView::SetCount(int) */

void __thiscall Caver::BadgeCountView::SetCount(BadgeCountView *this,int param_1)

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
  undefined *puVar10;
  undefined *local_80 [4];
  char acStack_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(int *)(this + 0xec) != param_1) {
    *(int *)(this + 0xec) = param_1;
    puVar5 = PTR_DAT_007e5de8;
    this_00 = *(GUILabel **)(this + 0x100);
    uVar1 = -param_1;
    if (-1 < param_1) {
      uVar1 = param_1;
    }
    puVar10 = PTR_DAT_007e5de8 + 0x18;
    local_80[0] = puVar10;
    pcVar7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar1,acStack_5c);
    if (param_1 < 0) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = '-';
      puVar10 = local_80[0];
    }
    FUN_00669e1c(local_80,0,*(undefined8 *)(puVar10 + -0x18),pcVar7,(long)acStack_5c - (long)pcVar7)
    ;
    puVar10 = local_80[0];
                    /* try { // try from 00489d0c to 00589d0f has its CatchHandler @ 00489f5c */
    psVar9 = (size_t *)(local_80[0] + -0x18);
    if ((*psVar9 != *(size_t *)((long)*(void **)(this_00 + 0x100) + -0x18)) ||
       (iVar6 = memcmp(local_80[0],*(void **)(this_00 + 0x100),*psVar9), iVar6 != 0)) {
                    /* try { // try from 00489d30 to 00589d37 has its CatchHandler @ 00489f64 */
      FUN_0066a6a8(this_00 + 0x100,local_80);
      GUILabel::UpdateText(this_00);
      psVar9 = (size_t *)(local_80[0] + -0x18);
      puVar10 = local_80[0];
    }
    if (psVar9 != (size_t *)puVar5) {
      piVar8 = (int *)(puVar10 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar8;
        *piVar8 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar8;
                    /* try { // try from 00489dbc to 00589ddb has its CatchHandler @ 00489f60 */
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
    iVar6 = *(int *)(this + 0xec);
                    /* try { // try from 00489d60 to 00589d6b has its CatchHandler @ 00489f54 */
    *(bool *)(*(long *)(this + 0xf0) + 0xe4) = iVar6 == 0;
    if (iVar6 != 0) {
      (**(code **)(*(long *)this + 0x58))(this);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00489da0 to 00589dab has its CatchHandler @ 00489f58 */
  return;
}


