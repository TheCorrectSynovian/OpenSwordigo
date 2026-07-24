/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7280
 * Function: Caver::ProfileManager::ProfileWithIdentifier
 * Signature: undefined __cdecl ProfileWithIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::ProfileWithIdentifier(std::string const&) */

void Caver::ProfileManager::ProfileWithIdentifier(string *param_1)

{
  string *psVar1;
  string *in_x1;
  undefined8 *in_x8;
  long lVar2;
  
  if (param_1[0x78] == (string)0x0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0);
  }
                    /* try { // try from 004a72b8 to 005a72eb has its CatchHandler @ 004a8cd4 */
  psVar1 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   *)(param_1 + 0x48),in_x1);
  if (param_1 + 0x50 == psVar1) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    *in_x8 = *(undefined8 *)(psVar1 + 0x28);
    lVar2 = *(long *)(psVar1 + 0x30);
    in_x8[1] = lVar2;
    if (lVar2 != 0) {
                    /* try { // try from 004a72ec to 005a7333 has its CatchHandler @ 004a724c */
      *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    }
  }
  return;
}


