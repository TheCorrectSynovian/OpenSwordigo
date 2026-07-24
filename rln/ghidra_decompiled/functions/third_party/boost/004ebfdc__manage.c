/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ebfdc
 * Function: boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string_const&,bool,std::string_const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>::manage
 * Signature: undefined __cdecl manage(function_buffer * param_1, function_buffer * param_2, functor_manager_operation_type param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::functor_manager<boost::_bi::bind_t<void, boost::_mfi::mf3<void,
   Caver::PurchaseViewController, std::string const&, bool, std::string const&>,
   boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>, boost::arg<1>,
   boost::arg<2>, boost::arg<3> > > >::manage(boost::detail::function::function_buffer const&,
   boost::detail::function::function_buffer&,
   boost::detail::function::functor_manager_operation_type) */

void boost::detail::function::
     functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string_const&,bool,std::string_const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>>
     ::manage(long *param_1,long *param_2,uint param_3)

{
  char *__s1;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  puVar1 = PTR_typeinfo_007e6dc0;
                    /* try { // try from 004ebff4 to 005ebffb has its CatchHandler @ 004ec004 */
  if (param_3 != 4) {
                    /* try { // try from 004ec00c to 005ec053 has its CatchHandler @ 004ec00c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec00c with catch @ 004ec00c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec070 with catch @ 004ec00c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ec0b8 with catch @ 004ec00c
                        */
    if (param_3 < 2) {
      param_2[2] = param_1[2];
      lVar4 = *param_1;
      param_2[1] = param_1[1];
      *param_2 = lVar4;
      return;
    }
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
      pcVar3 = *(char **)(*param_2 + 8);
      __s1 = pcVar3 + 1;
                    /* try { // try from 004ec054 to 005ec06f has its CatchHandler @ 004ec0ac */
      if (*pcVar3 != '*') {
        __s1 = pcVar3;
      }
      iVar2 = strcmp(__s1,PTR_typeinfo_name_007e4bc8);
      if (iVar2 != 0) {
        param_1 = (long *)0x0;
      }
      goto LAB_004ec004;
    }
  }
                    /* try { // try from 004ebffc to 005ec00b has its CatchHandler @ 004ebf5c */
  *(undefined2 *)(param_2 + 1) = 0;
  param_1 = (long *)puVar1;
LAB_004ec004:
                    /* catch() { ... } // from try @ 004ebff4 with catch @ 004ec004 */
  *param_2 = (long)param_1;
                    /* try { // try from 004ec070 to 005ec0af has its CatchHandler @ 004ec00c */
  return;
                    /* catch() { ... } // from try @ 004ebfc8 with catch @ 004ec008 */
}


