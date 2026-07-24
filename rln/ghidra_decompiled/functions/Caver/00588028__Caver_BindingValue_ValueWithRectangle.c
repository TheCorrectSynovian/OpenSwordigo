/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588028
 * Function: Caver::BindingValue::ValueWithRectangle
 * Signature: undefined __thiscall ValueWithRectangle(BindingValue * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithRectangle(Caver::Rectangle const&) */

void __thiscall Caver::BindingValue::ValueWithRectangle(BindingValue *this,Rectangle *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *in_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = operator_new(0x10);
  uVar6 = *(undefined8 *)this;
  local_40 = (long *)0x0;
  puVar4[1] = *(undefined8 *)(this + 8);
  *puVar4 = uVar6;
  local_48 = puVar4;
  local_40 = operator_new(0x20);
  puVar2 = PTR_vtable_007e47b8;
                    /* catch() { ... } // from try @ 00587e64 with catch @ 00588080 */
  local_40[3] = (long)puVar4;
  local_40[2] = 1;
  local_40[1] = 1;
  *local_40 = (long)(puVar2 + 0x10);
  boost::detail::sp_enable_shared_from_this(&local_48,puVar4,puVar4);
  plVar3 = local_40;
                    /* try { // try from 005880a4 to 0068811b has its CatchHandler @ 00588444 */
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *in_x8 = 10;
    *(undefined8 **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar5 = local_40[1];
    *(undefined8 **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    *in_x8 = 10;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    local_40[1] = lVar5 + 1;
    if (lVar5 + 1 == 0) {
                    /* catch() { ... } // from try @ 00587cac with catch @ 005880d0 */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = plVar3[2];
      plVar3[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  plVar3 = local_40;
                    /* try { // try from 0058811c to 00688287 has its CatchHandler @ 005875cc */
                    /* catch() { ... } // from try @ 00587d7c with catch @ 00588120 */
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch() { ... } // from try @ 00587d70 with catch @ 00588158 */
                    /* catch() { ... } // from try @ 00587ee0 with catch @ 00588160 */
                    /* catch() { ... } // from try @ 00587dbc with catch @ 00588164 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


