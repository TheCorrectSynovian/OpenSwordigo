/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ec074
 * Function: boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string_const&,bool,std::string_const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string_const&,bool,std::string_const&>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1, string * param_2, bool param_3, string * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::void_function_obj_invoker3<boost::_bi::bind_t<void,
   boost::_mfi::mf3<void, Caver::PurchaseViewController, std::string const&, bool, std::string
   const&>, boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>, boost::arg<1>,
   boost::arg<2>, boost::arg<3> > >, void, std::string const&, bool, std::string
   const&>::invoke(boost::detail::function::function_buffer&, std::string const&, bool, std::string
   const&) */

void boost::detail::function::
     void_function_obj_invoker3<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::PurchaseViewController,std::string_const&,bool,std::string_const&>,boost::_bi::list4<boost::_bi::value<Caver::PurchaseViewController*>,boost::arg<1>,boost::arg<2>,boost::arg<3>>>,void,std::string_const&,bool,std::string_const&>
     ::invoke(function_buffer *param_1,string *param_2,bool param_3,string *param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 8) >> 1));
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x004ec090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,param_3);
  return;
}


