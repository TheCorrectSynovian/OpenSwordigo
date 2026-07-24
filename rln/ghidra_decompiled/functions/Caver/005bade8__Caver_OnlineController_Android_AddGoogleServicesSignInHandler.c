/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bade8
 * Function: Caver::OnlineController_Android::AddGoogleServicesSignInHandler
 * Signature: undefined __thiscall AddGoogleServicesSignInHandler(OnlineController_Android * this, TargetAction param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::AddGoogleServicesSignInHandler(Caver::TargetAction<void (bool,
   std::string const&)>) */

void __thiscall
Caver::OnlineController_Android::AddGoogleServicesSignInHandler
          (OnlineController_Android *this,TargetAction *param_2)

{
  undefined8 uVar1;
  
  uVar1 = std::
          list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
          ::_M_create_node((list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                            *)(this + 0x10),param_2);
  FUN_0062a9ac(uVar1,(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                      *)(this + 0x10));
  return;
}


