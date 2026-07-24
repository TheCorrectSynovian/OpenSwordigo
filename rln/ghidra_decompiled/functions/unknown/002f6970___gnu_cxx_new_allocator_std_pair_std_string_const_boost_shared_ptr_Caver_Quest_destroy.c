/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f6970
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>> * this, pair * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>::destroy
          (new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>> *this,
          pair *param_1)

{
  (*(code *)PTR_destroy_007ddce8)();
  return;
}


