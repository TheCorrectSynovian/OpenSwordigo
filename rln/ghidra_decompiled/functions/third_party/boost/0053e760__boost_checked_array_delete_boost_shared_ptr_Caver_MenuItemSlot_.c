/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e760
 * Function: boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>
 * Signature: void __cdecl checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>
   >(boost::shared_ptr<Caver::MenuItemSlot>*) */

void boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(shared_ptr *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (shared_ptr *)0x0) {
    lVar1 = *(long *)(param_1 + -8);
    if (lVar1 != 0) {
      lVar1 = lVar1 << 4;
      do {
        plVar3 = *(long **)(param_1 + lVar1 + -8);
                    /* catch() { ... } // from try @ 0053e744 with catch @ 0053e7a4 */
        if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0))
        {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
                    /* try { // try from 0053e7c4 to 0063e7eb has its CatchHandler @ 0053e7f4 */
          if (lVar2 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
                    /* try { // try from 0053e7ec to 0063e7f7 has its CatchHandler @ 0053e6d8 */
                    /* catch() { ... } // from try @ 0053e7c4 with catch @ 0053e7f4 */
    operator_delete__(param_1 + -8);
    return;
  }
                    /* catch() { ... } // from try @ 0053e8a8 with catch @ 0053e7f8 */
  return;
}


