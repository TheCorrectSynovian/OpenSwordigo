/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b24c
 * Function: boost::detail::function::basic_vtable2<void,void*,Caver::GUIEvent*>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
 * Signature: bool __cdecl assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(bind_t param_1, function_buffer * param_2, function_obj_tag param_3)
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
   >, boost::detail::function::function_buffer&, boost::detail::function::function_obj_tag) */

bool boost::detail::function::basic_vtable2<void,void*,Caver::GUIEvent*>::
     assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
                    /* try { // try from 0059b250 to 0069b25b has its CatchHandler @ 0059c8a8 */
                    /* try { // try from 0059b260 to 0069b273 has its CatchHandler @ 0059c528 */
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0059b274 to 0069b287 has its CatchHandler @ 0059c4f0 */
  uVar5 = has_empty_target(param_2);
  if ((uVar5 & 1) == 0) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    plVar9 = (long *)param_2[4];
                    /* try { // try from 0059b298 to 0069b2a3 has its CatchHandler @ 0059c43c */
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    if (plVar9 != (long *)0x0) {
      plVar9[1] = plVar9[1] + 1;
    }
    puVar6 = operator_new(0x28);
    puVar6[2] = uVar1;
    puVar6[3] = uVar2;
    puVar6[4] = plVar9;
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    if (plVar9 == (long *)0x0) {
      *param_3 = puVar6;
    }
    else {
      plVar9[1] = plVar9[1] + 1;
      *param_3 = puVar6;
                    /* try { // try from 0059b2d8 to 0069b2e7 has its CatchHandler @ 0059c8b8 */
      lVar8 = plVar9[1];
      plVar9[1] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0059b2ec to 0069b2ff has its CatchHandler @ 0059c438 */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar8 = plVar9[2];
                    /* try { // try from 0059b300 to 0069b363 has its CatchHandler @ 0059c590 */
        plVar9[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
                    /* try { // try from 0059b288 to 0069b297 has its CatchHandler @ 0059c498 */
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


