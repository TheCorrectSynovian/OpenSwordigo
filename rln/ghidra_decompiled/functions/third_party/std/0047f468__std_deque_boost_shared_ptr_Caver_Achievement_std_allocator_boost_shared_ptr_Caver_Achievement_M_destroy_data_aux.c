/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047f468
 * Function: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_destroy_data_aux
 * Signature: undefined __thiscall _M_destroy_data_aux(deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>> * this, _Deque_iterator param_1, _Deque_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<boost::shared_ptr<Caver::Achievement>,
   std::allocator<boost::shared_ptr<Caver::Achievement> >
   >::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,
   boost::shared_ptr<Caver::Achievement>&, boost::shared_ptr<Caver::Achievement>*>,
   std::_Deque_iterator<boost::shared_ptr<Caver::Achievement>,
   boost::shared_ptr<Caver::Achievement>&, boost::shared_ptr<Caver::Achievement>*>) */

void __thiscall
std::
deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::
_M_destroy_data_aux(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)param_2[3];
  plVar1 = (long *)param_3[3];
  plVar5 = plVar4 + 1;
  if (plVar5 < plVar1) {
    do {
                    /* try { // try from 0047f498 to 0057f49b has its CatchHandler @ 0047f4b4 */
      lVar2 = *plVar5;
                    /* try { // try from 0047f49c to 0057f4c7 has its CatchHandler @ 0047f440 */
      lVar6 = 0;
      do {
        plVar1 = *(long **)(lVar2 + 8 + lVar6);
                    /* catch() { ... } // from try @ 0047f498 with catch @ 0047f4b4 */
        if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0))
        {
                    /* catch() { ... } // from try @ 0047f514 with catch @ 0047f4c8 */
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar3 = plVar1[2];
          plVar1[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
                    /* try { // try from 0047f4ec to 0057f4ff has its CatchHandler @ 0047f604 */
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != 0x200);
      plVar1 = (long *)param_3[3];
      plVar5 = plVar5 + 1;
                    /* try { // try from 0047f504 to 0057f513 has its CatchHandler @ 0047f594 */
    } while (plVar5 < plVar1);
    plVar4 = (long *)param_2[3];
  }
  lVar6 = *param_2;
                    /* try { // try from 0047f514 to 0057f607 has its CatchHandler @ 0047f4c8 */
  if (plVar4 == plVar1) {
    lVar2 = *param_3;
    for (; lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
      if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0047f4ec with catch @ 0047f604 */
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
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
    }
    lVar2 = *param_3;
    for (lVar6 = param_3[1]; lVar6 != lVar2; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
                    /* catch() { ... } // from try @ 0047f504 with catch @ 0047f594 */
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
  return;
}


