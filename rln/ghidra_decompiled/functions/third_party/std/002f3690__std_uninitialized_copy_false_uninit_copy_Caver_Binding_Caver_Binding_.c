/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f3690
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
 * Signature: Binding * __cdecl __uninit_copy<Caver::Binding*,Caver::Binding*>(Binding * param_1, Binding * param_2, Binding * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


Binding * std::__uninitialized_copy<false>::__uninit_copy<Caver::Binding*,Caver::Binding*>
                    (Binding *param_1,Binding *param_2,Binding *param_3)

{
  Binding *pBVar1;
  
  pBVar1 = (Binding *)(*(code *)PTR___uninit_copy<Caver::Binding*,Caver::Binding*>_007dc378)();
  return pBVar1;
}


