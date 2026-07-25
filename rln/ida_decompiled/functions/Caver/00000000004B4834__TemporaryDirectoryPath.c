/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4834
 * Mangled: _ZN5Caver22TemporaryDirectoryPathEv
 * Demangled: Caver::TemporaryDirectoryPath(void)
 *
 * Callers: 2
 *   0x00000000001FEF80  Caver::TemporaryDirectoryPath(void)
 *   0x00000000004B4670  Caver::CachesDirectoryPath(void)
 *
 * Callees: 3
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x000000000056A528  sub_56A528
 *
 * Referenced strings: 4
 *   insn=0x00000000004B4848 string=0x00000000004B484C "a%"
 *   insn=0x00000000004B484C string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004B4860 string=0x00000000001FB380 "0'"
 *   insn=0x00000000004B4874 string=0x00000000004B4878 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TemporaryDirectoryPath@<X0>(__int64 a1@<X8>)
{
  if ( (Caver::FileExistsAtPath() & 1) == 0 )
    Caver::CreateDirectoryAtPath();
  return sub_56A528(a1, &qword_6E9F50);
}

