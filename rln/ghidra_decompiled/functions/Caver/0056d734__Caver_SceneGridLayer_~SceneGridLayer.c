/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d734
 * Function: Caver::SceneGridLayer::~SceneGridLayer
 * Signature: undefined __thiscall ~SceneGridLayer(SceneGridLayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::~SceneGridLayer() */

void __thiscall Caver::SceneGridLayer::~SceneGridLayer(SceneGridLayer *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 0056d740 to 0066d767 has its CatchHandler @ 0056e41c */
  if (*(long *)(this + 0x30) != 0) {
    Reset(this);
  }
  FontText::~FontText((FontText *)(this + 0x68));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  lVar3 = *(long *)(this + 0x30);
  if (lVar3 != 0) {
                    /* try { // try from 0056d774 to 0066d77b has its CatchHandler @ 0056e280 */
    lVar2 = *(long *)(lVar3 + -8);
                    /* try { // try from 0056d77c to 0066d78f has its CatchHandler @ 0056e27c */
    if (lVar2 != 0) {
      lVar2 = lVar2 << 4;
      do {
        pvVar1 = *(void **)(lVar3 + lVar2 + -0x10);
        if (pvVar1 != (void *)0x0) {
                    /* try { // try from 0056d790 to 0066d7a3 has its CatchHandler @ 0056e3c4 */
          operator_delete__(pvVar1);
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* try { // try from 0056d7a4 to 0066d7b3 has its CatchHandler @ 0056e24c */
    operator_delete__((long *)(lVar3 + -8));
    return;
  }
  return;
}


