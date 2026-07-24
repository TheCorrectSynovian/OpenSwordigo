/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055bfe4
 * Function: Caver::ObjectLibrary::SaveToFile
 * Signature: undefined __thiscall SaveToFile(ObjectLibrary * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLibrary::SaveToFile(std::string const&) */

void __thiscall Caver::ObjectLibrary::SaveToFile(ObjectLibrary *this,string *param_1)

{
  long lVar1;
  ObjectLibrary aOStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Proto::ObjectLibrary::ObjectLibrary(aOStack_138);
                    /* try { // try from 0055c014 to 0065c12b has its CatchHandler @ 0055b604 */
                    /* catch() { ... } // from try @ 0055b9fc with catch @ 0055c018 */
  SaveToProtobufMessage(this,aOStack_138);
  SaveProtobufMessageToFile((MessageLite *)aOStack_138,param_1);
  printf("Wrote library \'%s\' to \'%s\'\n",*(undefined8 *)this,*(undefined8 *)param_1);
  Proto::ObjectLibrary::~ObjectLibrary(aOStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0055b6c0 with catch @ 0055c058 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


