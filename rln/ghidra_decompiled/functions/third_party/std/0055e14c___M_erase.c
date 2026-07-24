/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055e14c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase
 * Signature: undefined __thiscall _M_erase(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>> * this, _Rb_tree_node * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo>, std::_Select1st<std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, Caver::ObjectLibrary::ObjectTemplateInfo> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo> >*) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
::_M_erase(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
           *this,_Rb_tree_node *param_1)

{
  _Rb_tree_node *p_Var1;
  
  while (param_1 != (_Rb_tree_node *)0x0) {
    _M_erase(this,*(_Rb_tree_node **)(param_1 + 0x18));
    p_Var1 = *(_Rb_tree_node **)(param_1 + 0x10);
    pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair
              ((pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo> *)(param_1 + 0x20))
    ;
    operator_delete(param_1);
    param_1 = p_Var1;
  }
  return;
}


