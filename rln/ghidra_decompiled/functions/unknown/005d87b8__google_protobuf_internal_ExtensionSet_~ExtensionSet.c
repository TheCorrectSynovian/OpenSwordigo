/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d87b8
 * Function: google::protobuf::internal::ExtensionSet::~ExtensionSet
 * Signature: undefined __thiscall ~ExtensionSet(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::~ExtensionSet() */

void __thiscall google::protobuf::internal::ExtensionSet::~ExtensionSet(ExtensionSet *this)

{
  ExtensionSet *pEVar1;
  
                    /* catch() { ... } // from try @ 005d87a8 with catch @ 005d87b8 */
                    /* try { // try from 005d87bc to 006d87bf has its CatchHandler @ 005d87c8 */
                    /* try { // try from 005d87c0 to 006d87cb has its CatchHandler @ 005d86e0 */
                    /* catch() { ... } // from try @ 005d87bc with catch @ 005d87c8 */
                    /* try { // try from 005d87cc to 006d87eb has its CatchHandler @ 005d87cc
                       catch() { ... } // from try @ 005d87cc with catch @ 005d87cc
                       catch() { ... } // from try @ 005d87f4 with catch @ 005d87cc
                       catch() { ... } // from try @ 005d883c with catch @ 005d87cc */
  for (pEVar1 = *(ExtensionSet **)(this + 0x18); pEVar1 != this + 8;
      pEVar1 = (ExtensionSet *)FUN_0064c640(pEVar1)) {
                    /* try { // try from 005d87ec to 006d87f3 has its CatchHandler @ 005d8824 */
                    /* try { // try from 005d87f4 to 006d882f has its CatchHandler @ 005d87cc */
    Extension::Free((Extension *)(pEVar1 + 0x28));
  }
  std::
  _Rb_tree<int,std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int_const,google::protobuf::internal::ExtensionSet::Extension>>>
              *)this,*(_Rb_tree_node **)(this + 0x10));
  return;
}


