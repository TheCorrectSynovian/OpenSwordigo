/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059823c
 * Function: Caver::GUILabel::BoundsForCharacterAtIndex
 * Signature: undefined __thiscall BoundsForCharacterAtIndex(GUILabel * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::BoundsForCharacterAtIndex(int) */

void __thiscall Caver::GUILabel::BoundsForCharacterAtIndex(GUILabel *this,int param_1)

{
  GUILabel *pGVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *in_x8;
  int *piVar8;
  size_t *psVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  void *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  long local_68;
  
                    /* try { // try from 0059824c to 006982cb has its CatchHandler @ 0059824c
                       catch() { ... } // from try @ 0059824c with catch @ 0059824c
                       catch() { ... } // from try @ 005996ec with catch @ 0059824c
                       catch() { ... } // from try @ 0059abf8 with catch @ 0059824c */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x120) != 0) {
    FontText::BoundsForCharacterAtIndex((int)*(long *)(this + 0x120));
    goto LAB_005983cc;
  }
  FUN_00666bb8(&local_88,&DAT_00693851,auStack_78);
  pvVar11 = local_88;
  pGVar1 = this + 0x100;
  psVar9 = (size_t *)((long)local_88 + -0x18);
  if ((*psVar9 != *(size_t *)((long)*(void **)(this + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_88,*(void **)(this + 0x100),*psVar9), iVar6 != 0)) {
                    /* try { // try from 005982cc to 006982d3 has its CatchHandler @ 0059a3d0 */
    FUN_0066a6a8(pGVar1,&local_88);
    UpdateText(this);
                    /* try { // try from 005982e0 to 006982e7 has its CatchHandler @ 0059a3cc */
    psVar9 = (size_t *)((long)local_88 + -0x18);
    pvVar11 = local_88;
  }
                    /* try { // try from 005982e8 to 006982fb has its CatchHandler @ 0059a3c8 */
  puVar5 = PTR_DAT_007e5de8;
  if (psVar9 == (size_t *)PTR_DAT_007e5de8) {
LAB_005982f8:
    lVar7 = *(long *)(this + 0x120);
                    /* try { // try from 005982fc to 0069830f has its CatchHandler @ 0059a504 */
    if (lVar7 == 0) goto LAB_00598360;
LAB_00598300:
    FontText::BoundsForCharacterAtIndex((int)lVar7);
    pvVar11 = local_88;
    uVar12 = uStack_80;
                    /* try { // try from 00598310 to 0069831f has its CatchHandler @ 0059a398 */
  }
  else {
    piVar8 = (int *)((long)pvVar11 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar8;
                    /* try { // try from 00598340 to 00698343 has its CatchHandler @ 0059a504 */
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
    if (0 < iVar6) goto LAB_005982f8;
    operator_delete(psVar9);
    lVar7 = *(long *)(this + 0x120);
                    /* try { // try from 0059835c to 00698363 has its CatchHandler @ 0059a394 */
    if (lVar7 != 0) goto LAB_00598300;
LAB_00598360:
    pvVar11 = (void *)0x0;
                    /* try { // try from 00598364 to 00698377 has its CatchHandler @ 0059a390 */
    uVar12 = 0;
  }
                    /* try { // try from 00598378 to 0069838b has its CatchHandler @ 0059a4fc */
  FUN_00666bb8(&local_88,&DAT_0068fbeb,auStack_78);
  pvVar10 = local_88;
  psVar9 = (size_t *)((long)local_88 + -0x18);
                    /* try { // try from 0059838c to 00698393 has its CatchHandler @ 0059a380 */
                    /* try { // try from 00598394 to 006983a7 has its CatchHandler @ 0059a37c */
  if ((*psVar9 != *(size_t *)((long)*(void **)pGVar1 + -0x18)) ||
     (iVar6 = memcmp(local_88,*(void **)pGVar1,*psVar9), iVar6 != 0)) {
                    /* try { // try from 005983a8 to 006983bb has its CatchHandler @ 0059a4f4 */
    FUN_0066a6a8(pGVar1,&local_88);
    UpdateText(this);
                    /* try { // try from 005983bc to 006983cb has its CatchHandler @ 0059a708 */
    psVar9 = (size_t *)((long)local_88 + -0x18);
    pvVar10 = local_88;
  }
  if (psVar9 != (size_t *)puVar5) {
                    /* try { // try from 00598404 to 0069842b has its CatchHandler @ 00599d90 */
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
  *in_x8 = pvVar11;
  in_x8[1] = uVar12;
LAB_005983cc:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


