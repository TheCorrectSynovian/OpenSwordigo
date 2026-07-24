/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00319c18
 * Function: Caver::BindingValue::ValueWithInt
 * Signature: undefined __thiscall ValueWithInt(BindingValue * this, int param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BindingValue::ValueWithInt(int, std::string const&) */

void __thiscall Caver::BindingValue::ValueWithInt(BindingValue *this,int param_1,string *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  string *psVar4;
  long in_x8;
  string *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ValueWithInt(this,param_1);
  lVar3 = *(long *)(in_x8 + 0x18);
  if (lVar3 == 0) {
    psVar4 = operator_new(8);
    *(undefined **)psVar4 = PTR_DAT_007e5de8 + 0x18;
    local_48 = psVar4;
    boost::detail::shared_count::shared_count<std::string>((shared_count *)&local_40,psVar4);
    boost::detail::sp_enable_shared_from_this(&local_48,psVar4,psVar4);
    psVar4 = *(string **)(in_x8 + 0x18);
    plVar1 = *(long **)(in_x8 + 0x20);
    *(string **)(in_x8 + 0x18) = local_48;
    *(long **)(in_x8 + 0x20) = local_40;
    local_48 = psVar4;
    local_40 = plVar1;
    if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar3 = plVar1[2];
      plVar1[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    lVar3 = *(long *)(in_x8 + 0x18);
  }
  FUN_0066a6a8(lVar3,param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


