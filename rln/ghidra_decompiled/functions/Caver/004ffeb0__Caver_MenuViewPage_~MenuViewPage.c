/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ffeb0
 * Function: Caver::MenuViewPage::~MenuViewPage
 * Signature: undefined __thiscall ~MenuViewPage(MenuViewPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuViewPage::~MenuViewPage() */

void __thiscall Caver::MenuViewPage::~MenuViewPage(MenuViewPage *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e4808 + 0x10;
  if (bVar3) {
    piVar6 = (int *)(*(long *)(this + 0xf0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


