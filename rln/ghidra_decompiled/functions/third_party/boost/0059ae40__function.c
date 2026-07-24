/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ae40
 * Function: boost::function2<void,void*,Caver::GUIEvent*>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
 * Signature: void __thiscall assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(function2<void,void*,Caver::GUIEvent*> * this, bind_t param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::function2<void, void*, Caver::GUIEvent*>::assign_to<boost::_bi::bind_t<void,
   boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >(boost::_bi::bind_t<void, boost::_mfi::mf3<void, Caver::GUINavigationController,
   boost::shared_ptr<Caver::GUIViewController> const&, void*, Caver::GUIEvent*>,
   boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> >
   >) */

void __thiscall
boost::function2<void,void*,Caver::GUIEvent*>::
assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
          (function2<void,void*,Caver::GUIEvent*> *this,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  local_60 = param_2[2];
  local_50 = (long *)param_2[4];
  if (local_50 != (long *)0x0) {
                    /* try { // try from 0059ae8c to 0069ae93 has its CatchHandler @ 0059c378 */
    local_50[1] = local_50[1] + 1;
  }
  puVar1 = PTR_stored_vtable_007e7990;
                    /* try { // try from 0059ae9c to 0069aeaf has its CatchHandler @ 0059bfd4 */
  bVar4 = detail::function::basic_vtable2<void,void*,Caver::GUIEvent*>::
          assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
                    (PTR_stored_vtable_007e7990,&local_70,this + 8);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar3[2];
    plVar3[2] = lVar5 + -1;
                    /* try { // try from 0059aee0 to 0069aeef has its CatchHandler @ 0059c76c */
    if (lVar5 + -1 == 0) {
                    /* try { // try from 0059aef0 to 0069af97 has its CatchHandler @ 0059ac98 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (!bVar4) {
    puVar1 = (undefined *)0x0;
  }
  *(undefined **)this = puVar1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


