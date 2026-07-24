/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ac20
 * Function: boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::storage4
 * Signature: undefined __cdecl storage4(value param_1, value param_2, arg param_3, arg param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2>
   >::storage4(boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2>) */

void boost::_bi::
     storage4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>
     ::storage4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *param_3;
  plVar2 = (long *)param_3[1];
  if (plVar2 == (long *)0x0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
    param_1[2] = 0;
  }
  else {
    plVar2[1] = plVar2[1] + 2;
    *param_1 = param_2;
    param_1[1] = uVar1;
    param_1[2] = plVar2;
    if (plVar2[1] == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    lVar3 = plVar2[1];
    plVar2[1] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 0059ac98 to 0069adaf has its CatchHandler @ 0059ac98
                       catch() { ... } // from try @ 0059ac98 with catch @ 0059ac98
                       catch() { ... } // from try @ 0059ae00 with catch @ 0059ac98
                       catch() { ... } // from try @ 0059aef0 with catch @ 0059ac98
                       catch() { ... } // from try @ 0059bd38 with catch @ 0059ac98
                       catch() { ... } // from try @ 0059bfcc with catch @ 0059ac98
                       catch() { ... } // from try @ 0059c434 with catch @ 0059ac98
                       catch() { ... } // from try @ 0059c94c with catch @ 0059ac98 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0059acc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


