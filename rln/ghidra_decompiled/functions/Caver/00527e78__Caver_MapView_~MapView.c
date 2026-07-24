/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527e78
 * Function: Caver::MapView::~MapView
 * Signature: undefined __thiscall ~MapView(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::~MapView() */

void __thiscall Caver::MapView::~MapView(MapView *this)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(this + 0x410);
  *(undefined **)this = PTR_vtable_007e7fa8 + 0x10;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x3d0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3c8);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3c0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3b8);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3b0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3a8);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x3a0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x398);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x390);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x388);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x380);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x378);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x370);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x368);
                    /* catch() { ... } // from try @ 005280f4 with catch @ 005280c4 */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
                    /* try { // try from 005280e0 to 006280f3 has its CatchHandler @ 00528118 */
  plVar4 = *(long **)(this + 0x360);
                    /* try { // try from 005280f4 to 0062811b has its CatchHandler @ 005280c4 */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x358);
                    /* catch() { ... } // from try @ 005280e0 with catch @ 00528118 */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x350);
                    /* catch() { ... } // from try @ 0052817c with catch @ 0052813c */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x348);
                    /* try { // try from 00528160 to 00628163 has its CatchHandler @ 00528170 */
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
                    /* catch() { ... } // from try @ 00528160 with catch @ 00528170 */
                    /* try { // try from 00528174 to 0062817b has its CatchHandler @ 00528184 */
  if (*(void **)(this + 0x328) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x328));
  }
                    /* try { // try from 0052817c to 00628187 has its CatchHandler @ 0052813c */
  if (*(void **)(this + 0x310) != (void *)0x0) {
                    /* catch() { ... } // from try @ 00528174 with catch @ 00528184 */
    operator_delete__(*(void **)(this + 0x310));
  }
                    /* try { // try from 00528188 to 006281cf has its CatchHandler @ 00528188
                       catch(type#1 @ 00000000) { ... } // from try @ 00528188 with catch @ 00528188
                       catch(type#1 @ 00000000) { ... } // from try @ 005281ec with catch @ 00528188
                       catch(type#1 @ 00000000) { ... } // from try @ 00528260 with catch @ 00528188
                        */
  plVar4 = *(long **)(this + 0x2f0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(this + 0x2e8);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
                    /* try { // try from 005281d0 to 006281eb has its CatchHandler @ 00528254 */
  plVar4 = *(long **)(this + 0x2e0);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 005281ec to 00628257 has its CatchHandler @ 00528188 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x2d0);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005281d0 with catch @ 00528254
                        */
                    /* try { // try from 00528258 to 0062825f has its CatchHandler @ 00528268 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* try { // try from 00528260 to 0062826b has its CatchHandler @ 00528188 */
  plVar4 = *(long **)(this + 0x2c0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00528258 with catch @ 00528268
                        */
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005282a8 with catch @ 00528284 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 005282a4 to 006282a7 has its CatchHandler @ 005282b8 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
                    /* try { // try from 005282a8 to 006282cb has its CatchHandler @ 00528284 */
  plVar4 = *(long **)(this + 0x2b0);
                    /* catch() { ... } // from try @ 005282a4 with catch @ 005282b8 */
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x298);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (*(void **)(this + 0x270) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x270));
  }
  if (*(void **)(this + 600) != (void *)0x0) {
    operator_delete__(*(void **)(this + 600));
  }
  plVar4 = *(long **)(this + 0x238);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 0x218) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x218));
  }
  if (*(void **)(this + 0x200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x200));
  }
  plVar4 = *(long **)(this + 0x1e0);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 0x1c0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1c0));
  }
  if (*(void **)(this + 0x1a8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1a8));
  }
  plVar4 = *(long **)(this + 0x188);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(void **)(this + 0x168) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x168));
  }
  if (*(void **)(this + 0x150) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x150));
  }
  plVar4 = *(long **)(this + 0x130);
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  pvVar5 = *(void **)(this + 0x118);
  pvVar1 = *(void **)(this + 0x120);
  if (pvVar5 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar5 + 8);
      if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = plVar4[2];
        plVar4[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar5 = (void *)((long)pvVar5 + 0x10);
    } while (pvVar1 != pvVar5);
    pvVar5 = *(void **)(this + 0x118);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  plVar4 = *(long **)(this + 0x110);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x100);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


