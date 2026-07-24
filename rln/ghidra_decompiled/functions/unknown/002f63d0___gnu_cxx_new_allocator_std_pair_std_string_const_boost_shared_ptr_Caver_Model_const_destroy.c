/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 002f63d0
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>> * this, pair * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>::
destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>> *this,
       pair *param_1)

{
  (*(code *)PTR_destroy_007dda18)();
  return;
}


