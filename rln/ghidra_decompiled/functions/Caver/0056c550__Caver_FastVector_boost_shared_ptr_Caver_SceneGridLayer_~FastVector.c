/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056c550
 * Function: Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector
 * Signature: undefined __thiscall ~FastVector(FastVector<boost::shared_ptr<Caver::SceneGridLayer>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer> >::~FastVector() */

void __thiscall
Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector
          (FastVector<boost::shared_ptr<Caver::SceneGridLayer>> *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 8);
  if (lVar4 != 0) {
    lVar1 = *(long *)(lVar4 + -8);
    if (lVar1 != 0) {
      lVar1 = lVar1 << 4;
      do {
                    /* catch() { ... } // from try @ 0056c464 with catch @ 0056c57c */
        plVar3 = *(long **)(lVar4 + lVar1 + -8);
                    /* try { // try from 0056c584 to 0066c7bb has its CatchHandler @ 0056c584
                       catch() { ... } // from try @ 0056c584 with catch @ 0056c584
                       catch() { ... } // from try @ 0056c838 with catch @ 0056c584
                       catch() { ... } // from try @ 0056c8b0 with catch @ 0056c584 */
        if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0))
        {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
          if (lVar2 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
    operator_delete__((long *)(lVar4 + -8));
    return;
  }
  return;
}


