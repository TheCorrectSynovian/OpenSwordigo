/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dfd28
 * Function: Caver::ManaBar::ManaBar
 * Signature: undefined __thiscall ManaBar(ManaBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaBar::ManaBar() */

void __thiscall Caver::ManaBar::ManaBar(ManaBar *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  string *psVar6;
  GUISlider *pGVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  ManaBar *pMVar13;
  undefined1 auStack_78 [8];
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e6780 + 0x10;
  pMVar13 = this + 0xf0;
  *(undefined8 *)pMVar13 = 0;
  this[0xe5] = (ManaBar)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_manabar_background",auStack_50);
                    /* catch() { ... } // from try @ 004dfdec with catch @ 004dfd9c */
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* try { // try from 004dfdbc to 005dfdbf has its CatchHandler @ 004dfde0 */
  psVar6 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004dfdc0 to 005dfdc7 has its CatchHandler @ 004dfdd8 */
  FUN_00666bb8(&local_60,"ui_manabar",auStack_78);
                    /* catch() { ... } // from try @ 004dfdc0 with catch @ 004dfdd8 */
                    /* catch() { ... } // from try @ 004dfdbc with catch @ 004dfde0 */
                    /* try { // try from 004dfde4 to 005dfdeb has its CatchHandler @ 004dfdfc */
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
                    /* try { // try from 004dfdec to 005dfdff has its CatchHandler @ 004dfd9c */
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar11 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 004dfde4 with catch @ 004dfdfc */
  pGVar7 = operator_new(0x170);
  GUISlider::GUISlider(pGVar7);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>
            ((shared_ptr<Caver::GUISlider> *)&local_60,pGVar7);
  lVar9 = *(long *)(this + 0xf0);
  plVar1 = *(long **)(this + 0xf8);
  *(long *)(this + 0xf0) = local_60;
  *(long **)(this + 0xf8) = local_58;
  local_60 = lVar9;
  local_58 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar9 = plVar1[2];
    plVar1[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pGVar7 = *(GUISlider **)pMVar13;
  pGVar7[0xe5] = (GUISlider)0x0;
  GUISlider::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_68);
  GUISlider::SetBarTexture(*(GUISlider **)pMVar13,(intrusive_ptr *)&local_70);
  local_60 = *(long *)(this + 0xf0);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0xf8);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar10)(this,&local_60);
  plVar1 = local_58;
  if ((local_58 != (long *)0x0) && (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar9 = plVar1[2];
    plVar1[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  local_58 = *(long **)((long)local_68 + 0x54);
  local_60 = 0;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_60);
  if ((local_70 != (long *)0x0) &&
     (iVar12 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if ((local_68 != (long *)0x0) &&
     (iVar12 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar12, iVar12 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


