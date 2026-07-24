/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059afd8
 * Function: boost::detail::function::basic_vtable2<void,void*,Caver::GUIEvent*>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
 * Signature: bool __cdecl assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(bind_t param_1, function_buffer * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool boost::detail::function::basic_vtable2<void, void*,
   Caver::GUIEvent*>::assign_to<boost::_bi::bind_t<void, boost::_mfi::mf3<void,
   Caver::GUINavigationController, boost::shared_ptr<Caver::GUIViewController> const&, void*,
   Caver::GUIEvent*>, boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >(boost::_bi::bind_t<void, boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> >
   >, boost::detail::function::function_buffer&) */

bool boost::detail::function::basic_vtable2<void,void*,Caver::GUIEvent*>::
     assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
               (undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0059afdc to 0069b003 has its CatchHandler @ 0059c838 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = param_2[2];
                    /* try { // try from 0059b004 to 0069b017 has its CatchHandler @ 0059c588 */
  local_40 = (long *)param_2[4];
  if (local_40 != (long *)0x0) {
                    /* try { // try from 0059b018 to 0069b023 has its CatchHandler @ 0059c580 */
    local_40[1] = local_40[1] + 1;
  }
                    /* try { // try from 0059b024 to 0069b037 has its CatchHandler @ 0059c548 */
  bVar3 = assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
                    (param_1,&local_60);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* try { // try from 0059b064 to 0069b073 has its CatchHandler @ 0059c664 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


