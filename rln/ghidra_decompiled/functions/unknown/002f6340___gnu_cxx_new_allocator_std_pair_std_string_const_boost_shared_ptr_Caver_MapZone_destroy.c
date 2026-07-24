/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6340
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>> * this, pair * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>::destroy
          (new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>> *this,
          pair *param_1)

{
  (*(code *)PTR_destroy_007dd9d0)();
  return;
}


