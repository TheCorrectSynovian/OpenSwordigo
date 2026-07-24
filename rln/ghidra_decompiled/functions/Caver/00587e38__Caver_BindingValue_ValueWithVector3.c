/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587e38
 * Function: Caver::BindingValue::ValueWithVector3
 * Signature: undefined __thiscall ValueWithVector3(BindingValue * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&) */

void __thiscall Caver::BindingValue::ValueWithVector3(BindingValue *this,Vector3 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *in_x8;
  long lVar5;
  undefined8 *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00587e64 to 00687e93 has its CatchHandler @ 00588080 */
  puVar4 = operator_new(0xc);
  *puVar4 = *(undefined8 *)this;
  local_40 = (long *)0x0;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(this + 8);
  local_48 = puVar4;
  local_40 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7730;
                    /* try { // try from 00587e94 to 00687edf has its CatchHandler @ 005875cc */
  local_40[3] = (long)puVar4;
  local_40[2] = 1;
  local_40[1] = 1;
  *local_40 = (long)(puVar2 + 0x10);
  boost::detail::sp_enable_shared_from_this(&local_48,puVar4,puVar4);
  plVar3 = local_40;
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
                    /* try { // try from 00587f20 to 00687f2f has its CatchHandler @ 005881f4 */
    *in_x8 = 9;
    *(undefined8 **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar5 = local_40[1];
    *(undefined8 **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    *in_x8 = 9;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    local_40[1] = lVar5 + 1;
                    /* try { // try from 00587ee0 to 00687ef3 has its CatchHandler @ 00588160 */
    if (lVar5 + 1 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = plVar3[2];
      plVar3[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  plVar3 = local_40;
                    /* try { // try from 00587f30 to 006880a3 has its CatchHandler @ 005875cc */
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


