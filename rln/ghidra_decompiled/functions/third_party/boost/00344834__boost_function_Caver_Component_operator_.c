/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00344834
 * Function: boost::function<Caver::Component*()>::operator=
 * Signature: undefined __thiscall operator=(function<Caver::Component*()> * this, function * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function<Caver::Component* ()>::TEMPNAMEPLACEHOLDERVALUE(boost::function<Caver::Component*
   ()> const&) */

function<Caver::Component*()> * __thiscall
boost::function<Caver::Component*()>::operator=
          (function<Caver::Component*()> *this,function *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uVar2 = *(ulong *)param_1;
  if (uVar2 != 0) {
    local_48 = uVar2;
    if ((uVar2 & 1) == 0) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(param_1 + 8,&local_40,0);
    }
    else {
      local_30 = *(undefined8 *)(param_1 + 0x18);
      uStack_38 = *(undefined8 *)(param_1 + 0x10);
      local_40 = *(undefined8 *)(param_1 + 8);
    }
  }
  function0<Caver::Component*>::swap((function0<Caver::Component*> *)&local_48,(function0 *)this);
  if (local_48 != 0) {
    if (((local_48 & 1) == 0) && (*(code **)(local_48 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_48 & 0xfffffffffffffffe))(&local_40,&local_40,2);
    }
    local_48 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


