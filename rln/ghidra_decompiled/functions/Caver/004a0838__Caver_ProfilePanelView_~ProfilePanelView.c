/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a0838
 * Function: Caver::ProfilePanelView::~ProfilePanelView
 * Signature: undefined __thiscall ~ProfilePanelView(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::~ProfilePanelView() */

void __thiscall Caver::ProfilePanelView::~ProfilePanelView(ProfilePanelView *this)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 0x250);
  puVar1 = PTR_vtable_007e79c0 + 0x170;
  puVar2 = PTR_vtable_007e79c0 + 400;
  *(undefined **)this = PTR_vtable_007e79c0 + 0x10;
  *(undefined **)(this + 0x118) = puVar2;
  *(undefined **)(this + 0x110) = puVar1;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  HeroEquipmentManager::~HeroEquipmentManager((HeroEquipmentManager *)(this + 0x208));
  plVar4 = *(long **)(this + 0x200);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1f0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1e0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 004a0968 to 005a09e3 has its CatchHandler @ 004a0968
                       catch(type#1 @ 00000000) { ... } // from try @ 004a0968 with catch @ 004a0968
                       catch(type#1 @ 00000000) { ... } // from try @ 004a09e8 with catch @ 004a0968
                       catch(type#1 @ 00000000) { ... } // from try @ 004a0ab0 with catch @ 004a0968
                        */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1d0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1c0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* try { // try from 004a09e4 to 005a09e7 has its CatchHandler @ 004a0a88 */
    lVar5 = plVar4[2];
                    /* try { // try from 004a09e8 to 005a0aa7 has its CatchHandler @ 004a0968 */
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1b0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x1a0);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a09e4 with catch @ 004a0a88
                        */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 400);
                    /* try { // try from 004a0aa8 to 005a0aaf has its CatchHandler @ 004a0ab8 */
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004a0ab0 to 005a0abb has its CatchHandler @ 004a0968 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004a0aa8 with catch @ 004a0ab8
                        */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x180);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x170);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x158);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x128);
  if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = plVar4[2];
    plVar4[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  GUIFrameView::~GUIFrameView((GUIFrameView *)this);
  return;
}


