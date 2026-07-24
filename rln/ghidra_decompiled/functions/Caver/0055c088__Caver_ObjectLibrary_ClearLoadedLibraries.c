/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055c088
 * Function: Caver::ObjectLibrary::ClearLoadedLibraries
 * Signature: undefined __cdecl ClearLoadedLibraries(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::ClearLoadedLibraries() */

void Caver::ObjectLibrary::ClearLoadedLibraries(void)

{
                    /* catch() { ... } // from try @ 0055bbac with catch @ 0055c098 */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              *)&DAT_007e9bb8,DAT_007e9bc8);
  DAT_007e9bd0 = &DAT_007e9bc0;
  DAT_007e9bc8 = (_Rb_tree_node *)0x0;
  DAT_007e9bd8 = &DAT_007e9bc0;
  DAT_007e9be0 = 0;
  return;
}


