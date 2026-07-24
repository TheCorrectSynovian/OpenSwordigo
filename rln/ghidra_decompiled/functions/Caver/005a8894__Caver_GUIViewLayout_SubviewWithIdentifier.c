/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a8894
 * Function: Caver::GUIViewLayout::SubviewWithIdentifier
 * Signature: undefined __cdecl SubviewWithIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&) */

void Caver::GUIViewLayout::SubviewWithIdentifier(string *param_1)

{
  string *psVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  psVar1 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                   *)(param_1 + 0x20),in_x1);
  if (param_1 + 0x28 == psVar1) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    *in_x8 = *(undefined8 *)(psVar1 + 0x28);
    lVar2 = *(long *)(psVar1 + 0x30);
    in_x8[1] = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
  }
  return;
}


