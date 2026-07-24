/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046b0d0
 * Function: Caver::MainMenuViewController::~MainMenuViewController
 * Signature: undefined __thiscall ~MainMenuViewController(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::~MainMenuViewController() */

void __thiscall Caver::MainMenuViewController::~MainMenuViewController(MainMenuViewController *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ProfileManager *this_00;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
                    /* catch() { ... } // from try @ 0046b018 with catch @ 0046b0d0 */
  puVar5 = PTR_vtable_007e70f8;
  lVar4 = tpidr_el0;
  lVar10 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0046b0f4 to 0056b11b has its CatchHandler @ 0046b120 */
  puVar6 = PTR_vtable_007e70f8 + 200;
  puVar1 = PTR_vtable_007e70f8 + 0x120;
  *(undefined **)(this + 0x50) = PTR_vtable_007e70f8 + 0xe8;
  *(undefined **)(this + 0x48) = puVar6;
                    /* catch() { ... } // from try @ 0046b0f4 with catch @ 0046b120 */
                    /* catch() { ... } // from try @ 0046afec with catch @ 0046b124 */
  *(undefined **)this = puVar5 + 0x10;
  *(undefined **)(this + 0x60) = puVar5 + 0x138;
  *(undefined **)(this + 0x58) = puVar1;
  *(undefined **)(this + 0x68) = puVar5 + 0x150;
  this_00 = (ProfileManager *)ProfileManager::sharedManager();
  ProfileManager::RemoveDelegate(this_00,(IProfileManagerDelegate *)(this + 0x58));
                    /* try { // try from 0046b148 to 0056b16f has its CatchHandler @ 0046b1c8 */
  puVar6 = (undefined *)(*(long *)(this + 0x120) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(this + 0x120) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
                    /* try { // try from 0046b2e8 to 0056b2f7 has its CatchHandler @ 0046b394 */
      operator_delete(puVar6);
      plVar11 = *(long **)(this + 0x100);
      goto joined_r0x0046b2f4;
    }
  }
  plVar11 = *(long **)(this + 0x100);
joined_r0x0046b2f4:
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
                    /* try { // try from 0046b190 to 0056b1b7 has its CatchHandler @ 0046b1bc */
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  plVar11 = *(long **)(this + 0xf0);
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0046b190 with catch @ 0046b1bc */
                    /* catch() { ... } // from try @ 0046b148 with catch @ 0046b1c8 */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* try { // try from 0046b1ec to 0056b213 has its CatchHandler @ 0046b21c */
  plVar11 = *(long **)(this + 0xe0);
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
                    /* try { // try from 0046b214 to 0056b27b has its CatchHandler @ 0046aed8 */
    lVar7 = plVar11[2];
                    /* catch() { ... } // from try @ 0046b1ec with catch @ 0046b21c */
    plVar11[2] = lVar7 + -1;
                    /* catch() { ... } // from try @ 0046af74 with catch @ 0046b220
                       catch() { ... } // from try @ 0046b060 with catch @ 0046b220 */
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  GameOptions::~GameOptions((GameOptions *)(this + 0x80));
  plVar11 = *(long **)(this + 0x78);
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
                    /* try { // try from 0046b284 to 0056b2e7 has its CatchHandler @ 0046b284
                       catch() { ... } // from try @ 0046b284 with catch @ 0046b284
                       catch() { ... } // from try @ 0046b2f8 with catch @ 0046b284 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  if (*(long *)(lVar4 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


