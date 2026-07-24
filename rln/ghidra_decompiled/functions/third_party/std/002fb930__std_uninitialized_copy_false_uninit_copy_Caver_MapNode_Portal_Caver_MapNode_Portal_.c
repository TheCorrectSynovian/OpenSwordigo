/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fb930
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
 * Signature: Portal * __cdecl __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>(Portal * param_1, Portal * param_2, Portal * param_3)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


Portal * std::__uninitialized_copy<false>::
         __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
                   (Portal *param_1,Portal *param_2,Portal *param_3)

{
  Portal *pPVar1;
  
  pPVar1 = (Portal *)
           (*(code *)PTR___uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>_007e04c8)();
  return pPVar1;
}


