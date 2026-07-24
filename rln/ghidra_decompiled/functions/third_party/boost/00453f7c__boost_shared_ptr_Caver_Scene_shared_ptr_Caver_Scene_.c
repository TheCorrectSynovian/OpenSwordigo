/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00453f7c
 * Function: boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
 * Signature: undefined __thiscall shared_ptr<Caver::Scene>(shared_ptr<Caver::Scene> * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>(Caver::Scene*) */

void __thiscall
boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>
          (shared_ptr<Caver::Scene> *this,Scene *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(Scene **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5da0;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


