/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588df4
 * Function: boost::detail::lexical_cast<float,std::string,false,char>
 * Signature: float __cdecl lexical_cast<float,std::string,false,char>(param_type param_1, char * param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* float boost::detail::lexical_cast<float, std::string, false, char>(boost::call_traits<std::string
   >::param_type, char*, unsigned long) */

float boost::detail::lexical_cast<float,std::string,false,char>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  float local_9c;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  
  puVar2 = PTR_DAT_007e6a48;
                    /* try { // try from 00588df8 to 00688e1f has its CatchHandler @ 00588e28 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00588e20 to 00688e3b has its CatchHandler @ 00588d70 */
                    /* catch() { ... } // from try @ 00588df8 with catch @ 00588e28 */
  local_98 = PTR_DAT_007e6a48 + 0x10;
                    /* catch() { ... } // from try @ 00588d88 with catch @ 00588e2c */
  uStack_90 = 0;
  local_70 = 0;
  uStack_68 = 0;
                    /* try { // try from 00588e3c to 00688e47 has its CatchHandler @ 00588e48 */
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  FUN_0063db28(auStack_60);
                    /* catch() { ... } // from try @ 00588e3c with catch @ 00588e48 */
                    /* try { // try from 00588e4c to 00688e4f has its CatchHandler @ 00588e54 */
  local_98 = PTR_vtable_007e4ef0 + 0x10;
                    /* catch() { ... } // from try @ 00588e4c with catch @ 00588e54 */
  local_58 = *param_1;
  local_50 = local_58 + *(long *)(local_58 + -0x18);
  bVar3 = lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
                    ((lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *)
                     &local_98,&local_9c);
  if (bVar3) {
                    /* catch() { ... } // from try @ 00588eec with catch @ 00588e7c
                       catch() { ... } // from try @ 00588f90 with catch @ 00588e7c */
    local_98 = puVar2 + 0x10;
    FUN_0063c0c8(auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return local_9c;
    }
  }
  else {
    local_b8 = PTR_vtable_007e6e00 + 0x10;
    puStack_a8 = PTR_typeinfo_007e5b50;
    local_b0 = PTR_typeinfo_007e55e0;
                    /* try { // try from 00588ee8 to 00688eeb has its CatchHandler @ 00588f48 */
                    /* try { // try from 00588eec to 00688f67 has its CatchHandler @ 00588e7c */
    throw_exception<boost::bad_lexical_cast>((bad_lexical_cast *)&local_b8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


