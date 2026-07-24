/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048dc3c
 * Function: boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>
 * Signature: undefined __thiscall shared_ptr<Caver::CreditsView>(shared_ptr<Caver::CreditsView> * this, CreditsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView*) */

void __thiscall
boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>
          (shared_ptr<Caver::CreditsView> *this,CreditsView *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(CreditsView **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6920;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
                    /* try { // try from 0048dc80 to 0058dd3b has its CatchHandler @ 0048dc80
                       catch() { ... } // from try @ 0048dc80 with catch @ 0048dc80
                       catch() { ... } // from try @ 0048dd40 with catch @ 0048dc80 */
  if (param_1 != (CreditsView *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::CreditsView,Caver::CreditsView>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


