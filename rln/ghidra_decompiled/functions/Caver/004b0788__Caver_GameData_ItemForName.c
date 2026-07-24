/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b0788
 * Function: Caver::GameData::ItemForName
 * Signature: undefined __cdecl ItemForName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::ItemForName(std::string const&) */

void Caver::GameData::ItemForName(string *param_1)

{
  undefined8 *puVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  if (*(long *)(*(long *)in_x1 + -0x18) == 0) {
                    /* catch() { ... } // from try @ 004af974 with catch @ 004b07cc */
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)
             std::
             map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
             ::operator[]((map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>>
                           *)param_1,in_x1);
    *in_x8 = *puVar1;
    lVar2 = puVar1[1];
    in_x8[1] = lVar2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
  }
  return;
}


