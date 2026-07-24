/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b5484
 * Function: Caver::GUIViewLayout::~GUIViewLayout
 * Signature: undefined __thiscall ~GUIViewLayout(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::~GUIViewLayout() */

void __thiscall Caver::GUIViewLayout::~GUIViewLayout(GUIViewLayout *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 004b54ac to 005b5527 has its CatchHandler @ 004b54ac
                       catch() { ... } // from try @ 004b54ac with catch @ 004b54ac
                       catch() { ... } // from try @ 004b552c with catch @ 004b54ac
                       catch() { ... } // from try @ 004b5560 with catch @ 004b54ac */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
              *)(this + 0x20),*(_Rb_tree_node **)(this + 0x30));
  pvVar10 = *(void **)(this + 8);
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar10 != pvVar1) {
    do {
      plVar11 = *(long **)((long)pvVar10 + 8);
      if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar7 = plVar11[2];
        plVar11[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      pvVar10 = (void *)((long)pvVar10 + 0x10);
    } while (pvVar1 != pvVar10);
    pvVar10 = *(void **)(this + 8);
  }
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
                    /* try { // try from 004b5528 to 005b552b has its CatchHandler @ 004b5580 */
                    /* try { // try from 004b552c to 005b555b has its CatchHandler @ 004b54ac */
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* try { // try from 004b5594 to 005b55c3 has its CatchHandler @ 004b5594
                       catch() { ... } // from try @ 004b5594 with catch @ 004b5594
                       catch() { ... } // from try @ 004b5870 with catch @ 004b5594 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 004b555c with catch @ 004b557c */
                    /* catch() { ... } // from try @ 004b5528 with catch @ 004b5580 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004b555c to 005b555f has its CatchHandler @ 004b557c */
                    /* try { // try from 004b5560 to 005b5593 has its CatchHandler @ 004b54ac */
  return;
}


