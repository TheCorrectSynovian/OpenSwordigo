/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00314624
 * Function: Caver::BindingValue::ValueWithString
 * Signature: undefined __thiscall ValueWithString(BindingValue * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithString(std::string const&) */

void __thiscall Caver::BindingValue::ValueWithString(BindingValue *this,string *param_1)

{
  long lVar1;
  long *plVar2;
  string *psVar3;
  undefined4 *in_x8;
  long lVar4;
  string *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  psVar3 = operator_new(8);
  FUN_0066a528(psVar3,this);
  local_48 = psVar3;
  boost::detail::shared_count::shared_count<std::string>((shared_count *)&local_40,psVar3);
  boost::detail::sp_enable_shared_from_this(&local_48,psVar3,psVar3);
  plVar2 = local_40;
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *in_x8 = 1;
    *(string **)(in_x8 + 2) = local_48;
    *(undefined8 *)(in_x8 + 4) = 0;
  }
  else {
    lVar4 = local_40[1];
    *(string **)(in_x8 + 2) = local_48;
    *(long **)(in_x8 + 4) = local_40;
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    local_40[1] = lVar4 + 1;
    if (lVar4 + 1 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar4 = plVar2[2];
      plVar2[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
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


