/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2eb0
 * Function: boost::detail::shared_count::shared_count<Caver::GameState>
 * Signature: undefined __thiscall shared_count<Caver::GameState>(shared_count * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::GameState>(Caver::GameState*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::GameState>(shared_count *this,GameState *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e6010;
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


