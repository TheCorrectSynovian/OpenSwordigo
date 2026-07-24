/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588b48
 * Function: boost::detail::lexical_cast<unsigned_int,std::string,false,char>
 * Signature: uint __cdecl lexical_cast<unsigned_int,std::string,false,char>(param_type param_1, char * param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* unsigned int boost::detail::lexical_cast<unsigned int, std::string, false,
   char>(boost::call_traits<std::string >::param_type, char*, unsigned long) */

uint boost::detail::lexical_cast<unsigned_int,std::string,false,char>(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  uint local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  long local_40;
  long local_38;
  
  puVar2 = PTR_DAT_007e6a48;
                    /* catch() { ... } // from try @ 005889bc with catch @ 00588b50 */
                    /* catch() { ... } // from try @ 00588974 with catch @ 00588b60 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0058892c with catch @ 00588b70 */
  local_88 = PTR_DAT_007e6a48 + 0x10;
  uStack_80 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
                    /* try { // try from 00588b94 to 00688d2b has its CatchHandler @ 00588d34 */
  FUN_0063db28(auStack_50);
  local_88 = PTR_vtable_007e4ef0 + 0x10;
  local_48 = *param_1;
  local_40 = local_48 + *(long *)(local_48 + -0x18);
  bVar3 = lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
                    ((lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *)
                     &local_88,&local_8c);
  if (bVar3) {
    local_88 = puVar2 + 0x10;
    FUN_0063c0c8(auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return local_8c;
    }
  }
  else {
    local_a8 = PTR_vtable_007e6e00 + 0x10;
    puStack_98 = PTR_typeinfo_007e60c0;
    local_a0 = PTR_typeinfo_007e55e0;
    throw_exception<boost::bad_lexical_cast>((bad_lexical_cast *)&local_a8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


