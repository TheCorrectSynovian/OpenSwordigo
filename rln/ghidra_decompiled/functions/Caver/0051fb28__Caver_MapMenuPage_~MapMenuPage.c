/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051fb28
 * Function: Caver::MapMenuPage::~MapMenuPage
 * Signature: undefined __thiscall ~MapMenuPage(MapMenuPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::~MapMenuPage() */

void __thiscall Caver::MapMenuPage::~MapMenuPage(MapMenuPage *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(this + 0x1f0);
  puVar4 = PTR_vtable_007e7bc8 + 0x170;
  *(undefined **)this = PTR_vtable_007e7bc8 + 0x10;
  *(undefined **)(this + 0xf8) = puVar4;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
                    /* catch() { ... } // from try @ 0051fbc0 with catch @ 0051fb90 */
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 0051fbac to 0061fbbf has its CatchHandler @ 0051fbe4 */
  plVar9 = *(long **)(this + 0x1e0);
                    /* try { // try from 0051fbc0 to 0061fbe7 has its CatchHandler @ 0051fb90 */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051fbac with catch @ 0051fbe4 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x1d0);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051fc7c with catch @ 0051fc2c */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x1c0);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0051fc60 to 0061fc63 has its CatchHandler @ 0051fc70 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
                    /* catch() { ... } // from try @ 0051fc60 with catch @ 0051fc70 */
    if (lVar6 + -1 == 0) {
                    /* try { // try from 0051fc74 to 0061fc7b has its CatchHandler @ 0051fc84 */
                    /* try { // try from 0051fc7c to 0061fc87 has its CatchHandler @ 0051fc2c */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 0051fc74 with catch @ 0051fc84 */
                    /* try { // try from 0051fc88 to 0061fcfb has its CatchHandler @ 0051fc88
                       catch() { ... } // from try @ 0051fc88 with catch @ 0051fc88
                       catch() { ... } // from try @ 0051fd18 with catch @ 0051fc88
                       catch() { ... } // from try @ 0051fd88 with catch @ 0051fc88
                       catch() { ... } // from try @ 0051fddc with catch @ 0051fc88
                       catch() { ... } // from try @ 0051fe30 with catch @ 0051fc88
                       catch() { ... } // from try @ 0051febc with catch @ 0051fc88
                       catch() { ... } // from try @ 0051ff38 with catch @ 0051fc88 */
  if (*(void **)(this + 0x198) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x198));
  }
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  plVar9 = *(long **)(this + 0x160);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = *(long **)(this + 0x110);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar9 = *(long **)(this + 0x108);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0051fcfc to 0061fd17 has its CatchHandler @ 0051ff2c */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
                    /* try { // try from 0051fd18 to 0061fd83 has its CatchHandler @ 0051fc88 */
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e4808 + 0x10;
  if (bVar3) {
                    /* try { // try from 0051fd84 to 0061fd87 has its CatchHandler @ 0051ff18 */
                    /* try { // try from 0051fd88 to 0061fdd7 has its CatchHandler @ 0051fc88 */
    piVar7 = (int *)(*(long *)(this + 0xf0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
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


