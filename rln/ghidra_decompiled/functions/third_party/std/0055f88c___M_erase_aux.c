/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055f88c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux
 * Signature: undefined __thiscall _M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>> * this, _Rb_tree_const_iterator param_1, _Rb_tree_const_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo>, std::_Select1st<std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, Caver::ObjectLibrary::ObjectTemplateInfo> >
   >::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo> >, std::_Rb_tree_const_iterator<std::pair<std::string
   const, Caver::ObjectLibrary::ObjectTemplateInfo> >) */

void __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
::_M_erase_aux(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
               *this,_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     *param_2,
              _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *param_3)

{
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *p_Var1;
  void *pvVar2;
  
                    /* catch() { ... } // from try @ 0055f82c with catch @ 0055f8b4 */
                    /* try { // try from 0055f8b8 to 0065f8e3 has its CatchHandler @ 0055f8b8
                       catch() { ... } // from try @ 0055f8b8 with catch @ 0055f8b8
                       catch() { ... } // from try @ 0055f908 with catch @ 0055f8b8
                       catch() { ... } // from try @ 0055f988 with catch @ 0055f8b8 */
  if ((this + 8 == param_3) &&
     (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
        **)(this + 0x18) == param_2)) {
    _M_erase(this,*(_Rb_tree_node **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
      **)(this + 0x18) = param_3;
    *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
      **)(this + 0x20) = param_3;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (param_2 != param_3) {
                    /* try { // try from 0055f8e4 to 0065f8f7 has its CatchHandler @ 0055fa98 */
      p_Var1 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                *)FUN_0064c6a0(param_2);
      pvVar2 = (void *)FUN_0064ca60(param_2,this + 8);
                    /* try { // try from 0055f8fc to 0065f907 has its CatchHandler @ 0055fa58 */
      pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair
                ((pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo> *)
                 ((long)pvVar2 + 0x20));
                    /* try { // try from 0055f908 to 0065f973 has its CatchHandler @ 0055f8b8 */
      operator_delete(pvVar2);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      param_2 = p_Var1;
    }
  }
  return;
}


