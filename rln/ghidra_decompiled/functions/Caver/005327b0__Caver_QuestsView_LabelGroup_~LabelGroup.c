/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005327b0
 * Function: Caver::QuestsView::LabelGroup::~LabelGroup
 * Signature: undefined __thiscall ~LabelGroup(LabelGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::LabelGroup::~LabelGroup() */

void __thiscall Caver::QuestsView::LabelGroup::~LabelGroup(LabelGroup *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  plVar3 = *(long **)(this + 0x30);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x20);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 00532884 with catch @ 00532854 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pvVar4 = *(void **)this;
  pvVar1 = *(void **)(this + 8);
  if (pvVar4 != pvVar1) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
                    /* try { // try from 00532870 to 00632883 has its CatchHandler @ 005328a8 */
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00532884 to 006328ab has its CatchHandler @ 00532854 */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 00532870 with catch @ 005328a8 */
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar1 != pvVar4);
    pvVar4 = *(void **)this;
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
                    /* catch() { ... } // from try @ 0053291c with catch @ 005328d8 */
  return;
}


