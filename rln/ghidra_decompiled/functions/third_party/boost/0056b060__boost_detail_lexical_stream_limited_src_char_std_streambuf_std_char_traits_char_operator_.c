/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b060
 * Function: boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
 * Signature: bool __thiscall operator>>(lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> * this, int * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* bool boost::detail::lexical_stream_limited_src<char, std::streambuf, std::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(int&) */

bool __thiscall
boost::detail::lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>>::operator>>
          (lexical_stream_limited_src<char,std::streambuf,std::char_traits<char>> *this,int *param_1
          )

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
                    /* catch() { ... } // from try @ 0056b284 with catch @ 0056b0d0
                       catch() { ... } // from try @ 0056b4c0 with catch @ 0056b0d0 */
  local_160[1] = (undefined *)0x0;
  FUN_006210e8((long)local_160 + *(long *)PTR_DAT_007e6e78,this);
  *(uint *)((long)local_148 + *(long *)(local_160[0] + -0x18)) =
       *(uint *)((long)local_148 + *(long *)(local_160[0] + -0x18)) & 0xffffefff;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18) + 8) = 6;
  plVar5 = (long *)FUN_00623408(local_160,param_1);
  bVar3 = false;
  lVar1 = (long)plVar5 + *(long *)(*plVar5 + -0x18);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x20) & 5) == 0)) {
                    /* try { // try from 0056b138 to 0066b143 has its CatchHandler @ 0056b340 */
    iVar4 = FUN_006236b8(local_160);
    bVar3 = iVar4 == -1;
  }
  local_160[0] = *(undefined **)PTR_PTR_007e7b30;
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007e7b30 + 8);
  local_160[1] = (undefined *)0x0;
  FUN_006221dc(local_160 + 2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0056b17c to 0066b1a3 has its CatchHandler @ 0056b320 */
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


