/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b0f8
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>::manager
 * Signature: undefined __cdecl manager(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3, bool_ param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf3<void,
   Caver::GUINavigationController, boost::shared_ptr<Caver::GUIViewController> const&, void*,
   Caver::GUIEvent*>, boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,
   boost::_bi::value<boost::shared_ptr<Caver::GUIViewController> >, boost::arg<1>, boost::arg<2> > >
   >::manager(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type, mpl_::bool_<false>) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController>const&,void*,Caver::GUIEvent*>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>
     ::manager(long *param_1,long *param_2,undefined4 param_3)

{
  char *__s1;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_typeinfo_007e7640;
  switch(param_3) {
  case 0:
                    /* try { // try from 0059b130 to 0069b13b has its CatchHandler @ 0059c8a4 */
    puVar6 = (undefined8 *)*param_1;
    puVar2 = operator_new(0x28);
                    /* try { // try from 0059b13c to 0069b143 has its CatchHandler @ 0059bfd0 */
    uVar9 = *puVar6;
    puVar2[1] = puVar6[1];
    *puVar2 = uVar9;
                    /* try { // try from 0059b144 to 0069b1ab has its CatchHandler @ 0059c8a4 */
    puVar2[2] = puVar6[2];
    puVar2[3] = puVar6[3];
    lVar3 = puVar6[4];
    puVar2[4] = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    *param_2 = (long)puVar2;
    break;
  case 1:
    *param_2 = *param_1;
    *param_1 = 0;
    break;
  case 2:
    pvVar7 = (void *)*param_2;
    if (pvVar7 != (void *)0x0) {
      plVar8 = *(long **)((long)pvVar7 + 0x20);
      if ((plVar8 != (long *)0x0) && (lVar3 = plVar8[1], plVar8[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar3 = plVar8[2];
        plVar8[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* try { // try from 0059b1e0 to 0069b1eb has its CatchHandler @ 0059bf80 */
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      operator_delete(pvVar7);
    }
    *param_2 = 0;
    break;
  case 3:
    pcVar4 = *(char **)(*param_2 + 8);
                    /* try { // try from 0059b20c to 0069b233 has its CatchHandler @ 0059bea8 */
    __s1 = pcVar4 + 1;
    if (*pcVar4 != '*') {
      __s1 = pcVar4;
    }
    iVar1 = strcmp(__s1,PTR_typeinfo_name_007e4e10);
    puVar5 = (undefined *)*param_1;
    if (iVar1 != 0) {
      puVar5 = (undefined *)0x0;
    }
    goto LAB_0059b224;
  default:
    *(undefined2 *)(param_2 + 1) = 0;
LAB_0059b224:
    *param_2 = (long)puVar5;
  }
  return;
}


