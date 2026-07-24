/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2540
 * Function: google::protobuf::MessageLite::SerializeAsString
 * Signature: undefined __cdecl SerializeAsString(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializeAsString() const */

void google::protobuf::MessageLite::SerializeAsString(void)

{
  long lVar1;
  MessageLite *in_x0;
  string *in_x8;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined **)in_x8 = PTR_DAT_007e5de8 + 0x18;
  AppendPartialToString(in_x0,in_x8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


