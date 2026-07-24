/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055f214
 * Function: boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>
 * Signature: undefined __thiscall shared_ptr<Caver::Proto::ObjectTemplate>(shared_ptr<Caver::Proto::ObjectTemplate> * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>(Caver::Proto::ObjectTemplate*)
    */

void __thiscall
boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>
          (shared_ptr<Caver::Proto::ObjectTemplate> *this,ObjectTemplate *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(ObjectTemplate **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6910;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
                    /* try { // try from 0055f250 to 0065f27b has its CatchHandler @ 0055f398 */
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


