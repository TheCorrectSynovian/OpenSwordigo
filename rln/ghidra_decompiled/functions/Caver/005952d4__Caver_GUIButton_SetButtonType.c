/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005952d4
 * Function: Caver::GUIButton::SetButtonType
 * Signature: undefined __thiscall SetButtonType(GUIButton * this, GUIButtonType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetButtonType(Caver::GUIButtonType) */

void __thiscall Caver::GUIButton::SetButtonType(GUIButton *this,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIRoundedRect *pGVar5;
  int *piVar6;
  int iVar7;
  GUIButton local_58;
  GUIButton local_57;
  GUIButton local_56;
  GUIButton local_55;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x198) != param_2) {
    *(int *)(this + 0x198) = param_2;
    if (param_2 == 1) {
      pGVar5 = operator_new(0xa8);
      GUIRoundedRect::GUIRoundedRect(pGVar5);
      local_48[0] = *(long *)(this + 0x128);
      *(GUIRoundedRect **)(this + 0x128) = pGVar5;
      boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
                ((scoped_ptr<Caver::GUIRoundedRect> *)local_48);
      pGVar5 = *(GUIRoundedRect **)(this + 0x128);
      FUN_00666bb8(local_48,"ui_roundrect",auStack_50);
      GUIRoundedRect::InitWithTextureName(pGVar5,(string *)local_48);
      puVar4 = PTR_DAT_007e5de8;
      if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar6 = (int *)(local_48[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar6;
          *piVar6 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_48[0] + -0x18));
        }
      }
      pGVar5 = operator_new(0xa8);
      GUIRoundedRect::GUIRoundedRect(pGVar5);
      local_48[0] = *(long *)(this + 0x138);
      *(GUIRoundedRect **)(this + 0x138) = pGVar5;
                    /* try { // try from 00595390 to 006953bb has its CatchHandler @ 005953d8 */
      boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
                ((scoped_ptr<Caver::GUIRoundedRect> *)local_48);
      pGVar5 = *(GUIRoundedRect **)(this + 0x138);
      FUN_00666bb8(local_48,"ui_roundrectbg",auStack_50);
      GUIRoundedRect::InitWithTextureName(pGVar5,(string *)local_48);
      if ((undefined *)(local_48[0] + -0x18) != puVar4) {
        piVar6 = (int *)(local_48[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar6;
          *piVar6 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar2) {
              *piVar6 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_48[0] + -0x18));
        }
      }
      local_58 = this[0x1b8];
                    /* catch() { ... } // from try @ 00595390 with catch @ 005953d8 */
      local_57 = this[0x1b9];
      local_56 = this[0x1ba];
      local_55 = this[0x1bb];
      GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0x138),&local_58);
    }
    else {
      local_48[0] = *(long *)(this + 0x128);
                    /* catch() { ... } // from try @ 00594b64 with catch @ 005953fc */
      *(undefined8 *)(this + 0x128) = 0;
      boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
                ((scoped_ptr<Caver::GUIRoundedRect> *)local_48);
      local_48[0] = *(long *)(this + 0x138);
      *(undefined8 *)(this + 0x138) = 0;
      boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
                ((scoped_ptr<Caver::GUIRoundedRect> *)local_48);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00595430 to 00695657 has its CatchHandler @ 00595660 */
  return;
}


