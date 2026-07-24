/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003006f0
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
 * Signature: Polygon * __cdecl __uninit_copy<Caver::Polygon*,Caver::Polygon*>(Polygon * param_1, Polygon * param_2, Polygon * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


Polygon * std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon*,Caver::Polygon*>
                    (Polygon *param_1,Polygon *param_2,Polygon *param_3)

{
  Polygon *pPVar1;
  
  pPVar1 = (Polygon *)(*(code *)PTR___uninit_copy<Caver::Polygon*,Caver::Polygon*>_007e2ba8)();
  return pPVar1;
}


