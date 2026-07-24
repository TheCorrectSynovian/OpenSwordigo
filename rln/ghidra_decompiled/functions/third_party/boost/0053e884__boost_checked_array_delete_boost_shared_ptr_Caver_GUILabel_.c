/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e884
 * Function: boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>
 * Signature: void __cdecl checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>
   >(boost::shared_ptr<Caver::GUILabel>*) */

void boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (shared_ptr *)0x0) {
    lVar1 = *(long *)(param_1 + -8);
                    /* try { // try from 0053e8a8 to 0063e8c3 has its CatchHandler @ 0053e7f8 */
    if (lVar1 != 0) {
      lVar1 = lVar1 << 4;
      do {
                    /* catch() { ... } // from try @ 0053e880 with catch @ 0053e8b0 */
                    /* catch() { ... } // from try @ 0053e810 with catch @ 0053e8b4 */
        plVar3 = *(long **)(param_1 + lVar1 + -8);
                    /* try { // try from 0053e8c4 to 0063e8cf has its CatchHandler @ 0053e8d0 */
        if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0))
        {
                    /* catch() { ... } // from try @ 0053e8c4 with catch @ 0053e8d0 */
                    /* try { // try from 0053e8d4 to 0063e8d7 has its CatchHandler @ 0053e8dc */
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 0053e8d4 with catch @ 0053e8dc */
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
          if (lVar2 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
                    /* catch() { ... } // from try @ 0053e974 with catch @ 0053e904
                       catch() { ... } // from try @ 0053ea18 with catch @ 0053e904 */
    operator_delete__(param_1 + -8);
    return;
  }
  return;
}


