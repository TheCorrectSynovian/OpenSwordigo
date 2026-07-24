/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab72c
 * Function: Caver::FWMouse::SendMouseDownEvent
 * Signature: undefined __thiscall SendMouseDownEvent(FWMouse * this, Vector2 * param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::SendMouseDownEvent(Caver::Vector2 const&, unsigned int, double) */

void __thiscall
Caver::FWMouse::SendMouseDownEvent(FWMouse *this,Vector2 *param_1,uint param_2,double param_3)

{
  FWMouse *pFVar1;
  
  this[0x10] = (FWMouse)0x1;
  pFVar1 = *(FWMouse **)this;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
                    /* try { // try from 005ab758 to 006ab77f has its CatchHandler @ 005ab99c */
  for (; this != pFVar1; pFVar1 = *(FWMouse **)pFVar1) {
                    /* try { // try from 005ab780 to 006ab80f has its CatchHandler @ 005ab174 */
    (**(code **)**(undefined8 **)(pFVar1 + 0x10))
              (param_3,*(undefined8 **)(pFVar1 + 0x10),param_1,param_2);
  }
  return;
}


