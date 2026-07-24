/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004507c4
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIEffect>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIEffect> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIEffect>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIEffect>::dispose
          (sp_counted_impl_p<Caver::GUIEffect> *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  
                    /* try { // try from 004507d0 to 005507d3 has its CatchHandler @ 004507e4 */
  pvVar4 = *(void **)(this + 0x18);
                    /* try { // try from 004507d4 to 005507f7 has its CatchHandler @ 004507b8 */
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((long)pvVar4 + 0x68) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar4 + 0x68));
    }
                    /* catch() { ... } // from try @ 004507d0 with catch @ 004507e4 */
    uVar2 = *(ulong *)((long)pvVar4 + 0x18);
    if (uVar2 != 0) {
                    /* try { // try from 004507f8 to 0055080f has its CatchHandler @ 004507f8
                       catch() { ... } // from try @ 004507f8 with catch @ 004507f8
                       catch() { ... } // from try @ 00450814 with catch @ 004507f8 */
      if (((uVar2 & 1) == 0) && (*(code **)(uVar2 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(uVar2 & 0xfffffffffffffffe))((long)pvVar4 + 0x20,(long)pvVar4 + 0x20,2);
      }
      *(undefined8 *)((long)pvVar4 + 0x18) = 0;
    }
                    /* try { // try from 00450810 to 00550813 has its CatchHandler @ 00450824 */
    plVar1 = *(long **)((long)pvVar4 + 0x10);
                    /* try { // try from 00450814 to 00550837 has its CatchHandler @ 004507f8 */
                    /* catch() { ... } // from try @ 00450810 with catch @ 00450824 */
    if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[2], plVar1[2] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x18))();
    }
                    /* try { // try from 00450838 to 0055084f has its CatchHandler @ 00450838
                       catch() { ... } // from try @ 00450838 with catch @ 00450838
                       catch() { ... } // from try @ 00450854 with catch @ 00450838 */
    operator_delete(pvVar4);
    return;
  }
  return;
}


