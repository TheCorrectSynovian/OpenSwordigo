/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055b78c
 * Function: Caver::ObjectLibrary::LoadFromFile
 * Signature: undefined __thiscall LoadFromFile(ObjectLibrary * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::LoadFromFile(std::string const&) */

void __thiscall Caver::ObjectLibrary::LoadFromFile(ObjectLibrary *this,string *param_1)

{
  long lVar1;
  ObjectLibrary aOStack_138 [256];
  long local_38;
  
                    /* try { // try from 0055b7a0 to 0065b7a7 has its CatchHandler @ 0055bec8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0055b7a8 to 0065b7fb has its CatchHandler @ 0055b604 */
  Proto::ObjectLibrary::ObjectLibrary(aOStack_138);
  LoadProtobufMessageFromFile((MessageLite *)aOStack_138,param_1);
  LoadFromProtobufMessage(this,aOStack_138);
  Proto::ObjectLibrary::~ObjectLibrary(aOStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0055b7fc to 0065b7ff has its CatchHandler @ 0055be7c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


