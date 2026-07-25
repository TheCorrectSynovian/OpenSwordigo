/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BF76C
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7MapNode6PortalES5_EET0_T_S7_S6_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *
 * Callers: 1
 *   0x00000000001FB930  std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x00000000003BF780 string=0x00000000003BF784 "W"
 *   insn=0x00000000003BF7AC string=0x00000000003BF7B0 "^"
 *   insn=0x00000000003BF808 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BF80C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BF814 string=0x00000000003BF818 "5"
 *   insn=0x00000000003BF818 string=0x00000000003BF81C "6"
 *   insn=0x00000000003BF828 string=0x00000000003BF870 "h"
 *   insn=0x00000000003BF830 string=0x00000000003BF834 "\t"
 *   insn=0x00000000003BF830 string=0x00000000003BF850 "\t"
 *   insn=0x00000000003BF834 string=0x00000000003BF838 "*"
 *   insn=0x00000000003BF838 string=0x00000000003BF83C "\n"
 *   insn=0x00000000003BF840 string=0x00000000003BF844 "?"
 *   insn=0x00000000003BF848 string=0x00000000003BF880 "sb"
 *   insn=0x00000000003BF850 string=0x00000000003BF854 "*"
 *   insn=0x00000000003BF854 string=0x00000000003BF858 "\n"
 *   insn=0x00000000003BF858 string=0x00000000003BF85C "?"
 *   insn=0x00000000003BF87C string=0x00000000003BF82C "!"
 *   insn=0x00000000003BF884 string=0x00000000003BF888 "A"
 *   insn=0x00000000003BF890 string=0x00000000003BF894 "?"
 *   insn=0x00000000003BF894 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BF898 string=0x00000000003BF89C "\n"
 *   insn=0x00000000003BF8A0 string=0x00000000003BF8A4 "("
 *   insn=0x00000000003BF8A4 string=0x00000000003BF8A8 ""
 *   insn=0x00000000003BF8B4 string=0x00000000003BF8B8 "a"
 *   insn=0x00000000003BF8C0 string=0x00000000003BF8C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x20
  __int64 v6; // x8

  v4 = a1;
  _ReadStatusReg(TPIDR_EL0);
  if ( a1 == a2 )
    return a3;
  v5 = a3;
  do
  {
    sub_56A528(v5, v4);
    *(_WORD *)(v5 + 16) = *(_WORD *)(v4 + 16);
    v6 = *(_QWORD *)(v4 + 8);
    v4 += 24;
    *(_QWORD *)(v5 + 8) = v6;
    v5 += 24;
  }
  while ( v4 != a2 );
  return v5;
}

