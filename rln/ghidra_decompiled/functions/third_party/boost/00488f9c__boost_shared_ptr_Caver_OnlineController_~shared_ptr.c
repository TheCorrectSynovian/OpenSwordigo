/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00488f9c
 * Function: boost::shared_ptr<Caver::OnlineController>::~shared_ptr
 * Signature: undefined __thiscall ~shared_ptr(shared_ptr<Caver::OnlineController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::OnlineController>::~shared_ptr() */

void __thiscall
boost::shared_ptr<Caver::OnlineController>::~shared_ptr(shared_ptr<Caver::OnlineController> *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 00488f9c to 00588faf has its CatchHandler @ 00489150 */
  plVar2 = *(long **)(this + 8);
                    /* try { // try from 00488fb0 to 00588fc7 has its CatchHandler @ 00489118 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 00488fc8 to 0058925f has its CatchHandler @ 00488df4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00489000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


