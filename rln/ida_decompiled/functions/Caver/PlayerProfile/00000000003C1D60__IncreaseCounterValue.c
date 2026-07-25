/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1D60
 * Mangled: _ZN5Caver13PlayerProfile20IncreaseCounterValueERKSsi
 * Demangled: Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *
 * Callers: 1
 *   0x00000000001FB610  Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *
 * Callees: 2
 *   0x00000000001FBC50  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *
 * Referenced strings: 8
 *   insn=0x00000000003C1D84 string=0x00000000001FBC50 "0'"
 *   insn=0x00000000003C1D94 string=0x00000000003C1D98 "s"
 *   insn=0x00000000003C1DA0 string=0x00000000003C1DA4 " "
 *   insn=0x00000000003C1DAC string=0x00000000003C1DB0 ""
 *   insn=0x00000000003C1DBC string=0x00000000003C1DC0 ""
 *   insn=0x00000000003C1DC4 string=0x00000000003C1DC8 ""
 *   insn=0x00000000003C1DD4 string=0x00000000001FBFF0 "0'"
 *   insn=0x00000000003C1DE0 string=0x00000000003C1DE4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::IncreaseCounterValue(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // x0
  int v7; // w3
  unsigned int *v8; // x0

  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find();
  if ( a1 + 19 == (_QWORD *)v6 )
  {
    std::map<std::string,int>::operator[]();
    *v8 = a3;
    if ( !a3 )
      return a3;
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 40);
    a3 += v7;
    *(_DWORD *)(v6 + 40) = a3;
    if ( a3 == v7 )
      return a3;
  }
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a1 + 8LL))(*a1, a1, a2);
  return a3;
}

