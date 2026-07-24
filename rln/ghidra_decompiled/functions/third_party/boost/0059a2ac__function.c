/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059a2ac
 * Function: boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>
 * Signature: bind_t __cdecl bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(_func_void_shared_ptr_ptr_void_ptr_GUIEvent_ptr * param_1, GUINavigationController * param_2, shared_ptr param_3, arg param_4, arg param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::_bi::bind_t<void, boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list_av_4<Caver::GUINavigationController*,
   boost::shared_ptr<Caver::GUIViewController>, boost::arg<1>, boost::arg<2> >::type>
   boost::bind<void, Caver::GUINavigationController, boost::shared_ptr<Caver::GUIViewController>
   const&, void*, Caver::GUIEvent*, Caver::GUINavigationController*,
   boost::shared_ptr<Caver::GUIViewController>, boost::arg<1>, boost::arg<2> >(void
   (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&, void*,
   Caver::GUIEvent*), Caver::GUINavigationController*, boost::shared_ptr<Caver::GUIViewController>,
   boost::arg<1>, boost::arg<2>) */

void boost::
     bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>
               (undefined8 *param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_4,
               undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0059867c with catch @ 0059a2ac */
                    /* catch() { ... } // from try @ 00598628 with catch @ 0059a2b0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = *param_5;
  local_68 = (long *)param_5[1];
  if (local_68 != (long *)0x0) {
    local_68[1] = local_68[1] + 1;
  }
                    /* catch() { ... } // from try @ 005985bc with catch @ 0059a300 */
  _bi::
  list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>
  ::list4(&local_60,param_4,&local_70);
  *param_1_00 = param_1;
  param_1_00[1] = param_2;
  param_1_00[3] = uStack_58;
  param_1_00[2] = local_60;
  param_1_00[4] = local_50;
  if ((local_50 != (long *)0x0) && (local_50[1] == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* catch() { ... } // from try @ 00598564 with catch @ 0059a340 */
    lVar3 = local_50[2];
                    /* catch() { ... } // from try @ 00598510 with catch @ 0059a344 */
    local_50[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  plVar2 = local_68;
                    /* catch() { ... } // from try @ 005984e8 with catch @ 0059a374 */
  if ((local_68 != (long *)0x0) && (lVar3 = local_68[1], local_68[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 005984e0 with catch @ 0059a378 */
                    /* catch() { ... } // from try @ 00598394 with catch @ 0059a37c */
                    /* catch() { ... } // from try @ 0059838c with catch @ 0059a380 */
    (**(code **)(*local_68 + 0x10))(local_68);
    lVar3 = plVar2[2];
                    /* catch() { ... } // from try @ 00598364 with catch @ 0059a390 */
    plVar2[2] = lVar3 + -1;
                    /* catch() { ... } // from try @ 0059835c with catch @ 0059a394 */
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 00598310 with catch @ 0059a398 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005982e8 with catch @ 0059a3c8 */
                    /* catch() { ... } // from try @ 005982e0 with catch @ 0059a3cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005982cc with catch @ 0059a3d0 */
  __stack_chk_fail();
}


