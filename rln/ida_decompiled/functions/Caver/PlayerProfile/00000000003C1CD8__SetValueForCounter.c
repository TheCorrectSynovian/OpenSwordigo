/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1CD8
 * Mangled: _ZN5Caver13PlayerProfile18SetValueForCounterERKSsi
 * Demangled: Caver::PlayerProfile::SetValueForCounter(std::string const&,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003C1D00 string=0x00000000001FBFF0 "0'"
 *   insn=0x00000000003C1D1C string=0x00000000003C1D20 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::SetValueForCounter(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int *v6; // x0
  unsigned int v7; // w22
  unsigned int *v8; // x0
  __int64 result; // x0

  std::map<std::string,int>::operator[]();
  v7 = *v6;
  std::map<std::string,int>::operator[]();
  *v8 = a3;
  result = *a1;
  if ( *a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD, _QWORD))(*(_QWORD *)result + 8LL))(
             result,
             a1,
             a2,
             v7,
             a3);
  return result;
}

