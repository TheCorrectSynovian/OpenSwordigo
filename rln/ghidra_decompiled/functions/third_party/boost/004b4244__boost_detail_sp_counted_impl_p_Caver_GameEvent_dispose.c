/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4244
 * Function: boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameEvent> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameEvent>::dispose
          (sp_counted_impl_p<Caver::GameEvent> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    std::
    _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                *)((long)pvVar1 + 0x38),*(_Rb_tree_node **)((long)pvVar1 + 0x48));
    std::
    _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)((long)pvVar1 + 8),*(_Rb_tree_node **)((long)pvVar1 + 0x18));
    operator_delete(pvVar1);
    return;
  }
  return;
}


