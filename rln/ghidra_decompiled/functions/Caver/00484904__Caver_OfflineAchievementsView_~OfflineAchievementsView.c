/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00484904
 * Function: Caver::OfflineAchievementsView::~OfflineAchievementsView
 * Signature: undefined __thiscall ~OfflineAchievementsView(OfflineAchievementsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::~OfflineAchievementsView() */

void __thiscall
Caver::OfflineAchievementsView::~OfflineAchievementsView(OfflineAchievementsView *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = *(long **)(this + 0x160);
  *(undefined **)this = PTR_vtable_007e72c8 + 0x10;
                    /* try { // try from 00484930 to 00584937 has its CatchHandler @ 00484a74 */
                    /* try { // try from 00484938 to 0058497b has its CatchHandler @ 004847c0 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x150);
                    /* try { // try from 0048497c to 00584987 has its CatchHandler @ 00484a44 */
                    /* try { // try from 00484988 to 00584a67 has its CatchHandler @ 004847c0 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pvVar4 = *(void **)(this + 0x130);
  pvVar1 = *(void **)(this + 0x138);
  if (pvVar4 != pvVar1) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar1 != pvVar4);
    pvVar4 = *(void **)(this + 0x130);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = *(long **)(this + 0x128);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048497c with catch @ 00484a44 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 00484a68 to 00584acf has its CatchHandler @ 00484ad4 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch() { ... } // from try @ 00484930 with catch @ 00484a74 */
  plVar3 = *(long **)(this + 0x118);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 00484850 with catch @ 00484aa4 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x108);
                    /* try { // try from 00484ad0 to 00584b5f has its CatchHandler @ 004847c0 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00484a68 with catch @ 00484ad4 */
                    /* catch() { ... } // from try @ 00484828 with catch @ 00484ad8 */
                    /* catch() { ... } // from try @ 00484818 with catch @ 00484adc */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
                    /* catch() { ... } // from try @ 0048483c with catch @ 00484af0
                       catch() { ... } // from try @ 0048487c with catch @ 00484af0 */
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0xf8);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 00484b60 to 00584bb3 has its CatchHandler @ 00484b60
                       catch() { ... } // from try @ 00484b60 with catch @ 00484b60
                       catch() { ... } // from try @ 00484c00 with catch @ 00484b60 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


