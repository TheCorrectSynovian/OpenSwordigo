/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587824
 * Function: Caver::BindingValue::ValueWithProgram
 * Signature: undefined __thiscall ValueWithProgram(BindingValue * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithProgram(Caver::Program const&) */

void __thiscall Caver::BindingValue::ValueWithProgram(BindingValue *this,Program *param_1)

{
  long lVar1;
  long *plVar2;
  Program *pPVar3;
  undefined4 *in_x8;
  long lVar4;
  Program *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar3 = operator_new(0x28);
  FUN_0066a528(pPVar3,this);
  *(undefined8 *)(pPVar3 + 8) = *(undefined8 *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  *(long *)(pPVar3 + 0x10) = lVar4;
  if (lVar4 != 0) {
                    /* try { // try from 00587878 to 00687887 has its CatchHandler @ 0058853c */
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  *(undefined8 *)(pPVar3 + 0x18) = *(undefined8 *)(this + 0x18);
  lVar4 = *(long *)(this + 0x20);
  *(long *)(pPVar3 + 0x20) = lVar4;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  local_48 = pPVar3;
  boost::detail::shared_count::shared_count<Caver::Program>((shared_count *)&local_40,pPVar3);
                    /* try { // try from 005878bc to 006878ef has its CatchHandler @ 005885d8 */
  boost::detail::sp_enable_shared_from_this(&local_48,pPVar3,pPVar3);
  plVar2 = local_40;
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *in_x8 = 6;
    *(Program **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar4 = local_40[1];
    *(Program **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    *in_x8 = 6;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    local_40[1] = lVar4 + 1;
    if (lVar4 + 1 == 0) {
                    /* try { // try from 005878f0 to 006878fb has its CatchHandler @ 00588480 */
      (**(code **)(*local_40 + 0x10))(local_40);
                    /* try { // try from 005878fc to 0068790f has its CatchHandler @ 00588448 */
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
                    /* try { // try from 0058793c to 0068794b has its CatchHandler @ 00588488 */
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
                    /* try { // try from 0058794c to 006879cb has its CatchHandler @ 005875cc */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


