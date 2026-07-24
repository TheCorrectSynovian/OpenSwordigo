/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059a430
 * Function: boost::function<void(void*,Caver::GUIEvent*)>::function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
 * Signature: undefined __cdecl function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(bind_t param_1, type param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function<void (void*, Caver::GUIEvent*)>::function<boost::_bi::bind_t<void,
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

void boost::function<void(void*,Caver::GUIEvent*)>::
     function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
               (undefined8 param_1,undefined8 *param_2)

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
                    /* catch() { ... } // from try @ 005992b4 with catch @ 0059a448
                       catch() { ... } // from try @ 005996e8 with catch @ 0059a448 */
                    /* catch() { ... } // from try @ 005990b8 with catch @ 0059a44c
                       catch() { ... } // from try @ 005990fc with catch @ 0059a44c */
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  local_40 = param_2[2];
  local_30 = (long *)param_2[4];
  if (local_30 != (long *)0x0) {
    local_30[1] = local_30[1] + 1;
  }
  function2<void,void*,Caver::GUIEvent*>::
  function2<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
            (param_1,&local_50,0);
  plVar2 = local_30;
                    /* catch() { ... } // from try @ 00599040 with catch @ 0059a484
                       catch() { ... } // from try @ 00599084 with catch @ 0059a484 */
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 005984fc with catch @ 0059a4bc
                       catch() { ... } // from try @ 00598540 with catch @ 0059a4bc */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


