/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032ae98
 * Function: Caver::ObjectLinkControllerComponent::LinkToBone
 * Signature: undefined __thiscall LinkToBone(ObjectLinkControllerComponent * this, intrusive_ptr * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::LinkToBone(boost::intrusive_ptr<Caver::SceneObject> const&,
   std::string const&) */

void __thiscall
Caver::ObjectLinkControllerComponent::LinkToBone
          (ObjectLinkControllerComponent *this,intrusive_ptr *param_1,string *param_2)

{
  FUN_0066a6a8(this + 0x90,param_2);
  LinkToObject(this,param_1);
  return;
}


