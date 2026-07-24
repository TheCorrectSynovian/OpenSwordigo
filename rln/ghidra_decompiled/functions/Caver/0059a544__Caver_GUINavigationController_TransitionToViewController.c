/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059a544
 * Function: Caver::GUINavigationController::TransitionToViewController
 * Signature: undefined __thiscall TransitionToViewController(GUINavigationController * this, shared_ptr * param_1, float param_2, float param_3, bool param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController>
   const&, float, float, bool) */

void __thiscall
Caver::GUINavigationController::TransitionToViewController
          (GUINavigationController *this,shared_ptr *param_1,float param_2,float param_3,
          bool param_4)

{
                    /* catch() { ... } // from try @ 005992fc with catch @ 0059a544
                       catch() { ... } // from try @ 0059938c with catch @ 0059a544 */
  TransitionToViewController(this + -0x48,param_1,param_2,param_3,param_4);
  return;
}


