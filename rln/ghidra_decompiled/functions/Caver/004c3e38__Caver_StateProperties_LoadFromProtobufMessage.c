/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3e38
 * Function: Caver::StateProperties::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(StateProperties * this, StateProperties * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&) */

void __thiscall
Caver::StateProperties::LoadFromProtobufMessage(StateProperties *this,StateProperties *param_1)

{
  long lVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)this,
                 *(string **)(*(long *)(param_1 + 0x10) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}


