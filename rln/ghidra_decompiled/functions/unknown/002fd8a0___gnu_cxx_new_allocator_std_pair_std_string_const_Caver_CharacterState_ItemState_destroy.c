/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002fd8a0
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>> * this, pair * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>::destroy
          (new_allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>> *this,
          pair *param_1)

{
  (*(code *)PTR_destroy_007e1480)();
  return;
}


