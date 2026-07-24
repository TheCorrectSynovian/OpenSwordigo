/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e3fac
 * Function: Caver::TargetFrame::UpdateHealthText
 * Signature: undefined __thiscall UpdateHealthText(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TargetFrame::UpdateHealthText() */

void __thiscall Caver::TargetFrame::UpdateHealthText(TargetFrame *this)

{
  FontText *this_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *local_88;
  long local_80 [2];
  float local_70 [5];
  char acStack_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this_00 = (FontText *)(this + 0x210);
  FontText::Clear(this_00);
  puVar5 = PTR_DAT_007e5de8;
  uVar10 = (uint)(*(float *)(this + 0x108) * _DAT_0068782c);
  puVar9 = PTR_DAT_007e5de8 + 0x18;
  uVar1 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar1 = uVar10;
  }
  local_88 = puVar9;
  pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                     (uVar1,acStack_5c);
  if ((int)uVar10 < 0) {
    pcVar6 = pcVar6 + -1;
    *pcVar6 = '-';
    puVar9 = local_88;
  }
  FUN_00669e1c(&local_88,0,*(undefined8 *)(puVar9 + -0x18),pcVar6,(long)acStack_5c - (long)pcVar6);
  FUN_0066a528(local_80,&local_88);
  FUN_006677d4(local_80,&DAT_00690c08,1);
  local_70[0] = 0.0;
  local_70[1] = 0.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e3e8c with catch @ 004e4078
                        */
                    /* try { // try from 004e407c to 005e4083 has its CatchHandler @ 004e408c */
  FontText::AddText(this_00,(string *)local_80,0.0,(Vector2 *)local_70);
                    /* try { // try from 004e4084 to 005e408f has its CatchHandler @ 004e3e44 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004e407c with catch @ 004e408c
                        */
                    /* catch() { ... } // from try @ 004e40e4 with catch @ 004e4090
                       catch() { ... } // from try @ 004e418c with catch @ 004e4090 */
  if ((undefined *)(local_80[0] + -0x18) != puVar5) {
    piVar7 = (int *)(local_80[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 004e40b4 with catch @ 004e4120 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_80[0] + -0x18));
    }
  }
  if (local_88 + -0x18 != puVar5) {
    piVar7 = (int *)(local_88 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 004e4148 with catch @ 004e417c */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
                    /* try { // try from 004e4148 to 005e414b has its CatchHandler @ 004e417c */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* catch() { ... } // from try @ 004e40dc with catch @ 004e4180 */
                    /* try { // try from 004e4184 to 005e418b has its CatchHandler @ 004e4194 */
    if (iVar8 < 1) {
                    /* try { // try from 004e418c to 005e4197 has its CatchHandler @ 004e4090 */
      operator_delete(local_88 + -0x18);
    }
  }
                    /* try { // try from 004e40b4 to 005e40b7 has its CatchHandler @ 004e4120 */
  local_70[1] = *(float *)(this + 0x88) + 8.0;
  local_70[0] = (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -10.0) -
                (*(float *)(this + 0x250) + *(float *)(this + 600));
                    /* try { // try from 004e40dc to 005e40e3 has its CatchHandler @ 004e4180 */
  FontText::Translate(this_00,(Vector2 *)local_70);
                    /* try { // try from 004e40e4 to 005e4147 has its CatchHandler @ 004e4090 */
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004e4184 with catch @ 004e4194 */
    __stack_chk_fail();
  }
  return;
}


