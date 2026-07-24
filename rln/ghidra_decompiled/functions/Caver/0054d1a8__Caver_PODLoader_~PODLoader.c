/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d1a8
 * Function: Caver::PODLoader::~PODLoader
 * Signature: undefined __thiscall ~PODLoader(PODLoader * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::~PODLoader() */

void __thiscall Caver::PODLoader::~PODLoader(PODLoader *this)

{
  long lVar1;
  long *plVar2;
  
  std::
  _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)(this + 0x70),*(_Rb_tree_node **)(this + 0x80));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  std::
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)(this + 0x28),*(_Rb_tree_node **)(this + 0x38));
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
                    /* catch() { ... } // from try @ 0054cab4 with catch @ 0054d1f0
                       catch() { ... } // from try @ 0054d0c0 with catch @ 0054d1f0 */
    operator_delete__(*(void **)(this + 0x10));
  }
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0054d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* try { // try from 0054d22c to 0064d263 has its CatchHandler @ 0054d22c
                       catch() { ... } // from try @ 0054d22c with catch @ 0054d22c
                       catch() { ... } // from try @ 0054d318 with catch @ 0054d22c */
  return;
}


