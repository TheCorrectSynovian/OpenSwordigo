/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475c64
 * Function: boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUIFrameView>(shared_ptr<Caver::GUIFrameView> * this, GUIFrameView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>(Caver::GUIFrameView*) */

void __thiscall
boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
          (shared_ptr<Caver::GUIFrameView> *this,GUIFrameView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GUIFrameView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6d50;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUIFrameView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


