/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a301c
 * Function: boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUIPopoverView>(shared_ptr<Caver::GUIPopoverView> * this, GUIPopoverView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>(Caver::GUIPopoverView*)
    */

void __thiscall
boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>
          (shared_ptr<Caver::GUIPopoverView> *this,GUIPopoverView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GUIPopoverView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 005a2fdc with catch @ 005a3038 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e7f90;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUIPopoverView *)0x0) {
                    /* try { // try from 005a3068 to 006a308f has its CatchHandler @ 005a30ac */
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


