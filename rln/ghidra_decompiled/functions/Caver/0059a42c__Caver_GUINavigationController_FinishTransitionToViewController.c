/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059a42c
 * Function: Caver::GUINavigationController::FinishTransitionToViewController
 * Signature: undefined __cdecl FinishTransitionToViewController(shared_ptr * param_1, void * param_2, GUIEvent * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::FinishTransitionToViewController(boost::shared_ptr<Caver::GUIViewController>
   const&, void*, Caver::GUIEvent*) */

void Caver::GUINavigationController::FinishTransitionToViewController
               (shared_ptr *param_1,void *param_2,GUIEvent *param_3)

{
  (*(code *)PTR_SetCurrentViewController_007e3a88)();
  return;
}


