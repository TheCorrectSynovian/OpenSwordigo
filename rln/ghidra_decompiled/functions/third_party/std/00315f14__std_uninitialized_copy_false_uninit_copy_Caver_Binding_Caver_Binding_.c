/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315f14
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
 * Signature: Binding * __cdecl __uninit_copy<Caver::Binding*,Caver::Binding*>(Binding * param_1, Binding * param_2, Binding * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Binding* std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding*,
   Caver::Binding*>(Caver::Binding*, Caver::Binding*, Caver::Binding*) */

Binding * std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
                    (Binding *param_1,Binding *param_2,Binding *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    FUN_0066a528(param_3 + 8,param_1 + 8);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    param_3 = param_3 + 0x20;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


