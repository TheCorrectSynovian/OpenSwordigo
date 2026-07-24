/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588c6c
 * Function: boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
 * Signature: bool __thiscall operator>>(lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool boost::detail::lexical_stream_limited_src<char, std::streambuf, std::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

bool __thiscall
boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
          (lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *this,
          uint *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined *local_160 [3];
  uint local_148 [52];
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x48);
  FUN_00621e3c(local_160 + 2);
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_160[2] = PTR_DAT_007e6e78 + 0x40;
  local_160[0] = PTR_DAT_007e6e78 + 0x18;
  local_160[1] = (undefined *)0x0;
  FUN_006210e8((long)local_160 + *(long *)PTR_DAT_007e6e78,this);
  *(uint *)((long)local_148 + *(long *)(local_160[0] + -0x18)) =
       *(uint *)((long)local_148 + *(long *)(local_160[0] + -0x18)) & 0xffffefff;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18) + 8) = 6;
  plVar5 = (long *)FUN_00625138(local_160,param_1);
  bVar3 = false;
  lVar1 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
                    /* try { // try from 00588d2c to 00688d37 has its CatchHandler @ 005888e8 */
                    /* catch() { ... } // from try @ 00588b94 with catch @ 00588d34 */
                    /* catch() { ... } // from try @ 00588d4c with catch @ 00588d38 */
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x20) & 5) == 0)) {
    iVar4 = FUN_006236b8(local_160);
                    /* try { // try from 00588d48 to 00688d4b has its CatchHandler @ 00588d5c */
    bVar3 = iVar4 == -1;
                    /* try { // try from 00588d4c to 00688d6f has its CatchHandler @ 00588d38 */
  }
                    /* catch() { ... } // from try @ 00588d48 with catch @ 00588d5c */
  local_160[0] = *(undefined **)PTR_PTR_007e7b30;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007e7b30 + 8);
                    /* catch() { ... } // from try @ 00588e20 with catch @ 00588d70 */
  local_160[1] = (undefined *)0x0;
  FUN_006221dc(local_160 + 2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00588d88 to 00688d8f has its CatchHandler @ 00588e2c */
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


