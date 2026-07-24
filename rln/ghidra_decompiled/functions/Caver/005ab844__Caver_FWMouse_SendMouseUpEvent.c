/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab844
 * Function: Caver::FWMouse::SendMouseUpEvent
 * Signature: undefined __thiscall SendMouseUpEvent(FWMouse * this, Vector2 * param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::SendMouseUpEvent(Caver::Vector2 const&, unsigned int, double) */

void __thiscall
Caver::FWMouse::SendMouseUpEvent(FWMouse *this,Vector2 *param_1,uint param_2,double param_3)

{
  FWMouse *pFVar1;
  
  this[0x10] = (FWMouse)0x1;
  pFVar1 = *(FWMouse **)this;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  for (; this != pFVar1; pFVar1 = *(FWMouse **)pFVar1) {
    (**(code **)(**(long **)(pFVar1 + 0x10) + 0x10))
              (param_3,*(long **)(pFVar1 + 0x10),param_1,param_2);
  }
  return;
}


