/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334428
 * Function: Caver::PropertiesComponent::~PropertiesComponent
 * Signature: undefined __thiscall ~PropertiesComponent(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::~PropertiesComponent() */

void __thiscall Caver::PropertiesComponent::~PropertiesComponent(PropertiesComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4bc0 + 0x128;
  puVar2 = PTR_vtable_007e4bc0 + 0x168;
  *(undefined **)this = PTR_vtable_007e4bc0 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)(this + 0xa0),*(_Rb_tree_node **)(this + 0xb0));
  Program::~Program((Program *)(this + 0x78));
  Component::~Component((Component *)this);
  return;
}


