/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3a7c
 * Function: boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>
 * Signature: undefined __thiscall shared_ptr<Caver::GameEvent>(shared_ptr<Caver::GameEvent> * this, GameEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>(Caver::GameEvent*) */

void __thiscall
boost::shared_ptr<Caver::GameEvent>::shared_ptr<Caver::GameEvent>
          (shared_ptr<Caver::GameEvent> *this,GameEvent *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004b3a84 to 005b3a8f has its CatchHandler @ 004b3878 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b3a78 with catch @ 004b3a8c
                        */
  *(GameEvent **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6558;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)(this + 8) = plVar2;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  return;
}


