/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004be58c
 * Function: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_destroy_data_aux
 * Signature: undefined __thiscall _M_destroy_data_aux(deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>> * this, _Deque_iterator param_1, _Deque_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<boost::shared_ptr<Caver::MapNode>, std::allocator<boost::shared_ptr<Caver::MapNode> >
   >::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>,
   boost::shared_ptr<Caver::MapNode>&, boost::shared_ptr<Caver::MapNode>*>,
   std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>, boost::shared_ptr<Caver::MapNode>&,
   boost::shared_ptr<Caver::MapNode>*>) */

void __thiscall
std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
_M_destroy_data_aux(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 004be5a8 to 005be5ab has its CatchHandler @ 004be5c0 */
  plVar4 = (long *)param_2[3];
                    /* try { // try from 004be5ac to 005be607 has its CatchHandler @ 004be4b0 */
  plVar1 = (long *)param_3[3];
  plVar5 = plVar4 + 1;
  if (plVar5 < plVar1) {
    do {
      lVar2 = *plVar5;
                    /* catch() { ... } // from try @ 004be5a8 with catch @ 004be5c0 */
      lVar6 = 0;
      do {
                    /* catch() { ... } // from try @ 004be574 with catch @ 004be5c8 */
        plVar1 = *(long **)(lVar2 + 8 + lVar6);
                    /* catch() { ... } // from try @ 004be540 with catch @ 004be5d0 */
                    /* catch() { ... } // from try @ 004be518 with catch @ 004be5d8 */
        if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0))
        {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar3 = plVar1[2];
          plVar1[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
                    /* try { // try from 004be608 to 005be67b has its CatchHandler @ 004be684 */
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != 0x200);
      plVar1 = (long *)param_3[3];
      plVar5 = plVar5 + 1;
    } while (plVar5 < plVar1);
    plVar4 = (long *)param_2[3];
  }
  lVar6 = *param_2;
  if (plVar4 == plVar1) {
    lVar2 = *param_3;
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
  else {
    lVar2 = param_2[2];
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
                    /* try { // try from 004be67c to 005be687 has its CatchHandler @ 004be4b0 */
        if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 004be608 with catch @ 004be684 */
                    /* catch() { ... } // from try @ 004be69c with catch @ 004be688 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
                    /* try { // try from 004be698 to 005be69b has its CatchHandler @ 004be6ac */
    }
                    /* try { // try from 004be69c to 005be6bf has its CatchHandler @ 004be688 */
    lVar2 = *param_3;
    for (lVar6 = param_3[1]; lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
                    /* catch() { ... } // from try @ 004be698 with catch @ 004be6ac */
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 004be6c0 to 005be6db has its CatchHandler @ 004be6c0
                       catch() { ... } // from try @ 004be6c0 with catch @ 004be6c0
                       catch() { ... } // from try @ 004be6e0 with catch @ 004be6c0 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar3 = plVar5[2];
        plVar5[2] = lVar3 + -1;
                    /* try { // try from 004be6dc to 005be6df has its CatchHandler @ 004be6fc */
        if (lVar3 + -1 == 0) {
                    /* try { // try from 004be6e0 to 005be70f has its CatchHandler @ 004be6c0 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 004be790 with catch @ 004be760 */
  return;
}


