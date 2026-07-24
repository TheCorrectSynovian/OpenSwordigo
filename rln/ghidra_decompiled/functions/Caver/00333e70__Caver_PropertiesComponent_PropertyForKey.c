/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00333e70
 * Function: Caver::PropertiesComponent::PropertyForKey
 * Signature: undefined __cdecl PropertyForKey(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::PropertyForKey(std::string const&) */

void Caver::PropertiesComponent::PropertyForKey(string *param_1)

{
  string *in_x1;
  
  if (param_1[0x70] == (string)0x0) {
    Load((PropertiesComponent *)param_1);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)(param_1 + 0xa0),in_x1);
  FUN_0066a528();
  return;
}


