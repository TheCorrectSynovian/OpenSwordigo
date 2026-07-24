/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bb84
 * Function: Caver::NewMenuView::~NewMenuView
 * Signature: undefined __thiscall ~NewMenuView(NewMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewMenuView::~NewMenuView() */

void __thiscall Caver::NewMenuView::~NewMenuView(NewMenuView *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
                    /* try { // try from 0052bb94 to 0062bb97 has its CatchHandler @ 0052bba4 */
  pvVar3 = *(void **)(this + 0xf8);
  pvVar1 = *(void **)(this + 0x100);
                    /* catch() { ... } // from try @ 0052bb94 with catch @ 0052bba4 */
                    /* try { // try from 0052bba8 to 0062bbaf has its CatchHandler @ 0052bbb8 */
  *(undefined **)this = PTR_vtable_007e7d68 + 0x10;
                    /* try { // try from 0052bbb0 to 0062bbbb has its CatchHandler @ 0052bb6c */
  if (pvVar3 != pvVar1) {
    do {
      plVar4 = *(long **)((long)pvVar3 + 8);
                    /* catch() { ... } // from try @ 0052bba8 with catch @ 0052bbb8 */
                    /* try { // try from 0052bbbc to 0062bc33 has its CatchHandler @ 0052bbbc
                       catch() { ... } // from try @ 0052bbbc with catch @ 0052bbbc
                       catch() { ... } // from try @ 0052bc38 with catch @ 0052bbbc
                       catch() { ... } // from try @ 0052bc8c with catch @ 0052bbbc
                       catch() { ... } // from try @ 0052bd04 with catch @ 0052bbbc
                       catch() { ... } // from try @ 0052bd60 with catch @ 0052bbbc */
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      pvVar3 = (void *)((long)pvVar3 + 0x10);
    } while (pvVar1 != pvVar3);
    pvVar3 = *(void **)(this + 0xf8);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  GUIView::~GUIView((GUIView *)this);
  operator_delete(this);
  return;
}


