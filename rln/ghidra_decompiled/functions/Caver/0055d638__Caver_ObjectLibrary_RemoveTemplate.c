/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055d638
 * Function: Caver::ObjectLibrary::RemoveTemplate
 * Signature: undefined __thiscall RemoveTemplate(ObjectLibrary * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::RemoveTemplate(Caver::ObjectTemplate*) */

void __thiscall Caver::ObjectLibrary::RemoveTemplate(ObjectLibrary *this,ObjectTemplate *param_1)

{
  undefined1 auVar1 [16];
  
  if (*(ObjectLibrary **)(param_1 + 0x128) == this) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
                    /* try { // try from 0055d65c to 0065d667 has its CatchHandler @ 0055d824 */
  auVar1 = std::
           _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
           ::equal_range((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                          *)(this + 8),(string *)(param_1 + 0x50));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  ::_M_erase_aux((_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                  *)(this + 8),auVar1._0_8_,auVar1._8_8_);
  return;
}


