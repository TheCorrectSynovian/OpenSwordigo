/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059a550
 * Function: Caver::GUINavigationController::SetCurrentViewController
 * Signature: undefined __thiscall SetCurrentViewController(GUINavigationController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController>
   const&) */

void __thiscall
Caver::GUINavigationController::SetCurrentViewController
          (GUINavigationController *this,shared_ptr *param_1)

{
  bool bVar1;
  GUIView *this_00;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long **)(this + 0x50) == (long *)0x0) goto LAB_0059a7ac;
  (**(code **)(**(long **)(this + 0x50) + 0x40))();
  plVar5 = *(long **)(this + 0x50);
  plVar5[8] = 0;
  plVar4 = *(long **)(this + 0x58);
  if (plVar4 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00598f58 with catch @ 0059a594
                       catch() { ... } // from try @ 00598fe8 with catch @ 0059a594 */
    plVar4[1] = plVar4[1] + 1;
  }
  lVar2 = plVar5[3];
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = plVar5[3];
                    /* catch() { ... } // from try @ 00598b9c with catch @ 0059a604
                       catch() { ... } // from try @ 00598c30 with catch @ 0059a604 */
    plVar5 = (long *)plVar5[4];
    if (plVar5 != (long *)0x0) goto LAB_0059a5ac;
LAB_0059a60c:
    bVar1 = lVar2 == 0;
  }
  else {
    plVar5 = (long *)plVar5[4];
    if (plVar5 == (long *)0x0) goto LAB_0059a60c;
LAB_0059a5ac:
    bVar1 = lVar2 == 0;
    if (plVar5[1] == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 00598dd4 with catch @ 0059a5cc
                       catch() { ... } // from try @ 00598e68 with catch @ 0059a5cc */
      lVar2 = plVar5[2];
      plVar5[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
                    /* catch() { ... } // from try @ 00598a34 with catch @ 0059a63c
                       catch() { ... } // from try @ 00598ac8 with catch @ 0059a63c */
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (!bVar1) {
    plVar5 = *(long **)(this + 0x50);
    plVar4 = (long *)plVar5[3];
    if (plVar4 == (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar4 = (long *)plVar5[3];
    }
    plVar5 = (long *)plVar5[4];
    if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 005988a4 with catch @ 0059a674
                       catch() { ... } // from try @ 00598938 with catch @ 0059a674 */
      plVar5[1] = plVar5[1] + 1;
    }
    (**(code **)(*plVar4 + 0x78))();
    if ((plVar5 != (long *)0x0) && (lVar2 = plVar5[1], plVar5[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0059869c with catch @ 0059a6ac
                       catch() { ... } // from try @ 00598730 with catch @ 0059a6ac */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar2 = plVar5[2];
      plVar5[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  plVar4 = *(long **)(this + 0x58);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005983bc with catch @ 0059a708
                       catch() { ... } // from try @ 0059844c with catch @ 0059a708 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  this_00 = *(GUIView **)(this + 0x18);
  if (this_00 == (GUIView *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
    this_00 = *(GUIView **)(this + 0x18);
  }
  plVar4 = *(long **)(this + 0x20);
  if (plVar4 != (long *)0x0) {
    plVar4[1] = plVar4[1] + 1;
  }
  GUIView::PurgeRemovedSubviews(this_00);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar2 = plVar4[2];
    plVar4[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_0059a7ac:
  lVar2 = *(long *)param_1;
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0x58);
    *(long *)(this + 0x50) = lVar2;
    *(long *)(this + 0x58) = lVar3;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
                    /* catch() { ... } // from try @ 00599400 with catch @ 0059a814
                       catch() { ... } // from try @ 005994ec with catch @ 0059a814 */
    plVar4 = *(long **)param_1;
    lVar2 = plVar4[3];
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar2 = plVar4[3];
      plVar4 = (long *)plVar4[4];
    }
    else {
      plVar4 = (long *)plVar4[4];
                    /* catch() { ... } // from try @ 005994f4 with catch @ 0059a824
                       catch() { ... } // from try @ 00599598 with catch @ 0059a824 */
    }
    if ((plVar4 != (long *)0x0) && (plVar4[1] == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 00598c6c with catch @ 0059a850
                       catch() { ... } // from try @ 00598d10 with catch @ 0059a850 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
                    /* catch() { ... } // from try @ 00598774 with catch @ 0059a860
                       catch() { ... } // from try @ 0059897c with catch @ 0059a860
                       catch() { ... } // from try @ 00598eac with catch @ 0059a860
                       catch() { ... } // from try @ 005991a0 with catch @ 0059a860 */
      }
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)param_1);
    }
    *(GUINavigationController **)(*(long *)param_1 + 0x40) = this + 0x48;
  }
  return;
}


