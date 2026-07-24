/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004704b8
 * Function: boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>
 * Signature: undefined __thiscall shared_ptr<Caver::PauseView>(shared_ptr<Caver::PauseView> * this, PauseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView*) */

void __thiscall
boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>
          (shared_ptr<Caver::PauseView> *this,PauseView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004704bc to 005704e3 has its CatchHandler @ 00470578 */
  *(PauseView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6460;
                    /* try { // try from 004704e4 to 0057059b has its CatchHandler @ 004703d8 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (PauseView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::PauseView,Caver::PauseView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


