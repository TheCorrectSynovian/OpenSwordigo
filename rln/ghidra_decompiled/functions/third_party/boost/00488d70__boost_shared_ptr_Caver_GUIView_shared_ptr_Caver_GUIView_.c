/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00488d70
 * Function: boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
 * Signature: undefined __thiscall shared_ptr<Caver::GUIView>(shared_ptr<Caver::GUIView> * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView*) */

void __thiscall
boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
          (shared_ptr<Caver::GUIView> *this,GUIView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GUIView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6938;
                    /* catch() { ... } // from try @ 00488dcc with catch @ 00488d9c */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUIView *)0x0) {
                    /* try { // try from 00488db8 to 00588dcb has its CatchHandler @ 00488df0 */
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUIView,Caver::GUIView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
                    /* try { // try from 00488dcc to 00588df3 has its CatchHandler @ 00488d9c */
  return;
}


