/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b90f0
 * Function: boost::date_time::c_time::localtime
 * Signature: undefined __cdecl localtime(long * param_1, tm * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::date_time::c_time::localtime(long const*, tm*) */

void boost::date_time::c_time::localtime(long *param_1,tm *param_2)

{
  long lVar1;
  tm *ptVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  runtime_error arStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ptVar2 = ::localtime(param_1);
  if (ptVar2 == (tm *)0x0) {
    FUN_00666bb8(auStack_48,&DAT_00697529,auStack_50);
    FUN_0064ab28(arStack_40,auStack_48);
    throw_exception<std::runtime_error>(arStack_40);
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


