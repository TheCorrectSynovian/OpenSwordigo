/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588350
 * Function: Caver::BindingValue::ValueWithUInt
 * Signature: undefined __thiscall ValueWithUInt(BindingValue * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithUInt(int) */

void __thiscall Caver::BindingValue::ValueWithUInt(BindingValue *this,int param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *in_x8;
  long lVar5;
  undefined4 *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = operator_new(4);
  *puVar4 = (int)this;
  local_40 = (long *)0x0;
  local_48 = puVar4;
  local_40 = operator_new(0x20);
  puVar2 = PTR_vtable_007e48a8;
  local_40[3] = (long)puVar4;
  local_40[2] = 1;
  local_40[1] = 1;
  *local_40 = (long)(puVar2 + 0x10);
  boost::detail::sp_enable_shared_from_this(&local_48,puVar4,puVar4);
  plVar3 = local_40;
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *in_x8 = 3;
    *(undefined4 **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar5 = local_40[1];
    *(undefined4 **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    *in_x8 = 3;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    local_40[1] = lVar5 + 1;
    if (lVar5 + 1 == 0) {
                    /* catch() { ... } // from try @ 005879cc with catch @ 005883f4 */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar5 = plVar3[2];
      plVar3[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00588418 to 0068843f has its CatchHandler @ 00588444 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  plVar3 = local_40;
                    /* try { // try from 00588440 to 0068863f has its CatchHandler @ 005875cc */
                    /* catch() { ... } // from try @ 005880a4 with catch @ 00588444
                       catch() { ... } // from try @ 00588288 with catch @ 00588444
                       catch() { ... } // from try @ 00588418 with catch @ 00588444 */
                    /* catch() { ... } // from try @ 005878fc with catch @ 00588448 */
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch() { ... } // from try @ 005878f0 with catch @ 00588480 */
                    /* catch() { ... } // from try @ 0058793c with catch @ 00588488 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


