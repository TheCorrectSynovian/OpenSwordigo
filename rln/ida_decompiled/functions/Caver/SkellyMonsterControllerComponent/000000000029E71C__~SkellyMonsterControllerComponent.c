/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E71C
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponentD2Ev
 * Demangled: Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001F9C00  Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9C00  Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029E908  Caver::SkellyMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x000000000029E724 string=0x000000000029E728 "(""
 *   insn=0x000000000029E728 string=0x000000000029E72C "D"
 *   insn=0x000000000029E730 string=0x000000000029E734 "`"
 *   insn=0x000000000029E734 string=0x000000000029E738 "\n"
 *   insn=0x000000000029E738 string=0x000000000029E73C "\tA"
 *   insn=0x000000000029E73C string=0x000000000029E740 "@"
 *   insn=0x000000000029E740 string=0x000000000029E744 ""
 *   insn=0x000000000029E748 string=0x000000000029E74C "i"
 *   insn=0x000000000029E74C string=0x000000000029E750 "`"
 *   insn=0x000000000029E754 string=0x000000000029E758 "@"
 *   insn=0x000000000029E754 string=0x000000000029E774 "`"
 *   insn=0x000000000029E758 string=0x000000000029E75C ""
 *   insn=0x000000000029E75C string=0x000000000029E760 ""
 *   insn=0x000000000029E764 string=0x000000000029E768 ""
 *   insn=0x000000000029E768 string=0x000000000029E76C ""
 *   insn=0x000000000029E778 string=0x000000000029E77C "@"
 *   insn=0x000000000029E778 string=0x000000000029E798 "(""
 *   insn=0x000000000029E77C string=0x000000000029E780 ""
 *   insn=0x000000000029E780 string=0x000000000029E784 ""
 *   insn=0x000000000029E788 string=0x000000000029E78C ""
 *   insn=0x000000000029E78C string=0x000000000029E790 ""
 *   insn=0x000000000029E798 string=0x000000000029E79C "`~@"
 *   insn=0x000000000029E79C string=0x000000000029E7A0 ""
 *   insn=0x000000000029E7A0 string=0x000000000029E7A4 "A"
 *   insn=0x000000000029E7A4 string=0x000000000029E7A8 "hv"
 *   insn=0x000000000029E7AC string=0x000000000029E7B0 "@"
 *   insn=0x000000000029E7AC string=0x000000000029E7CC "(""
 *   insn=0x000000000029E7B0 string=0x000000000029E7B4 ""
 *   insn=0x000000000029E7B4 string=0x000000000029E7B8 ""
 *   insn=0x000000000029E7BC string=0x000000000029E7C0 ""
 *   insn=0x000000000029E7C0 string=0x000000000029E7C4 ""
 *   insn=0x000000000029E7CC string=0x000000000029E7D0 "`r@"
 *   insn=0x000000000029E7D0 string=0x000000000029E7D4 ""
 *   insn=0x000000000029E7D4 string=0x000000000029E7D8 "A"
 *   insn=0x000000000029E7D8 string=0x000000000029E7DC "hj"
 *   insn=0x000000000029E7E0 string=0x000000000029E7E4 "@"
 *   insn=0x000000000029E7E4 string=0x000000000029E7E8 ""
 *   insn=0x000000000029E7E8 string=0x000000000029E7EC ""
 *   insn=0x000000000029E7F0 string=0x000000000029E7F4 ""
 *   insn=0x000000000029E7F4 string=0x000000000029E7F8 ""
 *   insn=0x000000000029E808 string=0x000000000029E80C "="
 *   insn=0x000000000029E810 string=0x000000000029E814 "*"
 *   insn=0x000000000029E818 string=0x000000000029E81C ""
 *   insn=0x000000000029E81C string=0x000000000029E888 "(""
 *   insn=0x000000000029E824 string=0x000000000029E854 "(""
 *   insn=0x000000000029E82C string=0x000000000029E830 "("
 *   insn=0x000000000029E830 string=0x000000000029E834 "\t\t@"
 *   insn=0x000000000029E834 string=0x000000000029E838 ")"
 *   insn=0x000000000029E838 string=0x000000000029E83C "\t\t"
 *   insn=0x000000000029E840 string=0x000000000029E844 "\t"
 *   insn=0x000000000029E844 string=0x000000000029E848 ")"
 *   insn=0x000000000029E84C string=0x000000000029E850 " "
 *   insn=0x000000000029E854 string=0x000000000029E858 "`~@"
 *   insn=0x000000000029E858 string=0x000000000029E85C ""
 *   insn=0x000000000029E85C string=0x000000000029E860 "A"
 *   insn=0x000000000029E860 string=0x000000000029E864 "hv"
 *   insn=0x000000000029E868 string=0x000000000029E86C "@"
 *   insn=0x000000000029E86C string=0x000000000029E870 ""
 *   insn=0x000000000029E870 string=0x000000000029E874 ""
 *   insn=0x000000000029E878 string=0x000000000029E87C ""
 *   insn=0x000000000029E87C string=0x000000000029E880 ""
 *   insn=0x000000000029E888 string=0x000000000029E88C "`r@"
 *   insn=0x000000000029E88C string=0x000000000029E890 ""
 *   insn=0x000000000029E890 string=0x000000000029E894 "A"
 *   insn=0x000000000029E894 string=0x000000000029E898 "hj"
 *   insn=0x000000000029E89C string=0x000000000029E8A0 "@"
 *   insn=0x000000000029E8A0 string=0x000000000029E8A4 ""
 *   insn=0x000000000029E8A4 string=0x000000000029E8A8 ""
 *   insn=0x000000000029E8AC string=0x000000000029E8B0 ""
 *   insn=0x000000000029E8B0 string=0x000000000029E8B4 ""
 *   insn=0x000000000029E8E0 string=0x00000000001F9C00 "0'"
 *   insn=0x000000000029E8EC string=0x000000000029E8F0 "pb"
 *   insn=0x000000000029E8F0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029E8F8 string=0x000000000029E8FC "mb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent(
        Caver::SkellyMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 33);
  *(_QWORD *)&v3 = &off_6C26A8;
  *((_QWORD *)&v3 + 1) = &off_6C26E8;
  *(_QWORD *)this = off_6C2590;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 29) = &off_6BEDF8;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6C2728;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

