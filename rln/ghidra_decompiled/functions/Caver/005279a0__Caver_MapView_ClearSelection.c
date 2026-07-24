/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005279a0
 * Function: Caver::MapView::ClearSelection
 * Signature: undefined __thiscall ClearSelection(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::ClearSelection() */

void __thiscall Caver::MapView::ClearSelection(MapView *this)

{
  long lVar1;
  long *plVar2;
  
  if (this[0x3f8] != (MapView)0x0) {
    this[0x3f8] = (MapView)0x0;
    UpdateSelectionSprite(this);
  }
  if (*(long **)(this + 0x408) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x408) + 0x78))();
    plVar2 = *(long **)(this + 0x410);
    *(undefined8 *)(this + 0x408) = 0;
    *(undefined8 *)(this + 0x410) = 0;
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00527a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


