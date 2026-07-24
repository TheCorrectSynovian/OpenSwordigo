/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ad2c
 * Function: boost::function2<void,void*,Caver::GUIEvent*>::function2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
 * Signature: undefined __cdecl function2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(bind_t param_1, type param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function2<void, void*, Caver::GUIEvent*>::function2<boost::_bi::bind_t<void,
   boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >(boost::_bi::bind_t<void, boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> >
   >, boost::enable_if_c<boost::type_traits::ice_not<is_integral<boost::_bi::bind_t<void,
   boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >::value>::value, int>::type) */

void boost::function2<void,void*,Caver::GUIEvent*>::
     function2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
               (function2<void,void*,Caver::GUIEvent*> *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)param_1 = 0;
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  local_30 = (long *)param_2[4];
  if (local_30 != (long *)0x0) {
    local_30[1] = local_30[1] + 1;
  }
  assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
            (param_1,&local_50);
  plVar2 = local_30;
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
                    /* try { // try from 0059adb0 to 0069adc3 has its CatchHandler @ 0059bfdc */
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


