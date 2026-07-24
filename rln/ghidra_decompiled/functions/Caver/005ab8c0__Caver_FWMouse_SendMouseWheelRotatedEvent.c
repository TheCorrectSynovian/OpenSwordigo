/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab8c0
 * Function: Caver::FWMouse::SendMouseWheelRotatedEvent
 * Signature: undefined __thiscall SendMouseWheelRotatedEvent(FWMouse * this, float param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::SendMouseWheelRotatedEvent(float, unsigned int, double) */

void __thiscall
Caver::FWMouse::SendMouseWheelRotatedEvent(FWMouse *this,float param_1,uint param_2,double param_3)

{
  FWMouse *pFVar1;
  undefined4 in_register_00005004;
  
  pFVar1 = *(FWMouse **)this;
  if (this != pFVar1) {
    do {
                    /* catch() { ... } // from try @ 005ab5e8 with catch @ 005ab8fc */
      (**(code **)(**(long **)(pFVar1 + 0x10) + 0x18))
                (CONCAT44(in_register_00005004,param_1),param_3,*(long **)(pFVar1 + 0x10),
                 this + 0x14,param_2);
      pFVar1 = *(FWMouse **)pFVar1;
    } while (this != pFVar1);
  }
                    /* try { // try from 005ab920 to 006abb3f has its CatchHandler @ 005abb48 */
  return;
}


