/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1210
 * Function: Caver::GameData::EntityClassForName
 * Signature: undefined __cdecl EntityClassForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::EntityClassForName(std::string const&) */

void Caver::GameData::EntityClassForName(string *param_1)

{
  string *psVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  psVar1 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                   *)(param_1 + 0xa0),in_x1);
  if (param_1 + 0xa8 == psVar1) {
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


