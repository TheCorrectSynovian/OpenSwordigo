/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056406c
 * Function: Caver::Scene::ObjectWithIdentifier
 * Signature: undefined __cdecl ObjectWithIdentifier(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::ObjectWithIdentifier(std::string const&) */

void Caver::Scene::ObjectWithIdentifier(string *param_1)

{
  string *psVar1;
  string *in_x1;
  long *in_x8;
  long lVar2;
  
  psVar1 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                   *)(param_1 + 0xb0),in_x1);
  if (param_1 + 0xb8 == psVar1) {
    *in_x8 = 0;
  }
  else {
    lVar2 = *(long *)(psVar1 + 0x28);
    *in_x8 = lVar2;
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 00564040 with catch @ 005640a0 */
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
  }
  return;
}


