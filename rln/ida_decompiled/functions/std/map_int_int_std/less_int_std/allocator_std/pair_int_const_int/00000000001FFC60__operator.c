/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFC60
 * Mangled: ._ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_
 * Demangled: std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *
 * Callers: 2
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x000000000044F994  std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFC68 string=0x00000000001FFC6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<int,int>::operator[]()
{
  return _ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_();
}

