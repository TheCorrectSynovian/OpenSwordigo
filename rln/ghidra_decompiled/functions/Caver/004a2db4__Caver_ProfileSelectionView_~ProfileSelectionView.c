/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a2db4
 * Function: Caver::ProfileSelectionView::~ProfileSelectionView
 * Signature: undefined __thiscall ~ProfileSelectionView(ProfileSelectionView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::~ProfileSelectionView() */

void __thiscall Caver::ProfileSelectionView::~ProfileSelectionView(ProfileSelectionView *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x128);
  puVar1 = PTR_vtable_007e7610 + 0x160;
  *(undefined **)this = PTR_vtable_007e7610 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>
            (*(shared_ptr **)(this + 0x118));
  plVar3 = *(long **)(this + 0x108);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


