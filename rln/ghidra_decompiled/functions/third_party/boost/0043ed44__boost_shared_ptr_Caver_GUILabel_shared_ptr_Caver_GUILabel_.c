/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ed44
 * Function: boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
 * Signature: undefined __thiscall shared_ptr<Caver::GUILabel>(shared_ptr<Caver::GUILabel> * this, GUILabel * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>(Caver::GUILabel*) */

void __thiscall
boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
          (shared_ptr<Caver::GUILabel> *this,GUILabel *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(GUILabel **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 0043ed5c to 0053edb7 has its CatchHandler @ 0043ed5c
                       catch() { ... } // from try @ 0043ed5c with catch @ 0043ed5c
                       catch() { ... } // from try @ 0043ee54 with catch @ 0043ed5c
                       catch() { ... } // from try @ 0043f000 with catch @ 0043ed5c */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6180;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  if (param_1 != (GUILabel *)0x0) {
    enable_shared_from_this<Caver::GUIResponder>::
    _internal_accept_owner<Caver::GUILabel,Caver::GUILabel>
              ((enable_shared_from_this<Caver::GUIResponder> *)(param_1 + 8),(shared_ptr *)this,
               param_1);
  }
  return;
}


