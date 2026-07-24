/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034514c
 * Function: boost::function0<Caver::Component*>::move_assign
 * Signature: undefined __thiscall move_assign(function0<Caver::Component*> * this, function0 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function0<Caver::Component*>::move_assign(boost::function0<Caver::Component*>&) */

void __thiscall
boost::function0<Caver::Component*>::move_assign
          (function0<Caver::Component*> *this,function0 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != (function0 *)this) {
    uVar1 = *(ulong *)param_1;
    if (uVar1 == 0) {
      uVar1 = *(ulong *)this;
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


