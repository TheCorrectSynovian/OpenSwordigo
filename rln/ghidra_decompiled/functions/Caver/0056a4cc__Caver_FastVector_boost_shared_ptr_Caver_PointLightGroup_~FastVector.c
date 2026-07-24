/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056a4cc
 * Function: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector
 * Signature: undefined __thiscall ~FastVector(FastVector<boost::shared_ptr<Caver::PointLightGroup>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup> >::~FastVector() */

void __thiscall
Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector
          (FastVector<boost::shared_ptr<Caver::PointLightGroup>> *this)

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
        plVar3 = *(long **)(lVar4 + lVar1 + -8);
                    /* try { // try from 0056a510 to 0066a58f has its CatchHandler @ 0056a510
                       catch() { ... } // from try @ 0056a510 with catch @ 0056a510
                       catch() { ... } // from try @ 0056a5a0 with catch @ 0056a510
                       catch() { ... } // from try @ 0056a5e0 with catch @ 0056a510 */
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


