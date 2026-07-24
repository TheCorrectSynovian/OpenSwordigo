/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048b644
 * Function: Caver::ChooseAgeView::SliderValueChanged
 * Signature: undefined __cdecl SliderValueChanged(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChooseAgeView::SliderValueChanged(void*, Caver::GUIEvent*) */

void Caver::ChooseAgeView::SliderValueChanged(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  GUILabel *this;
  undefined *local_70 [4];
  char acStack_4c [4];
  long local_48;
  
                    /* try { // try from 0048b650 to 0058b667 has its CatchHandler @ 0048b7a8 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(GUIEvent **)((long)param_1 + 0x128) == param_2) {
                    /* try { // try from 0048b678 to 0058b68b has its CatchHandler @ 0048b7a4 */
    UpdateArrowFrames(param_1);
    puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 0048b68c to 0058b6a3 has its CatchHandler @ 0048b76c */
    uVar9 = (uint)*(float *)(*(long *)((long)param_1 + 0x128) + 0x124);
                    /* try { // try from 0048b6a4 to 0058b837 has its CatchHandler @ 0048b580 */
    if (0x40 < (int)uVar9) {
      uVar9 = 0x41;
    }
    local_70[0] = PTR_DAT_007e5de8 + 0x18;
    if ((int)uVar9 < 2) {
      uVar9 = 1;
    }
    pcVar6 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                       (uVar9,acStack_4c);
    FUN_00669e1c(local_70,0,*(undefined8 *)puVar4,pcVar6,(long)acStack_4c - (long)pcVar6);
    if (uVar9 == 0x41) {
      FUN_006677d4(local_70,&DAT_0069239d,1);
    }
    this = *(GUILabel **)((long)param_1 + 0x118);
    if ((*(size_t *)(local_70[0] + -0x18) != *(size_t *)((long)*(void **)(this + 0x100) + -0x18)) ||
       (iVar5 = memcmp(local_70[0],*(void **)(this + 0x100),*(size_t *)(local_70[0] + -0x18)),
       iVar5 != 0)) {
      FUN_0066a6a8(this + 0x100,local_70);
      GUILabel::UpdateText(this);
    }
    puVar7 = *(undefined8 **)((long)param_1 + 0xf0);
    *(uint *)((long)param_1 + 0xec) = uVar9;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,param_1);
    }
    if (local_70[0] + -0x18 != puVar4) {
      piVar8 = (int *)(local_70[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar8;
        *piVar8 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
                    /* catch() { ... } // from try @ 0048b678 with catch @ 0048b7a4 */
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete(local_70[0] + -0x18);
      }
    }
  }
                    /* catch() { ... } // from try @ 0048b68c with catch @ 0048b76c */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


