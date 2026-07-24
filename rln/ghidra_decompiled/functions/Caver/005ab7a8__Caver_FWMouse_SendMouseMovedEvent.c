/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab7a8
 * Function: Caver::FWMouse::SendMouseMovedEvent
 * Signature: undefined __thiscall SendMouseMovedEvent(FWMouse * this, Vector2 * param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::SendMouseMovedEvent(Caver::Vector2 const&, unsigned int, double) */

void __thiscall
Caver::FWMouse::SendMouseMovedEvent(FWMouse *this,Vector2 *param_1,uint param_2,double param_3)

{
  FWMouse *pFVar1;
  
  if (this[0x10] == (FWMouse)0x0) {
    this[0x10] = (FWMouse)0x1;
    *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  }
  for (pFVar1 = *(FWMouse **)this; this != pFVar1; pFVar1 = *(FWMouse **)pFVar1) {
                    /* try { // try from 005ab810 to 006ab837 has its CatchHandler @ 005ab94c */
    (**(code **)(**(long **)(pFVar1 + 0x10) + 8))
              (param_3,*(long **)(pFVar1 + 0x10),this + 0x14,param_1,param_2);
  }
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
                    /* try { // try from 005ab838 to 006ab91f has its CatchHandler @ 005ab174 */
  return;
}


