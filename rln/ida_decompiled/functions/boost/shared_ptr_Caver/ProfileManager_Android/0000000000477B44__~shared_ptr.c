/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477B44
 * Mangled: _ZN5boost10shared_ptrIN5Caver22ProfileManager_AndroidEED2Ev
 * Demangled: boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020C014  sub_20C014
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000477B54 string=0x0000000000477B58 "h"
 *   insn=0x0000000000477B58 string=0x0000000000477B5C ""
 *   insn=0x0000000000477B5C string=0x0000000000477B60 "h"
 *   insn=0x0000000000477B60 string=0x0000000000477B64 "!"
 *   insn=0x0000000000477B64 string=0x0000000000477B68 "h"
 *   insn=0x0000000000477B6C string=0x0000000000477B70 "\t@"
 *   insn=0x0000000000477B74 string=0x0000000000477B78 "h\n@"
 *   insn=0x0000000000477B78 string=0x0000000000477B7C ""
 *   insn=0x0000000000477B7C string=0x0000000000477B80 "h\n"
 *   insn=0x0000000000477B84 string=0x0000000000477B94 "h"
 *   insn=0x0000000000477BA4 string=0x0000000000477BA8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 8);
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return result;
}

