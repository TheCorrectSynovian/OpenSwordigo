/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046fd54
 * Function: boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string_const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>,void,bool,std::string_const&>::invoke
 * Signature: undefined __cdecl invoke(function_buffer * param_1, bool param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::function::void_function_obj_invoker2<boost::_bi::bind_t<void,
   boost::_mfi::mf2<void, Caver::MainMenuViewController, bool, std::string const&>,
   boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>, boost::arg<1>, boost::arg<2>
   > >, void, bool, std::string const&>::invoke(boost::detail::function::function_buffer&, bool,
   std::string const&) */

void boost::detail::function::
     void_function_obj_invoker2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::MainMenuViewController,bool,std::string_const&>,boost::_bi::list3<boost::_bi::value<Caver::MainMenuViewController*>,boost::arg<1>,boost::arg<2>>>,void,bool,std::string_const&>
     ::invoke(function_buffer *param_1,bool param_2,string *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 8) >> 1));
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0046fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2);
  return;
}


