/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445ad4
 * Function: boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>
 * Signature: undefined __thiscall shared_ptr<Caver::ConfigureOverlayViewController>(shared_ptr<Caver::ConfigureOverlayViewController> * this, ConfigureOverlayViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController*)
    */

void __thiscall
boost::shared_ptr<Caver::ConfigureOverlayViewController>::
shared_ptr<Caver::ConfigureOverlayViewController>
          (shared_ptr<Caver::ConfigureOverlayViewController> *this,
          ConfigureOverlayViewController *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00445ae8 to 00545aeb has its CatchHandler @ 00445afc */
  *(ConfigureOverlayViewController **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00445aec to 00545aff has its CatchHandler @ 00445ab8 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e47c0;
                    /* catch() { ... } // from try @ 00445ae8 with catch @ 00445afc */
                    /* catch() { ... } // from try @ 00445bd8 with catch @ 00445b00
                       catch() { ... } // from try @ 00445c40 with catch @ 00445b00 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (ConfigureOverlayViewController *)0x0) {
    enable_shared_from_this<Caver::GUIViewController>::
    _internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>
              ((enable_shared_from_this<Caver::GUIViewController> *)(param_1 + 8),(shared_ptr *)this
               ,param_1);
  }
                    /* try { // try from 00445b30 to 00545b33 has its CatchHandler @ 00445c0c */
  return;
}


