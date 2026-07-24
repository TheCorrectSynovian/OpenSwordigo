/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e260c
 * Function: google::protobuf::MessageLite::SerializePartialAsString
 * Signature: undefined __cdecl SerializePartialAsString(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::MessageLite::SerializePartialAsString() const */

void google::protobuf::MessageLite::SerializePartialAsString(void)

{
  long lVar1;
  MessageLite *in_x0;
  string *in_x8;
  long lVar2;
  
                    /* catch() { ... } // from try @ 005e2608 with catch @ 005e2614 */
                    /* catch() { ... } // from try @ 005e1ff0 with catch @ 005e2618
                       catch() { ... } // from try @ 005e2088 with catch @ 005e2618 */
                    /* catch() { ... } // from try @ 005e1f30 with catch @ 005e261c
                       catch() { ... } // from try @ 005e1fc4 with catch @ 005e261c */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined **)in_x8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 005e2640 to 006e2667 has its CatchHandler @ 005e2670 */
  AppendPartialToString(in_x0,in_x8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 005e2668 to 006e267b has its CatchHandler @ 005e1ec0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


