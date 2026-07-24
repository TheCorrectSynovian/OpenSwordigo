/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf76c
 * Function: std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
 * Signature: Portal * __cdecl __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>(Portal * param_1, Portal * param_2, Portal * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::Portal* std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal*,
   Caver::MapNode::Portal*>(Caver::MapNode::Portal*, Caver::MapNode::Portal*,
   Caver::MapNode::Portal*) */

Portal * std::__uninitialized_copy<false>::
         __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
                   (Portal *param_1,Portal *param_2,Portal *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 004bf1d4 with catch @ 004bf7a0 */
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_0066a528(param_3,param_1);
    *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
    param_3 = param_3 + 0x18;
  }
                    /* catch() { ... } // from try @ 004bf14c with catch @ 004bf7dc */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


