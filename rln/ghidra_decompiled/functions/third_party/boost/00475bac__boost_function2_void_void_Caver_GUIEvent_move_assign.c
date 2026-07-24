/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475bac
 * Function: boost::function2<void,void*,Caver::GUIEvent*>::move_assign
 * Signature: undefined __thiscall move_assign(function2<void,void*,Caver::GUIEvent*> * this, function2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function2<void, void*, Caver::GUIEvent*>::move_assign(boost::function2<void, void*,
   Caver::GUIEvent*>&) */

void __thiscall
boost::function2<void,void*,Caver::GUIEvent*>::move_assign
          (function2<void,void*,Caver::GUIEvent*> *this,function2 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != (function2 *)this) {
    uVar1 = *(ulong *)param_1;
    if (uVar1 == 0) {
      uVar1 = *(ulong *)this;
                    /* try { // try from 00475bf8 to 00575d6f has its CatchHandler @ 00475bf8
                       catch() { ... } // from try @ 00475bf8 with catch @ 00475bf8
                       catch() { ... } // from try @ 00475ed4 with catch @ 00475bf8 */
      if (uVar1 != 0) {
        if (((uVar1 & 1) == 0) && (*(code **)(uVar1 & 0xfffffffffffffffe) != (code *)0x0)) {
          (**(code **)(uVar1 & 0xfffffffffffffffe))(this + 8,this + 8,2);
        }
        *(undefined8 *)this = 0;
      }
    }
    else {
      *(ulong *)this = uVar1;
      if ((uVar1 & 1) == 0) {
        (**(code **)(uVar1 & 0xfffffffffffffffe))(param_1 + 8,this + 8,1);
      }
      else {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(this + 8) = uVar2;
      }
      *(undefined8 *)param_1 = 0;
    }
  }
  return;
}


