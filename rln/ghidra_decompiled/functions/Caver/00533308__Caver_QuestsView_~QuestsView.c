/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00533308
 * Function: Caver::QuestsView::~QuestsView
 * Signature: undefined __thiscall ~QuestsView(QuestsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::~QuestsView() */

void __thiscall Caver::QuestsView::~QuestsView(QuestsView *this)

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
  
                    /* try { // try from 00533310 to 00633323 has its CatchHandler @ 00533348 */
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00533324 to 0063334b has its CatchHandler @ 005332f4 */
  *(undefined **)this = PTR_vtable_007e6108 + 0x10;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUILabel>>>>
              *)(this + 0x160),*(_Rb_tree_node **)(this + 0x170));
                    /* catch() { ... } // from try @ 00533310 with catch @ 00533348 */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>
              *)(this + 0x130),*(_Rb_tree_node **)(this + 0x140));
  if (*(void **)(this + 0x118) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x118));
  }
  plVar9 = *(long **)(this + 0x110);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005333bc with catch @ 00533378 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 005333a0 to 006333a3 has its CatchHandler @ 005333b0 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = *(long **)(this + 0x100);
                    /* catch() { ... } // from try @ 005333a0 with catch @ 005333b0 */
                    /* try { // try from 005333b4 to 006333bb has its CatchHandler @ 005333c4 */
                    /* try { // try from 005333bc to 006333c7 has its CatchHandler @ 00533378 */
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005333b4 with catch @ 005333c4 */
                    /* try { // try from 005333c8 to 0063343f has its CatchHandler @ 005333c8
                       catch() { ... } // from try @ 005333c8 with catch @ 005333c8
                       catch() { ... } // from try @ 00533444 with catch @ 005333c8
                       catch() { ... } // from try @ 005334b4 with catch @ 005333c8
                       catch() { ... } // from try @ 00533558 with catch @ 005333c8 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)(this + 0xf0) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e4808 + 0x10;
  if (bVar3) {
                    /* try { // try from 00533444 to 00633497 has its CatchHandler @ 005333c8 */
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
                    /* try { // try from 00533440 to 00633443 has its CatchHandler @ 00533538 */
  return;
}


