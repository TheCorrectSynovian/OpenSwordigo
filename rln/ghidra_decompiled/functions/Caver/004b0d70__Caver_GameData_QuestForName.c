/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b0d70
 * Function: Caver::GameData::QuestForName
 * Signature: undefined __cdecl QuestForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::QuestForName(std::string const&) */

void Caver::GameData::QuestForName(string *param_1)

{
  string *psVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  psVar1 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
                   *)(param_1 + 0x58),in_x1);
  if (param_1 + 0x60 == psVar1) {
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


