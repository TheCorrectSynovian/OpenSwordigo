/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004644e0
 * Function: boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameSceneController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameSceneController>::dispose
          (sp_counted_impl_p<Caver::GameSceneController> *this)

{
  GameSceneController *this_00;
  
  this_00 = *(GameSceneController **)(this + 0x18);
  if (this_00 != (GameSceneController *)0x0) {
    Caver::GameSceneController::~GameSceneController(this_00);
                    /* try { // try from 00464500 to 0056450b has its CatchHandler @ 00464ffc */
    operator_delete(this_00);
    return;
  }
  return;
}


