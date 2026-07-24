/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c133c
 * Function: Caver::ProgramState::CreateChildState
 * Signature: undefined __cdecl CreateChildState(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::CreateChildState() */

void Caver::ProgramState::CreateChildState(void)

{
  long lVar1;
  ProgramState *in_x0;
  ProgramState *this;
  void *pvVar2;
  undefined8 *in_x8;
  
  this = operator_new(0x58);
  ProgramState(this,in_x0);
  *in_x8 = this;
  boost::detail::shared_count::shared_count<Caver::ProgramState>((shared_count *)(in_x8 + 1),this);
  boost::detail::sp_enable_shared_from_this();
  pvVar2 = operator_new(0x20);
  lVar1 = in_x8[1];
  *(undefined8 *)((long)pvVar2 + 0x10) = *in_x8;
  *(long *)((long)pvVar2 + 0x18) = lVar1;
                    /* try { // try from 005c139c to 006c139f has its CatchHandler @ 005c14f4 */
  if (lVar1 != 0) {
                    /* try { // try from 005c13a0 to 006c1667 has its CatchHandler @ 005c0f08 */
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  FUN_0062a9ac(pvVar2,in_x0 + 0x10);
  return;
}


