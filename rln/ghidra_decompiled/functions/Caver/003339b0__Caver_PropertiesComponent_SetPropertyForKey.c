/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003339b0
 * Function: Caver::PropertiesComponent::SetPropertyForKey
 * Signature: undefined __thiscall SetPropertyForKey(PropertiesComponent * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::SetPropertyForKey(std::string const&, std::string const&) */

void __thiscall
Caver::PropertiesComponent::SetPropertyForKey
          (PropertiesComponent *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  
  if (this[0x70] == (PropertiesComponent)0x0) {
    Load(this);
  }
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)(this + 0xa0),param_1);
  FUN_0066a6a8(uVar1,param_2);
  return;
}


