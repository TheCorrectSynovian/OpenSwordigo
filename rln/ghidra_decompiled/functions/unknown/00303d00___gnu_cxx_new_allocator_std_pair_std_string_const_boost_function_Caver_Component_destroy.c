/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00303d00
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>> * this, pair * param_1)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>::destroy
          (new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>> *this,
          pair *param_1)

{
  (*(code *)PTR_destroy_007e46b0)();
  return;
}


