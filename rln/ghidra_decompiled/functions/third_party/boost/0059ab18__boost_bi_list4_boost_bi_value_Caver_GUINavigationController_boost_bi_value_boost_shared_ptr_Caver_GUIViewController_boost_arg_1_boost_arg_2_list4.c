/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ab18
 * Function: boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4
 * Signature: undefined __cdecl list4(value param_1, value param_2, arg param_3, arg param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2>
   >::list4(boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2>) */

void boost::_bi::
     list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>
     ::list4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_3;
  local_30 = (long *)param_3[1];
  if (local_30 != (long *)0x0) {
    local_30[1] = local_30[1] + 1;
  }
  storage4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>
  ::storage4(param_1,param_2,&local_38);
  plVar2 = local_30;
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


