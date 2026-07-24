/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005128e0
 * Function: boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>
 * Signature: void __cdecl checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>
   >(boost::shared_ptr<Caver::InventoryTrinketSlot>*) */

void boost::checked_array_delete<boost::shared_ptr<Caver::InventoryTrinketSlot>>
               (shared_ptr *param_1)

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
                    /* try { // try from 00512920 to 00612923 has its CatchHandler @ 00512930 */
        if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0))
        {
                    /* catch() { ... } // from try @ 00512920 with catch @ 00512930 */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
          if (lVar2 + -1 == 0) {
                    /* try { // try from 0051294c to 00612953 has its CatchHandler @ 0051295c */
                    /* try { // try from 00512954 to 0061295f has its CatchHandler @ 005128d4 */
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        lVar1 = lVar1 + -0x10;
                    /* catch() { ... } // from try @ 0051294c with catch @ 0051295c */
      } while (lVar1 != 0);
    }
                    /* try { // try from 00512960 to 006129af has its CatchHandler @ 00512960
                       catch(type#1 @ 00000000) { ... } // from try @ 00512960 with catch @ 00512960
                       catch(type#1 @ 00000000) { ... } // from try @ 005129cc with catch @ 00512960
                       catch(type#1 @ 00000000) { ... } // from try @ 00512d20 with catch @ 00512960
                        */
    operator_delete__(param_1 + -8);
    return;
  }
  return;
}


